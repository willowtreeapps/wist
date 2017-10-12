'use strict';

const antlr4 = require('antlr4'),
    Trees = antlr4.tree.Trees;

module.exports = {
    create(context) {
        let privateFuncs = [];

        const isFunctionInvocation = (node) => {
            let openParen = node.children[1];
            return openParen && openParen.getText() === '(';
        };

        const isLocalPrivateFunctionInvocation = (funcName) => {
            return privateFuncs.some(privateFunc => privateFunc.toUpperCase() === funcName.toUpperCase());
        }

        const report = (node) => {
            context.report({
                message: `A private function was invoked outside of the local scope.`,
                loc: {
                    start: node.start,
                    end: node.stop
                }
            });
        }

        return {
            'startRule:exit': function(node) {
                privateFuncs = Trees.findAllRuleNodes(node, 3)
                    .map(element => element.children[0].children[1].getText())
                    .filter(func => func.startsWith('_'));
            },

            'expression:exit': function(node) {
                if (!isFunctionInvocation(node)) {
                    return;
                }

                let invocationPath = node.children[0].getText();

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