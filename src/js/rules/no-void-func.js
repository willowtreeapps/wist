'use strict';

const Parser = require('../../parser');

module.exports = {
    create(context) {
        const isVoidFunction = (baseType, parentContext) => {
            return baseType.toUpperCase() === 'VOID'
                && (parentContext.ruleIndex === Parser.rule.functionDeclaration || parentContext.ruleIndex === Parser.rule.anonymousFunctionDeclaration);
        };

        return {
            'baseType:exit': function(node) {
                const parentContext = node.parentCtx;
                const baseType = node.getText();

                if (isVoidFunction(baseType, parentContext)) {
                    const funcName = parentContext.children[1].getText();

                    context.report({
                        message: `'FUNCTION' of type 'VOID' should be declared as a 'SUB'`,
                        loc: {
                            start: parentContext.start,
                            end: parentContext.stop
                        }
                    });
                }
            }
        };
    }
};
