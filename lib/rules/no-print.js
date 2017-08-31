'use strict';

module.exports = {
    create(context) {
        return {
            'printStatement:enter': function(node) {
                context.report({
                    message: `Unpexected '${node.start.text.toUpperCase()}' statement.`,
                    loc: {
                        start: node.start,
                        end: node.stop
                    }
                });
            }
        };
    }
};