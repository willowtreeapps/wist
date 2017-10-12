'use strict';

const Parser = require('../../parser');

module.exports = {
    create(context) {
        const checkThen = (node) => {
            const then = node.getTokens(Parser.keyword.THEN);
            if (then.length === 0) {
                context.report({
                    message: `Missing 'THEN' keyword for 'IF' statement`,
                    loc: {
                        start: node.start,
                        end: node.stop
                    }
                });
            }
        };

        return {
            'ifSingleLineStatement:enter': function(node) {
                checkThen(node);
            },

            'ifBlockStatement:enter': function(node) {
                checkThen(node);
            },

            'ifElseIfBlockStatement:enter': function(node) {
                checkThen(node);
            }
        };
    }
};