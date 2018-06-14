/**
 * When constructing console strings from non-string objects, avoid '+' operator 
 * which requires objects to be converted to strings first.
 * This approach tends to be susceptible to crashes.
 * 
 * @description Print concatenation must be done with a semicolon.
 * @since 2.0.0
 */
'use strict';

module.exports = {
    create(context) {
        return {
            'printStatement:enter': function (ast) {
                ast.children.forEach(element => {
                    let node = element.node;
                    if (node.context == "expression") {
                        let concatSymbol = element.children.findFirst(child => child.node.text == "+")
                        if (concatSymbol != null) {
                            context.report({
                                message: `'+' should not be used in print statements. Consider using a ';' instead.`,
                                loc: {
                                    start: ast.node.start,
                                    end: ast.node.stop
                                }
                            });
                        }
                    }
                });
            }
        };
    }
};