#ifndef __BRIGHTSCRIPT_EVENT_LISTENER_H__
#define __BRIGHTSCRIPT_EVENT_LISTENER_H__

#include "parser/BrightScriptBaseListener.h"
#include <emscripten/val.h>

using namespace std;
using namespace antlr4;

class BrightscriptEventListener : public BrightScriptBaseListener
{
public:
  BrightscriptEventListener(BrightScriptParser *parser);
  BrightscriptEventListener(BrightScriptParser *parser, emscripten::val *emitter);
  virtual void enterFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext *ctx) override;
  virtual void enterSubDeclaration(BrightScriptParser::SubDeclarationContext *ctx) override;
  virtual void exitReturnStatement(BrightScriptParser::ReturnStatementContext *ctx) override;

private:
  BrightScriptParser *parser;
  vector<string> functionNames = {};
  emscripten::val *emitter;
  bool functionNameExists(string nameToCheck);
  void checkDeclaration(BrightScriptParser::UntypedIdentifierContext *context);
};
#endif
