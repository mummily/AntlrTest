
// Generated from HolliAsSTLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace iec_st_pp {


class  HolliAsSTLexer : public antlr4::Lexer {
public:
  enum {
    PLUS = 1, MINUS = 2, STAR = 3, SLASH = 4, SEMI = 5, COMMA = 6, COLON = 7, 
    ASSIGN = 8, DOT = 9, RANGE = 10, LPAREN = 11, RPAREN = 12, LBRACK = 13, 
    RBRACK = 14, EQUAL = 15, LT = 16, LE = 17, GE = 18, GT = 19, NOT_EQUAL = 20, 
    IF = 21, THEN = 22, ELSEIF = 23, ELSE = 24, END_IF = 25, CASE = 26, 
    OF = 27, END_CASE = 28, FOR = 29, TO = 30, BY = 31, DO = 32, END_FOR = 33, 
    WHILE = 34, END_WHILE = 35, REPEAT = 36, END_REPEAT = 37, UNTIL = 38, 
    RETURN = 39, EXIT = 40, XOR = 41, AND = 42, OR = 43, MOD = 44, NOT = 45, 
    HEX_DIGIT = 46, DEC_DIGIT = 47, OTC_DIGIT = 48, BIN_DIGIT = 49, CONST_XWD = 50, 
    CONST_BOOL = 51, CONST_XINT = 52, CONST_DOUBLE = 53, CONST_TIME = 54, 
    CONST_TIME_OF_DAY = 55, CONST_DATE = 56, CONST_DATE_AND_TIME = 57, CONST_STRING = 58, 
    CONST_DARR = 59, NET_IDENTIFIER = 60, NORMAL_IDENTIFIER = 61, WHITESPACE = 62, 
    NEW_LINE = 63, BLOCK_COMMENT = 64, LINE_COMMENT = 65, LINE_CONTINUATION = 66, 
    OTHER_CHARS = 67
  };

  HolliAsSTLexer(antlr4::CharStream *input);
  ~HolliAsSTLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace iec_st_pp
