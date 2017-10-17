'use strict';

const Parser = require('../../parser');

const isDouble = (value) => {
    if (value.charAt(value.length - 1) === '#') {
        return true;
    }

    const decimalValue = value.split('.')[1];

    if (decimalValue == null) {
        return false;
    }

    if (decimalValue.length >= 10) {
        return true;
    }

    if (decimalValue.indexOf('D') > -1 || decimalValue.indexOf('d') > -1) {
        return true;
    }

    return false;
}

const getType = (node) => {
    if (node.start.type === Parser.token.STRING_LITERAL) {
        return Parser.type.String;
    }
    
    const value = node.getText();

    if (node.start.type === Parser.token.INT_LITERAL) {
        if (value.charAt(value.length - 1) === '&') {
            return Parser.type.LongInteger;
        }

        return Parser.type.Integer;
    }

    if (node.start.type === Parser.token.FLOAT_LITERAL) {
        if (isDouble(value)) {
            return Parser.type.Double;
        }

        return Parser.type.Float;
    }

    return Parser.type.Unknown;
}

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

                const type = getType(rightOperand);

                if (type !== Parser.type.Unknown && type.declarationCharacter !== variableName.charAt(variableName.length - 1)) {
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