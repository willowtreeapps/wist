'use strict';

const Parser = require('../../parser');

module.exports = {
    create(context) {
        return {
            'functionDeclaration:exit': function(node) {
                const baseTypeToken = node.children.find(child => child.ruleIndex === Parser.rule.baseType);

                if (baseTypeToken == null) {
                    const funcName = node.children[1].getText();
                    const endOfDeclaration = node.children.find(child => child.ruleIndex === Parser.rule.endOfStatement);
                    
                    context.report({
                        message: `Missing type declaration for function '${funcName}'`,
                        loc: {
                            start: node.start,
                            end: endOfDeclaration.start
                        }
                    });
                }
            },
            'anonymousFunctionDeclaration:exit': function(node) {
                const baseTypeToken = node.children.find(child => child.ruleIndex === Parser.rule.baseType);
                
                if (baseTypeToken == null) {
                    const endOfDeclaration = node.children.find(child => child.ruleIndex === Parser.rule.endOfStatement);        

                    context.report({
                        message: `Missing type declaration for anonymous function`,
                        loc: {
                            start: node.start,
                            end: endOfDeclaration.start
                        }
                    });
                }
            }
        };
    }
};