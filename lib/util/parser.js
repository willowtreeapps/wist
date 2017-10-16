'use strict';

const Parser = require('../../parser');

class ArrayElementIterator {
    constructor(node) {
        this.children = node.children;
        
        const arrayElementTotal = this.getArrayElementTotal();
        this.arrayElementTotal = arrayElementTotal;
    }

    iterate(action) {
        let arrayElementCount = 0;

        this.children.forEach((child, index) => {
            if (!this.isArrayElement(child)) {
                return;
            }

            arrayElementCount += 1;

            if (arrayElementCount === this.arrayElementTotal) {
                return;
            }

            const nextElement = this.children[index + 1];
            action(child, nextElement);
        });
    }

    isArrayElement(element) {
        return element.ruleIndex === Parser.rule.expression
            || element.ruleIndex === Parser.rule.arrayInitializer
            || element.ruleIndex === Parser.rule.associativeArrayInitializer;

    }

    getArrayElementTotal() {
        return this.children.reduce((total, child) => {
            if (this.isArrayElement(child)) {
                return total + 1;
            }
    
            return total;
        }, 0);
    }
}

class AssociativeArrayElementIterator extends ArrayElementIterator {
    isArrayElement(element) {
        return element.ruleIndex === Parser.rule.associativeElementInitializer;
    }
}

module.exports = {
    ArrayElementIterator,
    AssociativeArrayElementIterator
};