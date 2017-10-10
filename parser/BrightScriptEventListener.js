const BrightScriptEventGenerator = require('./BrightScriptEventGenerator'),
    BrightScriptParser = require('./antlr/BrightScriptParser').BrightScriptParser;

const isFunction = (context) => isSub(context) || context.ruleIndex === BrightScriptParser.RULE_anonymousFunctionDeclaration || context.ruleIndex === BrightScriptParser.RULE_functionDeclaration;
const isSub = (context) => context.ruleIndex === BrightScriptParser.RULE_anonymousSubDeclaration || context.ruleIndex === BrightScriptParser.RULE_subDeclaration;
const typeText = (text) => {
    let first = text[0].toUpperCase();
    return `${first}${text.slice(1).toLowerCase()}`;
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
        const isVoid = (baseTypeToken && baseTypeToken.getText().toUpperCase() === 'VOID') || isSub(functionContext);
        
        let baseType;
        if (isSub(functionContext)) { // Sub is always 'Void'
            baseType = 'Void';
        }
        else if (baseTypeToken != null) { // It's a function with a return type declared
            baseType = typeText(baseTypeToken.getText());
        }
        else { // It's a function with no return type declared, which defaults to 'Dynamic'
            baseType = 'Dynamic';
        }

        if (isVoid && expression != null) {
            context.parser.notifyErrorListeners(`return value unexpected for function with return type of '${baseType}'`);
        }
        else if (!isVoid && expression == null) {
            context.parser.notifyErrorListeners(`return value expected for function with return type of '${baseType}'`);
        }
    }

    checkDeclaration(context) {
        const functionExists = name => this.functionNames.some(funcName => name.toUpperCase() === funcName.toUpperCase());

        context.children.forEach(child => {
            if (child.ruleIndex === BrightScriptParser.RULE_untypedIdentifier) {
                let name = child.getText();

                if (functionExists(name)) {
                    child.parser.notifyErrorListeners(`function '${name}' is declared multiple times`);
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