
// Generated from C:/Users/heyhey/Desktop/4IF/pldcomp\antlrquejaime.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "antlrquejaimeVisitor.h"


/**
 * This class provides an empty implementation of antlrquejaimeVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  antlrquejaimeBaseVisitor : public antlrquejaimeVisitor {
public:

  virtual antlrcpp::Any visitBig(antlrquejaimeParser::BigContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgramme(antlrquejaimeParser::ProgrammeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(antlrquejaimeParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffVariable(antlrquejaimeParser::AffVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffTableau(antlrquejaimeParser::AffTableauContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectation(antlrquejaimeParser::AffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(antlrquejaimeParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_(antlrquejaimeParser::Return_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreak_(antlrquejaimeParser::Break_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(antlrquejaimeParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBloc(antlrquejaimeParser::BlocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(antlrquejaimeParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFonction(antlrquejaimeParser::FonctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametre(antlrquejaimeParser::ParametreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametre1(antlrquejaimeParser::Parametre1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMain(antlrquejaimeParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructure_if(antlrquejaimeParser::Structure_ifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClause(antlrquejaimeParser::ClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_(antlrquejaimeParser::Else_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructure_while(antlrquejaimeParser::Structure_whileContext *ctx) override {
    return visitChildren(ctx);
  }


};

