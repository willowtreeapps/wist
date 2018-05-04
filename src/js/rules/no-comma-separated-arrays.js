'use strict';

const Parser = require('../../parser'),
    ParserUtil = require('../util/parser'),
    ArrayElementIterator = ParserUtil.ArrayElementIterator,
    AssociativeArrayElementIterator = ParserUtil.AssociativeArrayElementIterator;

module.exports = {
    create(context) {
        const report = (current, next) => {
            if (next.ruleIndex !== 45) { // Parser.rule.endOfLine) {
                context.report({
                    message: `Expected line break but found '${next.getText()}' instead`,
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