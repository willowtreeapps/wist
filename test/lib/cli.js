const path = require('path');
const Rules = require('../../src/js/rules');
const test = require('ava');

const VALID_DIR = path.resolve(`${__dirname}/../fixtures/rules`);
const INVALID_DIR = path.resolve(`${__dirname}/../fixtures/rules-invaliddir`);

let rules;

test.beforeEach(t => {
    rules = new Rules();
});

test('error is thrown when given an invalid rules directory', t => {
    t.throws(() => {
        rules.load(INVALID_DIR);
    });
});

test('error is not thrown when given a valid rules directory', t => {
    t.notThrows(() => {
        rules.load(VALID_DIR);
    });
});

test('rules.get for a valid rule returns an object', t => {
    rules.load(VALID_DIR);

    const rule = rules.get('fixture-rule');

    t.is(typeof rule, 'object');
});