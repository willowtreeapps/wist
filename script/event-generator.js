#!/usr/bin/env node

'use strict';

const fs = require('fs-extra'),
    path = require('path'),
    endOfLine = require('os').EOL,
    BrightScriptListener = require('../parser/antlr/BrightScriptListener').BrightScriptListener;

async function execute() {
    try {
        const pathToGeneratedFile = path.resolve(`${__dirname}/../parser/BrightScriptEventGenerator.js`);
        const fd = await fs.open(pathToGeneratedFile, 'w');

        await generateImports(fd);
        await generateClassBegin(fd);
        await generateConstructor(fd);
        await generateMethods(fd);
        await generateClassEnd(fd);
    }
    catch (err) {
        console.error(err.stack);
        return 1;
    }

    return 0;
}

async function generateImports(fd) {
    let text = `const BrightScriptListener = require('./antlr/BrightScriptListener').BrightScriptListener;${endOfLine}${endOfLine}`;
    await fs.write(fd, text);
}

async function generateClassBegin(fd) {
    let text = `class BrightScriptEventGenerator extends BrightScriptListener {${endOfLine}`;
    await fs.write(fd, text);
}

async function generateConstructor(fd) {
    let text = `    constructor(emitter) {
        super();
        this.emitter = emitter;
    }${endOfLine}`;

    await fs.write(fd, text);
}

async function generateMethods(fd) {
    const listener = new BrightScriptListener(),
    eventKeys = Object.keys(Object.getPrototypeOf(listener));

    const enterEvents = eventKeys.filter(key => key.startsWith('enter')),
        exitEvents = eventKeys.filter(key => key.startsWith('exit'));

    enterEvents.forEach(async key => {
        await generateEmitterMethod(fd, key, 'enter');
    });

    exitEvents.forEach(async key => {
        await generateEmitterMethod(fd, key, 'exit');
    });
}

async function generateClassEnd(fd) {
    let text = `}${endOfLine}module.exports = BrightScriptEventGenerator;`;
    await fs.write(fd, text);
}

async function generateEmitterMethod(fd, key, eventSuffix) {
    const eventName = normalize(key.substr(eventSuffix.length));
    
    const text = `    ${key}(context) {
        this.emitter.emit('${eventName}:${eventSuffix}', context);
    }${endOfLine}`;

    await fs.write(fd, text);
}

function normalize(str) {
    return `${str.charAt(0).toLowerCase()}${str.slice(1)}`;
}

process.once('uncaughtException', err => {
    console.error(err.message);
    console.error(err.stack);

    process.exitCode = 1;
});

process.exitCode = execute();
