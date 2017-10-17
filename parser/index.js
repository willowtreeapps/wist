const antlr4 = require('antlr4'),
      FileStream = antlr4.FileStream,
      InputStream = antlr4.InputStream,
      BrightScriptLexer = require('./antlr/BrightScriptLexer').BrightScriptLexer,
      BrightScriptParser = require('./antlr/BrightScriptParser').BrightScriptParser,
      SyntaxErrorListener = require('./SyntaxErrorListener'),
      BrightScriptEventListener = require('./BrightScriptEventListener');

function parse(stream, eventListener) {
    const lexer = new BrightScriptLexer(stream),
        tokenStream = new antlr4.CommonTokenStream(lexer),
        parser = new BrightScriptParser(tokenStream),
        errorListener = new SyntaxErrorListener();

    lexer.removeErrorListeners();
    lexer.addErrorListener(errorListener);

    parser.removeErrorListeners();
    parser.addErrorListener(errorListener);
    parser.buildParseTrees = true;

    const ast = parser.startRule();
    antlr4.tree.ParseTreeWalker.DEFAULT.walk(eventListener, ast);

    return {
        ast: ast,
        errors: errorListener.messages
    }
}

class Parser {
    constructor(emitter) {
        this.eventListener = new BrightScriptEventListener(emitter);
    }

    parseFile(path) {
        let stream = new FileStream(path);
        return parse(stream, this.eventListener);
    }

    parseText(text) {
        let stream = new InputStream(text);
        return parse(stream, this.eventListener);
    }

    traverse(ast) {
        antlr4.tree.ParseTreeWalker.DEFAULT.walk(this.eventListener, ast);
    }

    static ruleNameByIndex(index) {
        for (let prop in Parser.rule) {
            if(Parser.rule.hasOwnProperty(prop) && Parser.rule[prop] === index) {
                return prop;
           }
        }

        return '';
    }
}

Parser.token = (() => {
    let tokens = {};

    Object.getOwnPropertyNames(BrightScriptParser).forEach(prop => {
        if (prop.toUpperCase() === prop && !prop.startsWith('T__')) {
            tokens[prop] = BrightScriptParser[prop];
        }
    });

    return tokens;
})();

Parser.rule = (() => {
    let rules = {};
    
    Object.getOwnPropertyNames(BrightScriptParser).forEach(prop => {
        if (prop.startsWith('RULE_')) {
            rules[prop.replace('RULE_', '')] = BrightScriptParser[prop];
        }
    });

    return rules;
})();


Parser.type = {
    String: {
        description: 'string',
        declarationCharacter: '$'
    },
    Integer: {
        description: 'integer',
        declarationCharacter: '%'
    },
    Float: {
        description: 'float',
        declarationCharacter: '!'
    },
    Double: {
        description: 'double',
        declarationCharacter: '#'
    },
    LongInteger: {
        description: 'long integer',
        declarationCharacter: '&'
    },
    Unknown: {
        description: '',
        declarationCharacter: ''
    }
};

module.exports = Parser;