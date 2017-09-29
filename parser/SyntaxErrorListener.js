const antlr4 = require('antlr4'),
      ErrorListener = antlr4.error.ErrorListener;

class SyntaxErrorListener extends ErrorListener {
    constructor() {
        super();
        this.messages = [];
    }

    syntaxError(recognizer, offendingSymbol, line, column, message, e) {
        this.messages.push({
            message,
            line,
            column
        });
    }
}

module.exports = SyntaxErrorListener;