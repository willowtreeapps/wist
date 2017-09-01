'use strict';

module.exports = {
    create(context) {
        return {
            'printStatement:enter': function(node) {
                const end = node.children.length > 0 ? node.children[node.children.length - 1] : node;

                const problem = {
                    message: `'${node.start.text.toUpperCase()}' statements should only be used for debugging purposes.`,
                    loc: {
                        start: {
                            line: node.start.line,
                            column: node.start.column
                        }
                    }
                };

                if (end && end.stop) {
                    problem.loc.end = {
                        line: end.stop.line,
                        column: end.stop.column
                    }
                }

                context.report(problem);
            }
        };
    }
};