/*
Copyright JS Foundation and other contributors, https://js.foundation

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

/*
* This code is taken from the eslint repo
* (https://github.com/eslint/eslint)
* and modified to meet our needs.
*/

'use strict';

const loadRules = require('./load-rules');

class Rules {
    constructor() {
        this._rules = Object.create(null);
        this.load();
    }

    define(ruleId, ruleModule) {
        this._rules[ruleId] = ruleModule;
    }

    load(rulesDir, cwd) {
        const newRules = loadRules(rulesDir, cwd);

        Object.keys(newRules).forEach(ruleId => {
            this.define(ruleId, newRules[ruleId]);
        });
    }

    get(ruleId) {
        if (typeof this._rules[ruleId] === 'string') {
            return require(this._rules[ruleId]);
        }

        return this._rules[ruleId];
    }

    getAllLoadedRules() {
        const allRules = new Map();

        Object.keys(this._rules).forEach(name => {
            const rule = this.get(name);

            allRules.set(name, rule);
        });

        return allRules;
    }
}

module.exports = Rules;