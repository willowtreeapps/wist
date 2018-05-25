#ifndef __BRIGHTSCRIPT_EVENT_LISTENER_H__
#define __BRIGHTSCRIPT_EVENT_LISTENER_H__

#include "BrightScriptEventGenerator.h"

#include <emscripten/val.h>

using namespace std;
using namespace antlr4;

class BrightScriptEventListener : public BrightScriptEventGenerator
{
public:
  BrightScriptEventListener(val *emitter, BrightScriptParser *parser) : BrightScriptEventGenerator(emitter, parser) {}
  virtual void enterFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext *ctx) override;
  virtual void enterSubDeclaration(BrightScriptParser::SubDeclarationContext *ctx) override;
  virtual void exitReturnStatement(BrightScriptParser::ReturnStatementContext *ctx) override;

private:
  vector<string> functionNames = {};
  bool functionNameExists(string nameToCheck);
  void checkDeclaration(BrightScriptParser::UntypedIdentifierContext *ctx);
};
#endif
