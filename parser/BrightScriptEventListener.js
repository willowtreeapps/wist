const BrightScriptEventGenerator = require('./BrightScriptEventGenerator'),
    BrightScriptParser = require('./antlr/BrightScriptParser').BrightScriptParser;

const FunctionType = {
    Void: 'Void',
    Dynamic: 'Dynamic'
};

const isFunction = (context) => isSub(context) || context.ruleIndex === BrightScriptParser.RULE_anonymousFunctionDeclaration || context.ruleIndex === BrightScriptParser.RULE_functionDeclaration;
const isSub = (context) => context.ruleIndex === BrightScriptParser.RULE_anonymousSubDeclaration || context.ruleIndex === BrightScriptParser.RULE_subDeclaration;
const typeText = (token, context) => {
    if (isSub(context) || (token && token.getText().toUpperCase() === 'VOID')) {
       return FunctionType.Void;
    }
    
    if (token != null) {
        let text = token.getText(),
            first = text[0].toUpperCase();
            
        return `${first}${text.slice(1).toLowerCase()}`;
    }

    return FunctionType.Dynamic;
};

class BrightScriptEventListener extends BrightScriptEventGenerator {
    constructor(emitter) {
        super(emitter);

        this.functionNames = [];
    }

    enterFunctionDeclaration(context) {
        this.checkDeclaration(context);
    }

    enterSubDeclaration(context) {
        this.checkDeclaration(context);
    }

    exitReturnStatement(context) {
        let functionContext = context;

        while (functionContext.parentCtx != null && !isFunction(functionContext)) {
            functionContext = functionContext.parentCtx;
        }

        // We check isFunction again because we may have traversed all the way to
        // the top of the file. If that happens we need to bail.
        if (functionContext == null || !isFunction(functionContext)) {
            return;
        }

        const expression = context.children[1];
        const baseTypeToken = functionContext.children.find(child => child.ruleIndex === BrightScriptParser.RULE_baseType);
        const baseType = typeText(baseTypeToken, functionContext);

        if (baseType === FunctionType.Void && expression != null) {
            context.parser.notifyErrorListeners(`return value unexpected for function with return type of '${baseType}'`, context.start);
        }
        else if (baseType !== FunctionType.Void && expression == null) {
            context.parser.notifyErrorListeners(`return value expected for function with return type of '${baseType}'`, context.start);
        }
    }

    checkDeclaration(context) {
        const functionExists = name => this.functionNames.some(funcName => name.toUpperCase() === funcName.toUpperCase());

        context.children.forEach(child => {
            if (child.ruleIndex === BrightScriptParser.RULE_untypedIdentifier) {
                let name = child.getText();

                if (functionExists(name)) {
                    child.parser.notifyErrorListeners(`function '${name}' is declared multiple times`, context.start);
                }
                else {
                    this.functionNames.push(name);
                }
            }

            return;
        });
    }
}

module.exports = BrightScriptEventListener;