const BrightScriptEventGenerator = require('./BrightScriptEventGenerator'),
    BrightScriptParser = require('./antlr/BrightScriptParser').BrightScriptParser;

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

    checkDeclaration(context) {
        const functionExists = name => this.functionNames.some(funcName => name.toUpperCase() === funcName.toUpperCase());

        context.children.forEach(child => {
            if (child.ruleIndex === BrightScriptParser.RULE_untypedIdentifier) {
                let name = child.getText();

                if (functionExists(name)) {
                    child.parser.notifyErrorListeners(`function '${name}' is declared multiple times.`);
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