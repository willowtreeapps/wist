'use strict';

const Parser = require('../../parser');

const Type = {
    String: {
        description: 'string',
        declarationCharacter: '$'
    },
    Integer: {
        description: 'integer',
        declarationCharacter: '%'
    },
    Float: {
        description: 'float',
        declarationCharacter: '!'
    },
    Double: {
        description: 'double',
        declarationCharacter: '#'
    },
    LongInteger: {
        description: 'long integer',
        declarationCharacter: '&'
    },
    Unknown: {
        description: '',
        declarationCharacter: ''
    }
};

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
        return Type.String;
    }
    
    const value = node.getText();

    if (node.start.type === Parser.token.INT_LITERAL) {
        if (value.charAt(value.length - 1) === '&') {
            return Type.LongInteger;
        }

        return Type.Integer;
    }

    if (node.start.type === Parser.token.FLOAT_LITERAL) {
        if (isDouble(value)) {
            return Type.Double;
        }

        return Type.Float;
    }

    return Type.Unknown;
}

module.exports = {
    create(context) {
        return {
            'expression:exit': function(node) {
                const equalityIndex = node.children.findIndex(child => child.getText && child.getText() === '=');
                
                if (equalityIndex < 0) {
                    return;
                }

                const variableName = node.children[equalityIndex - 1].getText();
                const rightOperand = node.children[equalityIndex + 1];

                if (rightOperand == null) {
                    console.log(node.getText());
                    return;
                }

                const type = getType(rightOperand);

                if (type !== Type.Unknown && type.declarationCharacter !== variableName.charAt(variableName.length - 1)) {
                    const aan = type === Type.Integer ? 'an' : 'a';
            
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