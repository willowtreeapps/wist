#include "SyntaxErrorListener.h"

using namespace antlr4;
using namespace std;

SyntaxErrorListener::SyntaxErrorListener(vector<SyntaxError> *errorList) : errors(errorList) {}

void SyntaxErrorListener::syntaxError(Recognizer *recognizer,
                                      Token *offendingSymbol,
                                      size_t line,
                                      size_t charPositionInLine,
                                      const string &msg,
                                      exception_ptr e)
{
    errors->push_back(SyntaxError{msg, line, charPositionInLine});
}