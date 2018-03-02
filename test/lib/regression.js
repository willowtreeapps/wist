import test from 'ava';
import cli from '../../lib/cli';
import fs from 'fs';
import path from 'path';

test('Regression tests parse successfully', t => {
    process.chdir('./test/regression');
    fs.readdirSync('.')
        .filter(file => file.endsWith('.brs'))
        .forEach(file => {
            t.is(0, cli.execute(['', '', path.resolve(file)]), `'${file}' regression test file failed to parse correctly.`);
        });
    t.pass();
});
