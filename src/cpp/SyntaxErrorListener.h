#ifndef __SYNTAX_ERROR_LISTENER_H__
#define __SYNTAX_ERROR_LISTENER_H__
#include "BaseErrorListener.h"

using namespace antlr4;
using namespace std;

struct SyntaxError
{
    string message;
    uint32_t line;
    uint32_t column;
};

class SyntaxErrorListener : public BaseErrorListener
{
  public:
    SyntaxErrorListener(vector<SyntaxError> *error_list);

    virtual void syntaxError(Recognizer *recognizer,
                             Token *offendingSymbol,
                             size_t line,
                             size_t charPositionInLine,
                             const std::string &msg,
                             std::exception_ptr e) override;

  private:
    vector<SyntaxError> *errors;
};

#endif
