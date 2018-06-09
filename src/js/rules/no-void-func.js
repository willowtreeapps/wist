'use strict';

const shims = require('../util/shims');

module.exports = {
    create(context) {

        function report(node) {
            context.report({
                message: `function of type 'void' should be declared as a 'sub'`,
                loc: {
                    start: node.start,
                    end: node.stop
                }
            });
        }

        function checkForVoidFunction(astNode) {
            astNode.children.forEach(element => {
                let node = element.node;
                if (node.context == 'baseType' && node.text.toUpperCase() == "VOID") {
                    report(astNode.node);
                }
            });
        }

        return {
            'functionDeclaration:exit': (astNode) => checkForVoidFunction(astNode),
            'anonymousFunctionDeclaration:exit': (astNode) => checkForVoidFunction(astNode)
        };
    }
}