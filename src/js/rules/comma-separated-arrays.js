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

        return {
            'arrayInitializer:exit': function (astNode) {
                astNode.children.zipWithNext((current, next) => {
                    let currentNodeContext = current.node.context;
                    if (isArrayElement(currentNodeContext)) {
                        if (next.node.text != ',' && next.node.text != ']') {
                            context.report({
                                message: "Missing ',' after array element",
                                loc: {
                                    start: current.node.start,
                                    end: current.node.stop
                                }
                            });
                        }
                    }
                });
            },

            'associativeArrayInitializer:exit': function (astNode) {
                astNode.children.zipWithNext((current, next) => {
                    let currentNodeContext = current.node.context;
                    if (isAssociativeArrayElement(currentNodeContext)) {
                        if (next.node.text != ',' && next.node.text != '}') {
                            context.report({
                                message: "Missing ',' after associative array element",
                                loc: {
                                    start: current.node.start,
                                    end: current.node.stop
                                }
                            });
                        }
                    }
                });
            }
        };
    }
};
