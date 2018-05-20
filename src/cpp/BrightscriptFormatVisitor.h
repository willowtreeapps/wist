#ifndef __BRIGHTSCRIPT_FORMAT_VISITOR_H__
#define __BRIGHTSCRIPT_FORMAT_VISITOR_H__

#include "parser/BrightScriptBaseVisitor.h"
#include <emscripten/val.h>

using namespace std;
using namespace antlr4;

class BrightscriptFormatVisitor : public BrightScriptBaseVisitor
{
public:
  BrightscriptFormatVisitor(CommonTokenStream *_tokens) : BrightscriptFormatVisitor(_tokens, 4) { }
  BrightscriptFormatVisitor(CommonTokenStream *_tokens, int _indentSize)
  {
    tokens = _tokens;
    indentSize = _indentSize;
    int hiddenTokenPosition = -1;

    source = "";
    currentIndent = 0;
    newLine = true;
  }

  virtual antlrcpp::Any visitBlock(BrightScriptParser::BlockContext *ctx) override;
  virtual antlrcpp::Any visitFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext *ctx) override;
  virtual antlrcpp::Any visitAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext *ctx) override;
  virtual antlrcpp::Any visitArrayInitializer(BrightScriptParser::ArrayInitializerContext *ctx) override;
  virtual antlrcpp::Any visitEndOfLine(BrightScriptParser::EndOfLineContext *ctx) override;
  virtual antlrcpp::Any visitTerminal(antlr4::tree::TerminalNode *node) override;

  string getFormattedSource()
  {
    return source;
  }

private:
  CommonTokenStream *tokens;

  int indentSize;
  int currentIndent;
  int hiddenTokenPosition;

  string source;
  bool newLine;

  Token *previousToken;
  ParserRuleContext *currentContext;

  void setContext(ParserRuleContext *currentContext);
  void writeCarriageReturn();
  void writeIndent();

  void writeNode(tree::TerminalNode *terminalNode);
  void writeToken(Token *token);
};
#endif