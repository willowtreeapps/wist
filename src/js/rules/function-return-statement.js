'use strict';

const shims = require('../util/shims');

module.exports = {
    create(context) {
        return {
            'functionDeclaration:exit': function (astNode) {
                let name;
                let hasReturnStatement = false;
                let baseType = 'dynamic';

                astNode.children.forEach(element => {
                    let node = element.node;
                    if (node.context == 'untypedIdentifier') {
                        name = node.text;
                    }
                    if (node.context == 'baseType') {
                        baseType = node.text;
                    }
                    if (node.context == 'block') {
                        element.children.forEach(blockElement => {
                            if (blockElement.node.context == 'blockStatement') {
                                blockElement.children.forEach(blockStatementElement => {
                                    if (blockStatementElement.node.context == "returnStatement") {
                                        hasReturnStatement = true;
                                    }
                                });
                            }
                        });
                    }
                });

                if (baseType.toUpperCase() == 'VOID' || hasReturnStatement) {
                    return
                }

                context.report({
                    message: `Missing return statement for function '${name}' of return type '${baseType}'`,
                    loc: {
                        start: astNode.node.start,
                        end: astNode.node.stop
                    }
                });
            },
            'anonymousFunctionDeclaration:exit': function (astNode) {
                let hasReturnStatement = false;
                let baseType = 'dynamic';

                astNode.children.forEach(element => {
                    let node = element.node;
                    if (node.context == 'baseType') {
                        baseType = node.text;
                    }
                    if (node.context == 'block') {
                        element.children.forEach(blockElement => {
                            if (blockElement.node.context == 'blockStatement') {
                                blockElement.children.forEach(blockStatementElement => {
                                    if (blockStatementElement.node.context == 'returnStatement') {
                                        hasReturnStatement = true;
                                    }
                                });
                            }
                        });
                    }
                });
                if (baseType.toUpperCase() == 'VOID' || hasReturnStatement) {
                    return
                }

                context.report({
                    message: `Missing return statement for anonymous function of return type '${baseType}'`,
                    loc: {
                        start: astNode.node.start,
                        end: astNode.node.stop
                    }
                });
            }
        };
    }
};
