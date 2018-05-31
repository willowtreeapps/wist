'use strict';

const shims = require('../util/shims');

module.exports = {

    create(context) {

        function isArrayElement(context) {
            return context == 'expression'
                || context == 'arrayInitializer'
                || context == 'associativeArrayInitializer';
        }

        function isAssociativeArrayElement(context) {
            return context == 'associativeElementInitializer';
        }

        const report = (astNode) => {
            astNode.children.zipWithNext((current, next) => {
                let currentNode = current.node;
                if (isArrayElement(currentNode.context)) {
                    let nextNode = next.node;
                    if (nextNode.text !== '\n' && (nextNode.text != ']' && nextNode.text != '}')) {
                        context.report({
                            message: `Expected 'linebreak' but found '${nextNode.text}' instead`,
                            loc: {
                                start: currentNode.start,
                                end: currentNode.stop
                            }
                        });
                    }
                }
            });
        };

        return {
            'arrayInitializer:exit': function (node) {
                report(node);
            },

            'associativeArrayInitializer:exit': function (node) {
                report(node);
            }
        };
    }
};
