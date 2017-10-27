'use strict';

const Parser = require('../../parser');

module.exports = {
    create(context) {
        return {
            'expression:exit': function(node) {
                const equalityIndex = node.children.findIndex(child => child.getText && child.getText() === '=');
                
                if (equalityIndex < 0) {
                    return;
                }

                const parent = node.parentCtx;
                if (parent.ruleIndex !== Parser.rule.blockStatement) { // This means that we're most likely in an equality scenario, not an assignment scenario
                    return;
                }

                const variableName = node.children[equalityIndex - 1].getText();
                const rightOperand = node.children[equalityIndex + 1];

                const type = Parser.getType(rightOperand);
                const declaredType = variableName.charAt(variableName.length - 1);

                if (type === Parser.type.Indeterminate) {
                    context.report({
                        message: `'${variableName}' has an indeterminate type`,
                        loc: {
                            start: node.start,
                            end: node.stop
                        }
                    });
                }

                if (type !== Parser.type.Indeterminate && type.declarationCharacter && type.declarationCharacter !== variableName.charAt(variableName.length - 1)) {
                    const aan = type === Parser.type.Integer ? 'an' : 'a';
            
                    context.report({
                        message: `'${variableName}' is ${aan} ${type.description}, but is not declared as ${aan} ${type.description}`,
                        loc: {
                            start: node.start,
                            end: node.stop
                        }
                    });
                }
            }
        };
    }
};