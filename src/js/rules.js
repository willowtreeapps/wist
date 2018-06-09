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