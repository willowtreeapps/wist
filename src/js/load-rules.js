'use strict';

const fs = require('fs');
const path = require('path');

module.exports = function(rulesDir, cwd) {
    if (!rulesDir) {
        rulesDir = path.join(__dirname, '../rules');
    }
    else {
        path.resolve(cwd, rulesDir);
    }

    const rules = Object.create(null);

    fs.readdirSync(rulesDir).forEach(file => {
        if (path.extname(file) !== '.js') {
            return;
        }

        rules[file.slice(0, -3)] = path.join(rulesDir, file);
    });

    return rules;
};