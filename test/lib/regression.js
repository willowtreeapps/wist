const test = require('ava');
const cli = require('../../src/js/cli');
const fs = require('fs');
const path = require('path');

test('Regression tests parse successfully', t => {
    process.chdir('./test/regression');
    fs.readdirSync('.')
        .filter(file => file.endsWith('.brs'))
        .forEach(file => {
            t.is(0, cli.execute(['', '', path.resolve(file)]), `'${file}' regression test file failed to parse correctly.`);
        });
    t.pass();
});
