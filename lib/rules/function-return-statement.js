'use strict';

const Parser = require('../../parser'),
    antlr4 = require('antlr4'),
    Trees = antlr4.tree.Trees;

const isAnonymousFunction = (context) => {
    return context.ruleIndex === Parser.rule.anonymousFunctionDeclaration
        || context.ruleIndex === Parser.rule.anonymousSubDeclaration;
};

const isFunction = (context) => {
    return isAnonymousFunction(context)
        || context.ruleIndex === Parser.rule.functionDeclaration
        || context.ruleIndex === Parser.rule.subDeclaration;
};

const getParentContext = (context) => {
    let parentContext = context;

    while (!isFunction(parentContext)) {
        parentContext = parentContext.parentCtx;
    }

    return parentContext;
};

module.exports = {
    create(context) {
        return {
            'functionDeclaration:exit': function(node) {
                const baseTypeToken = node.children.find(child => child.ruleIndex === Parser.rule.baseType);

                // Void functions do not require an explicit return statement
                if (baseTypeToken && baseTypeToken.getText().toUpperCase() === 'VOID') {
                    return;
                }

                let children = Trees.findAllRuleNodes(node, Parser.rule.returnStatement),
                    i = children.length-1;

                // Remove return statements that are coming from anonymous functions/subs
                // within the function
                for (;i >= 0; i--) {
                    let child = children[i];
                    let context = getParentContext(child);

                    if (isAnonymousFunction(context)) {
                        children.splice(i, 1);
                    }
                }

                if (children.length === 0) {
                    const funcName = node.children[1].getText();

                    context.report({
                        message: `Missing return statement for function '${funcName}'`,
                        loc: {
                            start: node.start,
                            end: node.stop
                        }
                    });
                }
            },
            'anonymousFunctionDeclaration:exit': function(node) {
                const children = Trees.findAllRuleNodes(node, Parser.rule.returnStatement);

                if (children.length === 0) {
                    context.report({
                        message: 'Missing return statement for anonymous function',
                        loc: {
                            start: node.start,
                            end: node.stop
                        }
                    });
                }
            }
        };
    }
};