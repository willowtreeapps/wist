#include "BrightscriptFormatVisitor.h"
#include "Trim.h"
#include <emscripten/val.h>

using namespace std;
using namespace antlr4;

string noSpaceBeforeTokens[] = {".", ",", "(", ")", ":", "[", "]"};
bool noSpaceBeforeTokensContainsString(string token)
{
  for (string character : noSpaceBeforeTokens)
  {
    if (character == token)
    {
      return true;
    }
  }
  return false;
}

string noSpaceAfterTokens[] = {".", "}", "(", "["};
bool noSpaceAfterTokensContainsString(string token)
{
  for (string character : noSpaceAfterTokens)
  {
    if (token == character)
    {
      return true;
    }
  }
  return false;
}

antlrcpp::Any BrightscriptFormatVisitor::visitBlock(BrightScriptParser::BlockContext *ctx)
{
  currentIndent++;
  visitChildren(ctx);
  currentIndent--;
  return nullptr;
}

antlrcpp::Any BrightscriptFormatVisitor::visitFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext *ctx)
{
  setContext(ctx);
  return nullptr;
}

antlrcpp::Any BrightscriptFormatVisitor::visitAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext *ctx)
{
  return nullptr;
}

antlrcpp::Any BrightscriptFormatVisitor::visitArrayInitializer(BrightScriptParser::ArrayInitializerContext *ctx)
{
  return nullptr;
}

antlrcpp::Any BrightscriptFormatVisitor::visitEndOfLine(BrightScriptParser::EndOfLineContext *ctx)
{
  for (auto child : ctx->children)
  {
    if (antlr4::tree::TerminalNode *node = dynamic_cast<antlr4::tree::TerminalNode *>(child))
    {
      auto tokenPos = node->getSymbol()->getTokenIndex();
      if (tokenPos > hiddenTokenPosition)
      {
        auto ref = tokens->getHiddenTokensToLeft(tokenPos);
                       hiddenTokenPosition = tokenPos;
        if (ref.size() > 0)
        {
          for (auto token : ref)
          {
            writeIndent();
            writeToken(token);
          }
        }
      }
      string text = node->getText();
      for (int i = 0; i < count(text.begin(), text.end(), '\n'); i++)
      {
        writeCarriageReturn();
      }
    }
  }
  return nullptr;
}

antlrcpp::Any BrightscriptFormatVisitor::visitTerminal(antlr4::tree::TerminalNode *node)
{
  if (node->getSymbol()->getType() != BrightScriptParser::EOF)
  {
    writeNode(node);
  }
  return nullptr;
}

void BrightscriptFormatVisitor::writeCarriageReturn()
{
  source.append("\n");
  newLine = true;
}

void BrightscriptFormatVisitor::setContext(ParserRuleContext *ctx)
{
  currentContext = ctx;
  visitChildren(ctx);
  currentContext = ctx;
}

void BrightscriptFormatVisitor::writeIndent()
{
  for (int i = 0; i < currentIndent * indentSize; i++)
  {
    source.append(" ");
  }
}

void BrightscriptFormatVisitor::writeNode(tree::TerminalNode *terminalNode)
{
  string nodeString = terminalNode->getText();
  string text = trim(nodeString);
  if (text == "")
  {
    return;
  }

  if (!newLine &&
      !noSpaceBeforeTokensContainsString(previousToken->getText()) &&
      !noSpaceAfterTokensContainsString(text))
  {
    source.append(" ");
  }

  if (newLine)
  {
    writeIndent();
  }

  source.append(text);
  if (newLine == true)
  {
    newLine = false;
  }
  previousToken = terminalNode->getSymbol();
}

void BrightscriptFormatVisitor::writeToken(Token *token)
{
  string tokenString = token->getText();
  source.append(trim(tokenString));
  if (newLine == true)
  {
    newLine = false;
  }
  previousToken = token;
}