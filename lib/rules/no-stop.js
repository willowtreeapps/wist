'use strict';

module.exports = {
    create(context) {
        return {
            'stopStatement:enter': function(node) {
                context.report({
                    message: `Unpexected 'STOP' statement.`,
                    loc: {
                        start: node.start,
                        end: node.stop
                    }
                });
            }
        };
    }
};