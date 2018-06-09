'use strict';

const shims = require('../util/shims');

module.exports = {
    create(context) {
        const report = (astNode) => {
            let functionIdentNode = astNode.children.findFirst(element => element.node.context == 'untypedIdentifier');
            if (functionIdentNode != null) {
                const funcName = functionIdentNode.node.text;
                const firstChar = funcName.charAt(0);
                if (firstChar !== firstChar.toLowerCase()) {
                    context.report({
                        message: `Function '${funcName}' is not camel case`,
                        loc: {
                            start: functionIdentNode.node.start,
                            end: functionIdentNode.node.stop
                        }
                    });
                }
            }
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