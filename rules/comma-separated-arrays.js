'use strict';

const ParserUtil = require('../util/parser'),
    ArrayElementIterator = ParserUtil.ArrayElementIterator,
    AssociativeArrayElementIterator = ParserUtil.AssociativeArrayElementIterator;

module.exports = {
    create(context) {
        const report = (current, next) => {
            if (next.getText() !== ',') {
                context.report({
                    message: "Missing ',' after array element",
                    loc: {
                        start: current.start,
                        end: current.stop
                    }
                });
            }
        };

        return {
            'arrayInitializer:exit': function(node) {
                const iterator = new ArrayElementIterator(node);
                iterator.iterate(report);
            },

            'associativeArrayInitializer:exit': function(node) {
                const iterator = new AssociativeArrayElementIterator(node);
                iterator.iterate(report);
            }
        };
    }
};