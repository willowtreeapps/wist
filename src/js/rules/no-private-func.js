'use strict';

const shims = require('../util/shims');

module.exports = {
    create(context) {
        let privateFuncs = [];

        const isFunctionInvocation = (node) => {
            let openParen = node.children.get(1);
            return openParen && openParen.node.text === '(';
        };

        const isLocalPrivateFunctionInvocation = (funcName) => {
            return privateFuncs.some(privateFunc => privateFunc.toUpperCase() === funcName.toUpperCase());
        }

        const report = (astNode) => {
            context.report({
                message: `A private function was invoked outside of the local scope.`,
                loc: {
                    start: astNode.node.start,
                    end: astNode.node.stop
                }
            });
        }

        return {
            'componentBody:exit': function (astNode) {
                let functionNames = [];
                let nodes = astNode.children.forEach((element) => {
                    if (element.node.context == 'componentBodyElement') {
                        let functionName = element.children.forEach((func) => {
                            let name = func.children.findFirst((decleration) => {
                                let declarationNode = decleration.node;
                                return declarationNode.context == 'untypedIdentifier';
                            });

                            if (name != null) {
                                let text = name.node.text;
                                if (text.startsWith('_')) {
                                    functionNames.push(text);
                                }
                            }
                        });
                    }
                });
                privateFuncs = functionNames;
            },

            'expression:exit': function (node) {
                if (!isFunctionInvocation(node)) {
                    return;
                }

                let invocationPath = node.children.get(0).node.text;

                if (invocationPath.indexOf('.') > -1) {
                    const invocationParts = invocationPath.split('.');
                    const funcName = invocationParts[invocationParts.length - 1];

                    if (funcName.startsWith('_')) {
                        report(node);
                    }
                    return;
                }

                if (invocationPath.startsWith('_') && !isLocalPrivateFunctionInvocation(invocationPath)) {
                    report(node);
                }
            }
        };
    }
};
