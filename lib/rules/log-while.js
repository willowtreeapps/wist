'use strict';

module.exports = {
    create(context) {
        return {
            'whileStatement:enter': function(node) {
                context.report({
                    message: `Entered whileStatement`,
                    loc: {
                        start: {
                            line: node.start.line,
                            column: node.start.column
                        }
                    }
                });
            },
            'whileStatement:exit': function(node) {
                context.report({
                    message: `Exited whileStatement`,
                    loc: {
                        end: {
                            line: node.stop.line,
                            column: node.stop.column
                        }
                    }
                });
            }
        };
    }
};