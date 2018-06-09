'use strict';

const invalidKeys = [
    "AddReplace",
    "Lookup",
    "DoesExist",
    "Delete",
    "Clear",
    "Keys",
    "Items",
    "SetModeCaseSensitive",
    "LookupCI",
    "Append",
    "Count"
];


module.exports = {
    create(context) {
        return {
            'associativeElementInitializer:exit': function (astNode) {
                let key = astNode.children.get(0).node;
                let match = invalidKeys.find((element) => element.toLowerCase() == key.text.toLowerCase() )
                if (match != null) {
                    context.report({
                        message: `Associative array key '${key.text}' collides with a global function name.`,
                        loc: {
                            start: key.start,
                            end: key.stop
                        }
                    });
                }
            }
        };
    }
};