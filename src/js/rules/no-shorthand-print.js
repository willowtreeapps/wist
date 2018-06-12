/**
 * Avoid '?' shortcut as its easily confused with the conditional 
 * operator commonly found in other languages.
 * @description Disallow shorthand print statements using `?`
 * @since 2.0.0
 */
'use strict';

const shims = require('../util/shims');

module.exports = {
    create(context) {
        return {
            'printStatement:enter': function(astNode) {
                let printSymbol = astNode.children.get(0);
                console.log(printSymbol.node.text);
                if(printSymbol.node.text == "?"){
                    context.report({
                        message: `Print statements should not use the '?' operator. Use 'print' instead.`,
                        loc: {
                            start: astNode.node.start,
                            end: astNode.node.stop
                        }
                    });
                }
            }
        };
    }
};