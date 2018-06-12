/**
* Because Brightscript can be inconsitent about type coercion,
* For example: `invalid` is valid for Object but not for Integer, 
* It is sometimes preferable to avoid type declarations in function definitions 
* and resort to manual type checks where needed.
* 
* @description Disallows types in arguments
* @since 2.0.0
*/
'use strict';

const shims = require('../util/shims');

module.exports = {
    create(context) {
        return {
            'parameter:exit': function (astNode) {
                let node = astNode.node;
                let type = astNode.children.findFirst(element => element.node.context == "baseType");
                if(type != null && type.node.text.toLowerCase() != 'dynamic') {
                    context.report({
                        message: `Type '${type.node.text}' should not be declared explicitly`,
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