#!/usr/bin/env node

'use strict';

const fs = require('fs-extra'),
    path = require('path'),
    endOfLine = require('os').EOL,
    readline = require('readline');

async function execute() {
    try {
        const pathToGeneratedFile = path.resolve(`${__dirname}/../src/cpp/BrightScriptEventGenerator.h`);
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
    let text = `
/*
* GENERATED FILE - DO NOT MODIFY
*/
#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>

#include "parser/BrightScriptBaseListener.h"
#include "Node.h"

using namespace std;
using namespace antlr4;
using namespace emscripten;
`;
    await fs.write(fd, text);
}

async function generateClassBegin(fd) {
    let text = `class BrightScriptEventGenerator : public BrightScriptBaseListener 
{${endOfLine}
    public:${endOfLine}${endOfLine}`;
    await fs.write(fd, text);
}

async function generateConstructor(fd) {
    let text = `        BrightScriptEventGenerator(val *emitter, BrightScriptParser *parser)
        {
            _emitter = emitter;
            _parser = parser;
        }${endOfLine}`;

    await fs.write(fd, text);
}

async function generateMethods(fd) {
    const pathToBaseListener = path.resolve(`${__dirname}/../src/cpp/parser/BrightScriptBaseListener.h`);
    const inputStream = await fs.createReadStream(pathToBaseListener);

    const reader = readline.createInterface(inputStream);

    reader.on('line', async line => {
        let key, index;

        index = line.indexOf('virtual void enter');
        if (index > -1) {
            await generateEmitterMethod(fd, line, 'enter');
        }

        index = line.indexOf('virtual void exit');
        if (index > -1) {
            await generateEmitterMethod(fd, line, 'exit');
        }
    });

    return new Promise(resolve => {
        reader.on('close', () => {
            resolve();
        });
    });
}

async function generateClassEnd(fd) {
    let text = `  
    private:
    val *_emitter;
    BrightScriptParser *_parser;


    TreeNode buildTreeFromContext(ParserRuleContext *ctx)
    {
        vector<TreeNode> children = {};
        for (auto child : ctx->children)
        {
            if (ParserRuleContext *childCtx = dynamic_cast<ParserRuleContext *>(child))
            {
                children.push_back(buildTreeFromContext(childCtx));
            }
        }
        
        string ruleName = _parser->getRuleNames()[ctx->getRuleIndex()];
        string ruleText = ctx->getText();
        int startLine = ctx->getStart()->getLine();
        int startCol = ctx->getStart()->getCharPositionInLine();

        int stopLine = ctx->getStop()->getLine();
        int stopCol = ctx->getStop()->getCharPositionInLine();

        return TreeNode{Node{ruleName, ruleText, Location{startLine, startCol}, Location{stopLine, stopCol}}, children};
    }
};`;
    await fs.write(fd, text);
}

async function generateEmitterMethod(fd, line, eventSuffix) {
    const methodName = line.substring(line.indexOf(eventSuffix) + eventSuffix.length, line.indexOf('('));
    const methodDeclaration = line.substring(line.indexOf('void'), line.indexOf('*')).trim();
    const eventName = normalize(methodName);

    const text = `    ${methodDeclaration} *ctx) override 
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "${eventName}:${eventSuffix}", buildTreeFromContext(ruleContext));
        }
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
