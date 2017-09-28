const antlr4 = require('antlr4'),
      FileStream = antlr4.FileStream,
      InputStream = antlr4.InputStream,
      BrightScriptLexer = require('./antlr/parser/BrightScriptLexer').BrightScriptLexer,
      BrightScriptParser = require('./antlr/parser/BrightScriptParser').BrightScriptParser,
      SyntaxErrorListener = require('./antlr/SyntaxErrorListener'),
      BrightScriptEventGenerator = require('./antlr/BrightScriptEventGenerator');

function parse(stream) {
    const lexer = new BrightScriptLexer(stream),
        tokenStream = new antlr4.CommonTokenStream(lexer),
        parser = new BrightScriptParser(tokenStream),
        errorListener = new SyntaxErrorListener();

    lexer.removeErrorListeners();
    lexer.addErrorListener(errorListener);

    parser.removeErrorListeners();
    parser.addErrorListener(errorListener);
    parser.buildParseTrees = true;

    return {
        ast: parser.startRule(),
        errors: errorListener.messages
    }
}

module.exports = {
    parseFile(path) {
        let stream = new FileStream(path);
        return parse(stream);
    },

    parseText(text) {
        let stream = new InputStream(text);
        return parse(stream);
    },

    traverse(ast, emitter) {
        const eventGenerator = new BrightScriptEventGenerator(emitter);
        antlr4.tree.ParseTreeWalker.DEFAULT.walk(eventGenerator, ast);
    }
};