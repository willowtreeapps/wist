'use strict';

module.exports = {
    create(context) {
        return {
            'printStatement:enter': function(node) {
                context.report({
                    message: `'${node.start.text.toUpperCase()}' statements should only be used for debugging purposes.`,
                    loc: {
                        start: node.start,
                        end: node.stop
                    }
                });
            }
        };
    }
};