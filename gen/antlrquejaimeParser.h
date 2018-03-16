
// Generated from C:/Users/heyhey/Desktop/4IF/pldcomp\antlrquejaime.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  antlrquejaimeParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    Nom_var = 45, Type_var = 46, Type_fonction = 47, Include = 48, EspaceBlanc = 49, 
    CommentaireBlock = 50, CommentaireLigne = 51, LETTRE = 52, CHIFFRE = 53, 
    SYMBOLE = 54, NOMBRE = 55, CHAR = 56
  };

  enum {
    RuleBig = 0, RuleProgramme = 1, RuleVariable = 2, RuleAff = 3, RuleAffectation = 4, 
    RuleExpr = 5, RuleReturn_ = 6, RuleBreak_ = 7, RuleInstruction = 8, 
    RuleBloc = 9, RuleDeclaration = 10, RuleFonction = 11, RuleParametre = 12, 
    RuleParametre1 = 13, RuleMain = 14, RuleStructure_if = 15, RuleClause = 16, 
    RuleElse_ = 17, RuleStructure_while = 18
  };

  antlrquejaimeParser(antlr4::TokenStream *input);
  ~antlrquejaimeParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class BigContext;
  class ProgrammeContext;
  class VariableContext;
  class AffContext;
  class AffectationContext;
  class ExprContext;
  class Return_Context;
  class Break_Context;
  class InstructionContext;
  class BlocContext;
  class DeclarationContext;
  class FonctionContext;
  class ParametreContext;
  class Parametre1Context;
  class MainContext;
  class Structure_ifContext;
  class ClauseContext;
  class Else_Context;
  class Structure_whileContext; 

  class  BigContext : public antlr4::ParserRuleContext {
  public:
    BigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgrammeContext *programme();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BigContext* big();

  class  ProgrammeContext : public antlr4::ParserRuleContext {
  public:
    ProgrammeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MainContext *main();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<FonctionContext *> fonction();
    FonctionContext* fonction(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgrammeContext* programme();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Nom_var();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  AffContext : public antlr4::ParserRuleContext {
  public:
    AffContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AffContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AffContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AffVariableContext : public AffContext {
  public:
    AffVariableContext(AffContext *ctx);

    antlr4::tree::TerminalNode *Nom_var();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffTableauContext : public AffContext {
  public:
    AffTableauContext(AffContext *ctx);

    antlr4::tree::TerminalNode *Nom_var();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AffContext* aff();

  class  AffectationContext : public antlr4::ParserRuleContext {
  public:
    AffectationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    AffContext *aff();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AffectationContext* affectation();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOMBRE();
    antlr4::tree::TerminalNode *CHAR();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    VariableContext *variable();
    AffContext *aff();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Return_Context : public antlr4::ParserRuleContext {
  public:
    Return_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_Context* return_();

  class  Break_Context : public antlr4::ParserRuleContext {
  public:
    Break_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_Context* break_();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Structure_ifContext *structure_if();
    Structure_whileContext *structure_while();
    ExprContext *expr();
    Return_Context *return_();
    Break_Context *break_();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  BlocContext : public antlr4::ParserRuleContext {
  public:
    BlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocContext* bloc();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type_var();
    std::vector<antlr4::tree::TerminalNode *> Nom_var();
    antlr4::tree::TerminalNode* Nom_var(size_t i);
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  FonctionContext : public antlr4::ParserRuleContext {
  public:
    FonctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type_fonction();
    antlr4::tree::TerminalNode *Nom_var();
    ParametreContext *parametre();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FonctionContext* fonction();

  class  ParametreContext : public antlr4::ParserRuleContext {
  public:
    ParametreContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type_var();
    antlr4::tree::TerminalNode *Nom_var();
    Parametre1Context *parametre1();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametreContext* parametre();

  class  Parametre1Context : public antlr4::ParserRuleContext {
  public:
    Parametre1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParametreContext *parametre();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parametre1Context* parametre1();

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type_fonction();
    antlr4::tree::TerminalNode *Nom_var();
    ParametreContext *parametre();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();

  class  Structure_ifContext : public antlr4::ParserRuleContext {
  public:
    Structure_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    ClauseContext *clause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Structure_ifContext* structure_if();

  class  ClauseContext : public antlr4::ParserRuleContext {
  public:
    ClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Else_Context *else_();
    BlocContext *bloc();
    InstructionContext *instruction();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClauseContext* clause();

  class  Else_Context : public antlr4::ParserRuleContext {
  public:
    Else_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BlocContext *> bloc();
    BlocContext* bloc(size_t i);
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_Context* else_();

  class  Structure_whileContext : public antlr4::ParserRuleContext {
  public:
    Structure_whileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    BlocContext *bloc();
    InstructionContext *instruction();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Structure_whileContext* structure_while();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

