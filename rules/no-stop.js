'use strict';

module.exports = {
    create(context) {
        return {
            'stopStatement:enter': function(node) {
                context.report({
                    message: "'STOP' statements should only be used for debugging purposes.",
                    loc: {
                        start: node.start,
                        end: node.stop
                    }
                });
            }
        };
    }
};