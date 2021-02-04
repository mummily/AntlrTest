// AntlrTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "ANTLRInputStream.h"
#include "HolliAsSTLexer.h"

using namespace antlr4;
using namespace iec_st_pp;
using namespace std;

int main()
{
    string sText = "%IW123123";
    ANTLRInputStream input(sText);

    HolliAsSTLexer lexer(&input);
    vector<unique_ptr<antlr4::Token>> vt_tks = lexer.getAllTokens();
    for (auto it = vt_tks.begin(); it != vt_tks.end(); it++)
    {
        string strToken = (*it)->getText();
        size_t iType = (*it)->getType();
        size_t iLn = (*it)->getLine();
        size_t iPos = (*it)->getCharPositionInLine();

        switch (iType)
        {
        case iec_st_pp::HolliAsSTLexer::FOR:
        case iec_st_pp::HolliAsSTLexer::END_FOR:
        case iec_st_pp::HolliAsSTLexer::TO:
        case iec_st_pp::HolliAsSTLexer::BY:
            break;
        case iec_st_pp::HolliAsSTLexer::CASE:
        case iec_st_pp::HolliAsSTLexer::END_CASE:
        case iec_st_pp::HolliAsSTLexer::OF:
            break;
        case iec_st_pp::HolliAsSTLexer::IF:
        case iec_st_pp::HolliAsSTLexer::THEN:
        case iec_st_pp::HolliAsSTLexer::ELSEIF:
        case iec_st_pp::HolliAsSTLexer::ELSE:
        case iec_st_pp::HolliAsSTLexer::END_IF:
            break;
        case iec_st_pp::HolliAsSTLexer::DO:
        case iec_st_pp::HolliAsSTLexer::WHILE:
        case iec_st_pp::HolliAsSTLexer::END_WHILE:
            break;
        case iec_st_pp::HolliAsSTLexer::REPEAT:
        case iec_st_pp::HolliAsSTLexer::END_REPEAT:
        case iec_st_pp::HolliAsSTLexer::UNTIL:
        case iec_st_pp::HolliAsSTLexer::RETURN:
        case iec_st_pp::HolliAsSTLexer::EXIT:
            break;
        case iec_st_pp::HolliAsSTLexer::XOR:
        case iec_st_pp::HolliAsSTLexer::AND:
        case iec_st_pp::HolliAsSTLexer::OR:
        case iec_st_pp::HolliAsSTLexer::MOD:
        case iec_st_pp::HolliAsSTLexer::NOT:
            break;
        case iec_st_pp::HolliAsSTLexer::NORMAL_IDENTIFIER:
            break;
        case iec_st_pp::HolliAsSTLexer::NET_IDENTIFIER:
            break;
        case iec_st_pp::HolliAsSTLexer::HEX_DIGIT:
        case iec_st_pp::HolliAsSTLexer::DEC_DIGIT:
        case iec_st_pp::HolliAsSTLexer::OTC_DIGIT:
        case iec_st_pp::HolliAsSTLexer::BIN_DIGIT:
        case iec_st_pp::HolliAsSTLexer::CONST_XWD:
        case iec_st_pp::HolliAsSTLexer::CONST_BOOL:
        case iec_st_pp::HolliAsSTLexer::CONST_XINT:
        case iec_st_pp::HolliAsSTLexer::CONST_DOUBLE:
        case iec_st_pp::HolliAsSTLexer::CONST_TIME:
        case iec_st_pp::HolliAsSTLexer::CONST_TIME_OF_DAY:
        case iec_st_pp::HolliAsSTLexer::CONST_DATE:
        case iec_st_pp::HolliAsSTLexer::CONST_DATE_AND_TIME:
        case iec_st_pp::HolliAsSTLexer::CONST_STRING:
        case iec_st_pp::HolliAsSTLexer::CONST_DARR:
            break;
        case iec_st_pp::HolliAsSTLexer::LINE_COMMENT:
            break;
        case  iec_st_pp::HolliAsSTLexer::BLOCK_COMMENT:
            break;
        default:
            ;
        }
    }

    system("pause");
}
