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

    static getType(node) {
        if (node.start.type === Parser.token.STRING_LITERAL) {
            return Parser.type.String;
        }
        
        const value = node.getText();

        if (node.start.type === Parser.token.NUMERIC_LITERAL) {
            const typeDeclarationChar = value.charAt(value.length - 1);

            switch (typeDeclarationChar) {
                case '#':
                    return Parser.type.Double;
                    break;
                case '!':
                    return Parser.type.Float;
                    break;
                case '&':
                    return Parser.type.LongInteger;
                    break;
                case '%':
                    return Parser.type.Integer;
                    break;
                default:
                    break;
            }

            const numberParts = value.split('.'),
                integerValue = numberParts[0],
                decimalValue = numberParts[1];

            if (integerValue.length >= 10) {
                if (decimalValue == null && typeDeclarationChar === '&') {
                    return Parser.type.LongInteger;
                }

                return Parser.type.Double;
            }

            if (value.indexOf('D') > -1 || value.indexOf('d') > -1) {
                return Parser.type.Double;
            }

            if (decimalValue != null || value.indexOf('E') > -1 || value.indexOf('e') > -1) {
                return Parser.type.Float;
            }

            return Parser.type.Integer;
        }

        return Parser.type.Unknown;
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