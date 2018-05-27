'use strict';

module.exports = {
    create(context) {
        return {
            'stopStatement:enter': function (astNode) {
                let node = astNode.node;
                context.report({
                    message: "'stop' statements should only be used for debugging purposes.",
                    loc: {
                        start: node.start,
                        end: node.stop
                    }
                });
            }
        };
    }
};