
// Generated from C:/Users/heyhey/Desktop/4IF/pldcomp\antlrquejaime.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "antlrquejaimeParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by antlrquejaimeParser.
 */
class  antlrquejaimeVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by antlrquejaimeParser.
   */
    virtual antlrcpp::Any visitBig(antlrquejaimeParser::BigContext *context) = 0;

    virtual antlrcpp::Any visitProgramme(antlrquejaimeParser::ProgrammeContext *context) = 0;

    virtual antlrcpp::Any visitVariable(antlrquejaimeParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitAffVariable(antlrquejaimeParser::AffVariableContext *context) = 0;

    virtual antlrcpp::Any visitAffTableau(antlrquejaimeParser::AffTableauContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(antlrquejaimeParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitExpr(antlrquejaimeParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitReturn_(antlrquejaimeParser::Return_Context *context) = 0;

    virtual antlrcpp::Any visitBreak_(antlrquejaimeParser::Break_Context *context) = 0;

    virtual antlrcpp::Any visitInstruction(antlrquejaimeParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitBloc(antlrquejaimeParser::BlocContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(antlrquejaimeParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFonction(antlrquejaimeParser::FonctionContext *context) = 0;

    virtual antlrcpp::Any visitParametre(antlrquejaimeParser::ParametreContext *context) = 0;

    virtual antlrcpp::Any visitParametre1(antlrquejaimeParser::Parametre1Context *context) = 0;

    virtual antlrcpp::Any visitMain(antlrquejaimeParser::MainContext *context) = 0;

    virtual antlrcpp::Any visitStructure_if(antlrquejaimeParser::Structure_ifContext *context) = 0;

    virtual antlrcpp::Any visitClause(antlrquejaimeParser::ClauseContext *context) = 0;

    virtual antlrcpp::Any visitElse_(antlrquejaimeParser::Else_Context *context) = 0;

    virtual antlrcpp::Any visitStructure_while(antlrquejaimeParser::Structure_whileContext *context) = 0;


};

