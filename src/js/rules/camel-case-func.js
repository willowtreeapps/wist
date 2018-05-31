'use strict';

const shims = require('../util/shims');

module.exports = {
    create(context) {
        const report = (astNode) => {
            astNode.children.forEach(element => {
                let node = element.node;
                if (node.context == 'untypedIdentifier') {
                    const funcName = node.text;
                    const firstChar = funcName.charAt(0);
                    if (firstChar !== firstChar.toLowerCase()) {
                        context.report({
                            message: `function '${funcName}' is not camel case`,
                            loc: {
                                start: node.start,
                                end: node.stop
                            }
                        });
                    }
                }
            });
        };

        return {
            'functionDeclaration:exit': function (node) {
                report(node);
            },
            'subDeclaration:exit': function (node) {
                report(node);
            }
        };
    }
};