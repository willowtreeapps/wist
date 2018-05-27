'use strict';

module.exports = {
    create(context) {
        const report = (astNode) => {

            const funcName = astNode.children.get(0).text;
            if (funcName == null) {
                return;
            }

            const first = funcName.charAt(0);

            if (first !== first.toLowerCase()) {
                const endOfDeclaration = astNode.children.find(child => child.ruleIndex === Parser.rule.endOfStatement);

                context.report({
                    message: `function '${funcName}' is not camel case`,
                    loc: {
                        start: node.start,
                        end: endOfDeclaration.start
                    }
                });
            }
        };

        return {
            'functionDeclaration:exit': function (node) {
                report(node);
            },
            'subDeclaration:exit': function (node) {
                report(node);
            }
        };
    }
};