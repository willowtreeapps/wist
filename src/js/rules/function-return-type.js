'use strict';

const shims = require('../util/shims');

module.exports = {
    create(context) {
        return {
            'functionDeclaration:exit': function (astNode) {

                let name;
                let type;
                astNode.children.forEach(element => {
                    let node = element.node;
                    if (node.context == 'untypedIdentifier') {
                        name = node.text;
                    }
                    if (node.context == 'baseType') {
                        type = node.text;
                    }
                });

                if (type == null) {
                    context.report({
                        message: `Missing type declaration for function '${name}'`,
                        loc: {
                            start: astNode.node.start,
                            end: astNode.node.stop
                        }
                    });
                }
            },
            'anonymousFunctionDeclaration:exit': function (astNode) {
                let type;
                astNode.children.forEach(element => {
                    let node = element.node;
                    if (node.context == 'baseType') {
                        type = node.text;
                    }
                });
                if (type == null) {
                    context.report({
                        message: `Missing type declaration for anonymous function`,
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
