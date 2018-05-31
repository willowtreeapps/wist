'use strict';

const shims = require('../util/shims');

module.exports = {
    create(context) {
        const checkThen = (astNode) => {
            let then = astNode.children.find((element) => {
                let node = element.node;
                return node.context == 'terminalNode' && node.text.toLowerCase() == 'then'
            });

            if (then == null) {
                context.report({
                    message: `Missing 'then' in 'if' statement`,
                    loc: {
                        start: astNode.node.start,
                        end: astNode.node.stop
                    }
                });
            }
        };

        return {
            'ifSingleLineStatement:enter': function (node) {
                checkThen(node);
            },

            'ifBlockStatement:enter': function (node) {
                checkThen(node);
            },

            'ifElseIfBlockStatement:enter': function (node) {
                checkThen(node);
            }
        };
    }
};
