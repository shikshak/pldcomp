
// Generated from C:/Users/heyhey/Desktop/4IF/pldcomp\antlrquejaime.g4 by ANTLR 4.7


#include "antlrquejaimeVisitor.h"

#include "antlrquejaimeParser.h"


using namespace antlrcpp;
using namespace antlr4;

antlrquejaimeParser::antlrquejaimeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

antlrquejaimeParser::~antlrquejaimeParser() {
  delete _interpreter;
}

std::string antlrquejaimeParser::getGrammarFileName() const {
  return "antlrquejaime.g4";
}

const std::vector<std::string>& antlrquejaimeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& antlrquejaimeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- BigContext ------------------------------------------------------------------

antlrquejaimeParser::BigContext::BigContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

antlrquejaimeParser::ProgrammeContext* antlrquejaimeParser::BigContext::programme() {
  return getRuleContext<antlrquejaimeParser::ProgrammeContext>(0);
}


size_t antlrquejaimeParser::BigContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleBig;
}

antlrcpp::Any antlrquejaimeParser::BigContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitBig(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::BigContext* antlrquejaimeParser::big() {
  BigContext *_localctx = _tracker.createInstance<BigContext>(_ctx, getState());
  enterRule(_localctx, 0, antlrquejaimeParser::RuleBig);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    programme();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgrammeContext ------------------------------------------------------------------

antlrquejaimeParser::ProgrammeContext::ProgrammeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

antlrquejaimeParser::MainContext* antlrquejaimeParser::ProgrammeContext::main() {
  return getRuleContext<antlrquejaimeParser::MainContext>(0);
}

std::vector<antlrquejaimeParser::DeclarationContext *> antlrquejaimeParser::ProgrammeContext::declaration() {
  return getRuleContexts<antlrquejaimeParser::DeclarationContext>();
}

antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::ProgrammeContext::declaration(size_t i) {
  return getRuleContext<antlrquejaimeParser::DeclarationContext>(i);
}

std::vector<antlrquejaimeParser::FonctionContext *> antlrquejaimeParser::ProgrammeContext::fonction() {
  return getRuleContexts<antlrquejaimeParser::FonctionContext>();
}

antlrquejaimeParser::FonctionContext* antlrquejaimeParser::ProgrammeContext::fonction(size_t i) {
  return getRuleContext<antlrquejaimeParser::FonctionContext>(i);
}


size_t antlrquejaimeParser::ProgrammeContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleProgramme;
}

antlrcpp::Any antlrquejaimeParser::ProgrammeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitProgramme(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::ProgrammeContext* antlrquejaimeParser::programme() {
  ProgrammeContext *_localctx = _tracker.createInstance<ProgrammeContext>(_ctx, getState());
  enterRule(_localctx, 2, antlrquejaimeParser::RuleProgramme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(43);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == antlrquejaimeParser::Type_var) {
      setState(40);
      declaration();
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(49);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(46);
        fonction(); 
      }
      setState(51);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(52);
    main();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

antlrquejaimeParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* antlrquejaimeParser::VariableContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::VariableContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}


size_t antlrquejaimeParser::VariableContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleVariable;
}

antlrcpp::Any antlrquejaimeParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::VariableContext* antlrquejaimeParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 4, antlrquejaimeParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(54);
      match(antlrquejaimeParser::Nom_var);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(55);
      match(antlrquejaimeParser::Nom_var);
      setState(56);
      match(antlrquejaimeParser::T__0);
      setState(57);
      expr(0);
      setState(58);
      match(antlrquejaimeParser::T__1);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext::AffContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::AffContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleAff;
}

void antlrquejaimeParser::AffContext::copyFrom(AffContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AffVariableContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::AffVariableContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::AffVariableContext::AffVariableContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::AffVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffTableauContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::AffTableauContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::AffTableauContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::AffTableauContext::AffTableauContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::AffTableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffTableau(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::AffContext* antlrquejaimeParser::aff() {
  AffContext *_localctx = _tracker.createInstance<AffContext>(_ctx, getState());
  enterRule(_localctx, 6, antlrquejaimeParser::RuleAff);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<antlrquejaimeParser::AffVariableContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(62);
      match(antlrquejaimeParser::Nom_var);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<antlrquejaimeParser::AffTableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(63);
      match(antlrquejaimeParser::Nom_var);
      setState(64);
      match(antlrquejaimeParser::T__0);
      setState(65);
      expr(0);
      setState(66);
      match(antlrquejaimeParser::T__1);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffectationContext ------------------------------------------------------------------

antlrquejaimeParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

antlrquejaimeParser::VariableContext* antlrquejaimeParser::AffectationContext::variable() {
  return getRuleContext<antlrquejaimeParser::VariableContext>(0);
}

antlrquejaimeParser::AffContext* antlrquejaimeParser::AffectationContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::AffectationContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}


size_t antlrquejaimeParser::AffectationContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleAffectation;
}

antlrcpp::Any antlrquejaimeParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::AffectationContext* antlrquejaimeParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 8, antlrquejaimeParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(70);
      variable();
      setState(71);
      match(antlrquejaimeParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(73);
      match(antlrquejaimeParser::T__2);
      setState(74);
      variable();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(75);
      variable();
      setState(76);
      match(antlrquejaimeParser::T__3);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(78);
      match(antlrquejaimeParser::T__3);
      setState(79);
      variable();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(80);
      aff();
      setState(81);
      match(antlrquejaimeParser::T__4);
      setState(82);
      expr(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(84);
      aff();
      setState(85);
      match(antlrquejaimeParser::T__5);
      setState(86);
      expr(0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(88);
      aff();
      setState(89);
      match(antlrquejaimeParser::T__6);
      setState(90);
      expr(0);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(92);
      aff();
      setState(93);
      match(antlrquejaimeParser::T__7);
      setState(94);
      expr(0);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(96);
      aff();
      setState(97);
      match(antlrquejaimeParser::T__8);
      setState(98);
      expr(0);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(100);
      aff();
      setState(101);
      match(antlrquejaimeParser::T__9);
      setState(102);
      expr(0);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(104);
      aff();
      setState(105);
      match(antlrquejaimeParser::T__10);
      setState(106);
      expr(0);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(108);
      aff();
      setState(109);
      match(antlrquejaimeParser::T__11);
      setState(110);
      expr(0);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(112);
      aff();
      setState(113);
      match(antlrquejaimeParser::T__12);
      setState(114);
      expr(0);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(116);
      aff();
      setState(117);
      match(antlrquejaimeParser::T__13);
      setState(118);
      expr(0);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(120);
      aff();
      setState(121);
      match(antlrquejaimeParser::T__5);
      setState(122);
      expr(0);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(124);
      aff();
      setState(125);
      match(antlrquejaimeParser::T__6);
      setState(126);
      expr(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

antlrquejaimeParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* antlrquejaimeParser::ExprContext::NOMBRE() {
  return getToken(antlrquejaimeParser::NOMBRE, 0);
}

tree::TerminalNode* antlrquejaimeParser::ExprContext::CHAR() {
  return getToken(antlrquejaimeParser::CHAR, 0);
}

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::ExprContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::ExprContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::VariableContext* antlrquejaimeParser::ExprContext::variable() {
  return getRuleContext<antlrquejaimeParser::VariableContext>(0);
}

antlrquejaimeParser::AffContext* antlrquejaimeParser::ExprContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}


size_t antlrquejaimeParser::ExprContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleExpr;
}

antlrcpp::Any antlrquejaimeParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


antlrquejaimeParser::ExprContext* antlrquejaimeParser::expr() {
   return expr(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  antlrquejaimeParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  antlrquejaimeParser::ExprContext *previousContext = _localctx;
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, antlrquejaimeParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(131);
      match(antlrquejaimeParser::NOMBRE);
      break;
    }

    case 2: {
      setState(132);
      match(antlrquejaimeParser::CHAR);
      break;
    }

    case 3: {
      setState(133);
      match(antlrquejaimeParser::T__14);
      setState(134);
      expr(0);
      setState(135);
      match(antlrquejaimeParser::T__15);
      break;
    }

    case 4: {
      setState(137);
      match(antlrquejaimeParser::T__16);
      setState(138);
      expr(22);
      break;
    }

    case 5: {
      setState(139);
      match(antlrquejaimeParser::T__17);
      setState(140);
      expr(21);
      break;
    }

    case 6: {
      setState(141);
      variable();
      break;
    }

    case 7: {
      setState(142);
      aff();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(201);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(199);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(145);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(146);
          match(antlrquejaimeParser::T__18);
          setState(147);
          expr(21);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(148);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(149);
          match(antlrquejaimeParser::T__19);
          setState(150);
          expr(20);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(151);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(152);
          match(antlrquejaimeParser::T__20);
          setState(153);
          expr(19);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(154);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(155);
          match(antlrquejaimeParser::T__21);
          setState(156);
          expr(18);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(157);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(158);
          match(antlrquejaimeParser::T__22);
          setState(159);
          expr(17);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(160);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(161);
          match(antlrquejaimeParser::T__23);
          setState(162);
          expr(16);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(163);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(164);
          match(antlrquejaimeParser::T__24);
          setState(165);
          expr(15);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(166);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(167);
          match(antlrquejaimeParser::T__25);
          setState(168);
          expr(14);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(169);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(170);
          match(antlrquejaimeParser::T__26);
          setState(171);
          expr(13);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(172);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(173);
          match(antlrquejaimeParser::T__27);
          setState(174);
          expr(12);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(175);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(176);
          match(antlrquejaimeParser::T__28);
          setState(177);
          expr(11);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(178);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(179);
          match(antlrquejaimeParser::T__29);
          setState(180);
          expr(10);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(181);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(182);
          match(antlrquejaimeParser::T__30);
          setState(183);
          expr(9);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(184);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(185);
          match(antlrquejaimeParser::T__12);
          setState(186);
          expr(8);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(187);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(188);
          match(antlrquejaimeParser::T__31);
          setState(189);
          expr(7);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(190);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(191);
          match(antlrquejaimeParser::T__13);
          setState(192);
          expr(6);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(193);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(194);
          match(antlrquejaimeParser::T__32);
          setState(195);
          expr(5);
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(196);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(197);
          match(antlrquejaimeParser::T__33);
          setState(198);
          expr(4);
          break;
        }

        } 
      }
      setState(203);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Return_Context ------------------------------------------------------------------

antlrquejaimeParser::Return_Context::Return_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Return_Context::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}


size_t antlrquejaimeParser::Return_Context::getRuleIndex() const {
  return antlrquejaimeParser::RuleReturn_;
}

antlrcpp::Any antlrquejaimeParser::Return_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitReturn_(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::Return_Context* antlrquejaimeParser::return_() {
  Return_Context *_localctx = _tracker.createInstance<Return_Context>(_ctx, getState());
  enterRule(_localctx, 12, antlrquejaimeParser::RuleReturn_);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(antlrquejaimeParser::T__34);
    setState(206);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << antlrquejaimeParser::T__14)
      | (1ULL << antlrquejaimeParser::T__16)
      | (1ULL << antlrquejaimeParser::T__17)
      | (1ULL << antlrquejaimeParser::Nom_var)
      | (1ULL << antlrquejaimeParser::NOMBRE)
      | (1ULL << antlrquejaimeParser::CHAR))) != 0)) {
      setState(205);
      expr(0);
    }
    setState(208);
    match(antlrquejaimeParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Break_Context ------------------------------------------------------------------

antlrquejaimeParser::Break_Context::Break_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::Break_Context::getRuleIndex() const {
  return antlrquejaimeParser::RuleBreak_;
}

antlrcpp::Any antlrquejaimeParser::Break_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitBreak_(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::Break_Context* antlrquejaimeParser::break_() {
  Break_Context *_localctx = _tracker.createInstance<Break_Context>(_ctx, getState());
  enterRule(_localctx, 14, antlrquejaimeParser::RuleBreak_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    match(antlrquejaimeParser::T__36);
    setState(211);
    match(antlrquejaimeParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

antlrquejaimeParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

antlrquejaimeParser::Structure_ifContext* antlrquejaimeParser::InstructionContext::structure_if() {
  return getRuleContext<antlrquejaimeParser::Structure_ifContext>(0);
}

antlrquejaimeParser::Structure_whileContext* antlrquejaimeParser::InstructionContext::structure_while() {
  return getRuleContext<antlrquejaimeParser::Structure_whileContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::InstructionContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Return_Context* antlrquejaimeParser::InstructionContext::return_() {
  return getRuleContext<antlrquejaimeParser::Return_Context>(0);
}

antlrquejaimeParser::Break_Context* antlrquejaimeParser::InstructionContext::break_() {
  return getRuleContext<antlrquejaimeParser::Break_Context>(0);
}


size_t antlrquejaimeParser::InstructionContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleInstruction;
}

antlrcpp::Any antlrquejaimeParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::InstructionContext* antlrquejaimeParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 16, antlrquejaimeParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case antlrquejaimeParser::T__41: {
        enterOuterAlt(_localctx, 1);
        setState(213);
        structure_if();
        break;
      }

      case antlrquejaimeParser::T__43: {
        enterOuterAlt(_localctx, 2);
        setState(214);
        structure_while();
        break;
      }

      case antlrquejaimeParser::T__14:
      case antlrquejaimeParser::T__16:
      case antlrquejaimeParser::T__17:
      case antlrquejaimeParser::Nom_var:
      case antlrquejaimeParser::NOMBRE:
      case antlrquejaimeParser::CHAR: {
        enterOuterAlt(_localctx, 3);
        setState(215);
        expr(0);
        setState(216);
        match(antlrquejaimeParser::T__35);
        break;
      }

      case antlrquejaimeParser::T__34: {
        enterOuterAlt(_localctx, 4);
        setState(218);
        return_();
        break;
      }

      case antlrquejaimeParser::T__36: {
        enterOuterAlt(_localctx, 5);
        setState(219);
        break_();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocContext ------------------------------------------------------------------

antlrquejaimeParser::BlocContext::BlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<antlrquejaimeParser::InstructionContext *> antlrquejaimeParser::BlocContext::instruction() {
  return getRuleContexts<antlrquejaimeParser::InstructionContext>();
}

antlrquejaimeParser::InstructionContext* antlrquejaimeParser::BlocContext::instruction(size_t i) {
  return getRuleContext<antlrquejaimeParser::InstructionContext>(i);
}


size_t antlrquejaimeParser::BlocContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleBloc;
}

antlrcpp::Any antlrquejaimeParser::BlocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitBloc(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::bloc() {
  BlocContext *_localctx = _tracker.createInstance<BlocContext>(_ctx, getState());
  enterRule(_localctx, 18, antlrquejaimeParser::RuleBloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << antlrquejaimeParser::T__14)
      | (1ULL << antlrquejaimeParser::T__16)
      | (1ULL << antlrquejaimeParser::T__17)
      | (1ULL << antlrquejaimeParser::T__34)
      | (1ULL << antlrquejaimeParser::T__36)
      | (1ULL << antlrquejaimeParser::T__41)
      | (1ULL << antlrquejaimeParser::T__43)
      | (1ULL << antlrquejaimeParser::Nom_var)
      | (1ULL << antlrquejaimeParser::NOMBRE)
      | (1ULL << antlrquejaimeParser::CHAR))) != 0)) {
      setState(222);
      instruction();
      setState(227);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

antlrquejaimeParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* antlrquejaimeParser::DeclarationContext::Type_var() {
  return getToken(antlrquejaimeParser::Type_var, 0);
}

std::vector<tree::TerminalNode *> antlrquejaimeParser::DeclarationContext::Nom_var() {
  return getTokens(antlrquejaimeParser::Nom_var);
}

tree::TerminalNode* antlrquejaimeParser::DeclarationContext::Nom_var(size_t i) {
  return getToken(antlrquejaimeParser::Nom_var, i);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::DeclarationContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}


size_t antlrquejaimeParser::DeclarationContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleDeclaration;
}

antlrcpp::Any antlrquejaimeParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, antlrquejaimeParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(251);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(228);
      match(antlrquejaimeParser::Type_var);
      setState(229);
      match(antlrquejaimeParser::Nom_var);
      setState(234);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::T__37) {
        setState(230);
        match(antlrquejaimeParser::T__37);
        setState(231);
        match(antlrquejaimeParser::Nom_var);
        setState(236);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(237);
      match(antlrquejaimeParser::T__35);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(238);
      match(antlrquejaimeParser::Type_var);
      setState(239);
      match(antlrquejaimeParser::Nom_var);
      setState(240);
      match(antlrquejaimeParser::T__4);
      setState(241);
      expr(0);
      setState(242);
      match(antlrquejaimeParser::T__35);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(244);
      match(antlrquejaimeParser::Type_var);
      setState(245);
      match(antlrquejaimeParser::Nom_var);
      setState(246);
      match(antlrquejaimeParser::T__0);
      setState(247);
      expr(0);
      setState(248);
      match(antlrquejaimeParser::T__1);
      setState(249);
      match(antlrquejaimeParser::T__35);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FonctionContext ------------------------------------------------------------------

antlrquejaimeParser::FonctionContext::FonctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* antlrquejaimeParser::FonctionContext::Type_fonction() {
  return getToken(antlrquejaimeParser::Type_fonction, 0);
}

tree::TerminalNode* antlrquejaimeParser::FonctionContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::ParametreContext* antlrquejaimeParser::FonctionContext::parametre() {
  return getRuleContext<antlrquejaimeParser::ParametreContext>(0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::FonctionContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

std::vector<antlrquejaimeParser::DeclarationContext *> antlrquejaimeParser::FonctionContext::declaration() {
  return getRuleContexts<antlrquejaimeParser::DeclarationContext>();
}

antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::FonctionContext::declaration(size_t i) {
  return getRuleContext<antlrquejaimeParser::DeclarationContext>(i);
}


size_t antlrquejaimeParser::FonctionContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleFonction;
}

antlrcpp::Any antlrquejaimeParser::FonctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitFonction(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::FonctionContext* antlrquejaimeParser::fonction() {
  FonctionContext *_localctx = _tracker.createInstance<FonctionContext>(_ctx, getState());
  enterRule(_localctx, 22, antlrquejaimeParser::RuleFonction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(297);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(253);
      match(antlrquejaimeParser::Type_fonction);
      setState(254);
      match(antlrquejaimeParser::Nom_var);
      setState(255);
      match(antlrquejaimeParser::T__14);
      setState(256);
      parametre();
      setState(257);
      match(antlrquejaimeParser::T__15);
      setState(258);
      match(antlrquejaimeParser::T__38);
      setState(262);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(259);
        declaration();
        setState(264);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(265);
      bloc();
      setState(266);
      match(antlrquejaimeParser::T__39);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(268);
      match(antlrquejaimeParser::Type_fonction);
      setState(269);
      match(antlrquejaimeParser::Nom_var);
      setState(270);
      match(antlrquejaimeParser::T__14);
      setState(271);
      match(antlrquejaimeParser::T__15);
      setState(272);
      match(antlrquejaimeParser::T__38);
      setState(276);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(273);
        declaration();
        setState(278);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(279);
      bloc();
      setState(280);
      match(antlrquejaimeParser::T__39);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(282);
      match(antlrquejaimeParser::Type_fonction);
      setState(283);
      match(antlrquejaimeParser::Nom_var);
      setState(284);
      match(antlrquejaimeParser::T__14);
      setState(285);
      match(antlrquejaimeParser::T__40);
      setState(286);
      match(antlrquejaimeParser::T__15);
      setState(287);
      match(antlrquejaimeParser::T__38);
      setState(291);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(288);
        declaration();
        setState(293);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(294);
      bloc();
      setState(295);
      match(antlrquejaimeParser::T__39);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametreContext ------------------------------------------------------------------

antlrquejaimeParser::ParametreContext::ParametreContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* antlrquejaimeParser::ParametreContext::Type_var() {
  return getToken(antlrquejaimeParser::Type_var, 0);
}

tree::TerminalNode* antlrquejaimeParser::ParametreContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::Parametre1Context* antlrquejaimeParser::ParametreContext::parametre1() {
  return getRuleContext<antlrquejaimeParser::Parametre1Context>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::ParametreContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}


size_t antlrquejaimeParser::ParametreContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleParametre;
}

antlrcpp::Any antlrquejaimeParser::ParametreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitParametre(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::ParametreContext* antlrquejaimeParser::parametre() {
  ParametreContext *_localctx = _tracker.createInstance<ParametreContext>(_ctx, getState());
  enterRule(_localctx, 24, antlrquejaimeParser::RuleParametre);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(308);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(299);
      match(antlrquejaimeParser::Type_var);
      setState(300);
      match(antlrquejaimeParser::Nom_var);
      setState(301);
      parametre1();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(302);
      match(antlrquejaimeParser::Type_var);
      setState(303);
      match(antlrquejaimeParser::Nom_var);
      setState(304);
      match(antlrquejaimeParser::T__0);
      setState(305);
      expr(0);
      setState(306);
      match(antlrquejaimeParser::T__1);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parametre1Context ------------------------------------------------------------------

antlrquejaimeParser::Parametre1Context::Parametre1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

antlrquejaimeParser::ParametreContext* antlrquejaimeParser::Parametre1Context::parametre() {
  return getRuleContext<antlrquejaimeParser::ParametreContext>(0);
}


size_t antlrquejaimeParser::Parametre1Context::getRuleIndex() const {
  return antlrquejaimeParser::RuleParametre1;
}

antlrcpp::Any antlrquejaimeParser::Parametre1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitParametre1(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::Parametre1Context* antlrquejaimeParser::parametre1() {
  Parametre1Context *_localctx = _tracker.createInstance<Parametre1Context>(_ctx, getState());
  enterRule(_localctx, 26, antlrquejaimeParser::RuleParametre1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == antlrquejaimeParser::T__37) {
      setState(310);
      match(antlrquejaimeParser::T__37);
      setState(311);
      parametre();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainContext ------------------------------------------------------------------

antlrquejaimeParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* antlrquejaimeParser::MainContext::Type_fonction() {
  return getToken(antlrquejaimeParser::Type_fonction, 0);
}

tree::TerminalNode* antlrquejaimeParser::MainContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::ParametreContext* antlrquejaimeParser::MainContext::parametre() {
  return getRuleContext<antlrquejaimeParser::ParametreContext>(0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::MainContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

std::vector<antlrquejaimeParser::DeclarationContext *> antlrquejaimeParser::MainContext::declaration() {
  return getRuleContexts<antlrquejaimeParser::DeclarationContext>();
}

antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::MainContext::declaration(size_t i) {
  return getRuleContext<antlrquejaimeParser::DeclarationContext>(i);
}


size_t antlrquejaimeParser::MainContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleMain;
}

antlrcpp::Any antlrquejaimeParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::MainContext* antlrquejaimeParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 28, antlrquejaimeParser::RuleMain);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(359);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(314);
      match(antlrquejaimeParser::Type_fonction);
      setState(315);
      match(antlrquejaimeParser::Nom_var);
      setState(316);
      match(antlrquejaimeParser::T__14);
      setState(317);
      parametre();
      setState(318);
      match(antlrquejaimeParser::T__15);
      setState(319);
      match(antlrquejaimeParser::T__38);
      setState(323);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(320);
        declaration();
        setState(325);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(326);
      bloc();
      setState(327);
      match(antlrquejaimeParser::T__39);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(329);
      match(antlrquejaimeParser::Type_fonction);
      setState(330);
      match(antlrquejaimeParser::Nom_var);
      setState(331);
      match(antlrquejaimeParser::T__14);
      setState(332);
      match(antlrquejaimeParser::T__15);
      setState(333);
      match(antlrquejaimeParser::T__38);
      setState(337);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(334);
        declaration();
        setState(339);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(340);
      bloc();
      setState(341);
      match(antlrquejaimeParser::T__39);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(343);
      match(antlrquejaimeParser::Type_fonction);
      setState(344);
      match(antlrquejaimeParser::Nom_var);
      setState(345);
      match(antlrquejaimeParser::T__14);
      setState(346);
      match(antlrquejaimeParser::T__40);
      setState(347);
      match(antlrquejaimeParser::T__15);
      setState(348);
      match(antlrquejaimeParser::T__38);
      setState(352);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(349);
        declaration();
        setState(354);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(355);
      bloc();
      setState(356);
      match(antlrquejaimeParser::T__39);
      setState(357);
      parametre();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Structure_ifContext ------------------------------------------------------------------

antlrquejaimeParser::Structure_ifContext::Structure_ifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Structure_ifContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::ClauseContext* antlrquejaimeParser::Structure_ifContext::clause() {
  return getRuleContext<antlrquejaimeParser::ClauseContext>(0);
}


size_t antlrquejaimeParser::Structure_ifContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleStructure_if;
}

antlrcpp::Any antlrquejaimeParser::Structure_ifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitStructure_if(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::Structure_ifContext* antlrquejaimeParser::structure_if() {
  Structure_ifContext *_localctx = _tracker.createInstance<Structure_ifContext>(_ctx, getState());
  enterRule(_localctx, 30, antlrquejaimeParser::RuleStructure_if);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    match(antlrquejaimeParser::T__41);
    setState(362);
    match(antlrquejaimeParser::T__14);
    setState(363);
    expr(0);
    setState(364);
    match(antlrquejaimeParser::T__15);
    setState(365);
    clause();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClauseContext ------------------------------------------------------------------

antlrquejaimeParser::ClauseContext::ClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

antlrquejaimeParser::Else_Context* antlrquejaimeParser::ClauseContext::else_() {
  return getRuleContext<antlrquejaimeParser::Else_Context>(0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::ClauseContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

antlrquejaimeParser::InstructionContext* antlrquejaimeParser::ClauseContext::instruction() {
  return getRuleContext<antlrquejaimeParser::InstructionContext>(0);
}


size_t antlrquejaimeParser::ClauseContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleClause;
}

antlrcpp::Any antlrquejaimeParser::ClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitClause(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::ClauseContext* antlrquejaimeParser::clause() {
  ClauseContext *_localctx = _tracker.createInstance<ClauseContext>(_ctx, getState());
  enterRule(_localctx, 32, antlrquejaimeParser::RuleClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case antlrquejaimeParser::T__38: {
        setState(367);
        match(antlrquejaimeParser::T__38);
        setState(368);
        bloc();
        setState(369);
        match(antlrquejaimeParser::T__39);
        break;
      }

      case antlrquejaimeParser::T__14:
      case antlrquejaimeParser::T__16:
      case antlrquejaimeParser::T__17:
      case antlrquejaimeParser::T__34:
      case antlrquejaimeParser::T__36:
      case antlrquejaimeParser::T__41:
      case antlrquejaimeParser::T__43:
      case antlrquejaimeParser::Nom_var:
      case antlrquejaimeParser::NOMBRE:
      case antlrquejaimeParser::CHAR: {
        setState(371);
        instruction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(374);
    else_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_Context ------------------------------------------------------------------

antlrquejaimeParser::Else_Context::Else_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<antlrquejaimeParser::BlocContext *> antlrquejaimeParser::Else_Context::bloc() {
  return getRuleContexts<antlrquejaimeParser::BlocContext>();
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::Else_Context::bloc(size_t i) {
  return getRuleContext<antlrquejaimeParser::BlocContext>(i);
}

std::vector<antlrquejaimeParser::InstructionContext *> antlrquejaimeParser::Else_Context::instruction() {
  return getRuleContexts<antlrquejaimeParser::InstructionContext>();
}

antlrquejaimeParser::InstructionContext* antlrquejaimeParser::Else_Context::instruction(size_t i) {
  return getRuleContext<antlrquejaimeParser::InstructionContext>(i);
}


size_t antlrquejaimeParser::Else_Context::getRuleIndex() const {
  return antlrquejaimeParser::RuleElse_;
}

antlrcpp::Any antlrquejaimeParser::Else_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitElse_(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::Else_Context* antlrquejaimeParser::else_() {
  Else_Context *_localctx = _tracker.createInstance<Else_Context>(_ctx, getState());
  enterRule(_localctx, 34, antlrquejaimeParser::RuleElse_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(386);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(376);
        match(antlrquejaimeParser::T__42);
        setState(382);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case antlrquejaimeParser::T__38: {
            setState(377);
            match(antlrquejaimeParser::T__38);
            setState(378);
            bloc();
            setState(379);
            match(antlrquejaimeParser::T__39);
            break;
          }

          case antlrquejaimeParser::T__14:
          case antlrquejaimeParser::T__16:
          case antlrquejaimeParser::T__17:
          case antlrquejaimeParser::T__34:
          case antlrquejaimeParser::T__36:
          case antlrquejaimeParser::T__41:
          case antlrquejaimeParser::T__43:
          case antlrquejaimeParser::Nom_var:
          case antlrquejaimeParser::NOMBRE:
          case antlrquejaimeParser::CHAR: {
            setState(381);
            instruction();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(388);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Structure_whileContext ------------------------------------------------------------------

antlrquejaimeParser::Structure_whileContext::Structure_whileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Structure_whileContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::Structure_whileContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

antlrquejaimeParser::InstructionContext* antlrquejaimeParser::Structure_whileContext::instruction() {
  return getRuleContext<antlrquejaimeParser::InstructionContext>(0);
}


size_t antlrquejaimeParser::Structure_whileContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleStructure_while;
}

antlrcpp::Any antlrquejaimeParser::Structure_whileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitStructure_while(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::Structure_whileContext* antlrquejaimeParser::structure_while() {
  Structure_whileContext *_localctx = _tracker.createInstance<Structure_whileContext>(_ctx, getState());
  enterRule(_localctx, 36, antlrquejaimeParser::RuleStructure_while);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    match(antlrquejaimeParser::T__43);
    setState(390);
    match(antlrquejaimeParser::T__14);
    setState(391);
    expr(0);
    setState(392);
    match(antlrquejaimeParser::T__15);
    setState(398);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case antlrquejaimeParser::T__38: {
        setState(393);
        match(antlrquejaimeParser::T__38);
        setState(394);
        bloc();
        setState(395);
        match(antlrquejaimeParser::T__39);
        break;
      }

      case antlrquejaimeParser::T__14:
      case antlrquejaimeParser::T__16:
      case antlrquejaimeParser::T__17:
      case antlrquejaimeParser::T__34:
      case antlrquejaimeParser::T__36:
      case antlrquejaimeParser::T__41:
      case antlrquejaimeParser::T__43:
      case antlrquejaimeParser::Nom_var:
      case antlrquejaimeParser::NOMBRE:
      case antlrquejaimeParser::CHAR: {
        setState(397);
        instruction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool antlrquejaimeParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool antlrquejaimeParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 20);
    case 1: return precpred(_ctx, 19);
    case 2: return precpred(_ctx, 18);
    case 3: return precpred(_ctx, 17);
    case 4: return precpred(_ctx, 16);
    case 5: return precpred(_ctx, 15);
    case 6: return precpred(_ctx, 14);
    case 7: return precpred(_ctx, 13);
    case 8: return precpred(_ctx, 12);
    case 9: return precpred(_ctx, 11);
    case 10: return precpred(_ctx, 10);
    case 11: return precpred(_ctx, 9);
    case 12: return precpred(_ctx, 8);
    case 13: return precpred(_ctx, 7);
    case 14: return precpred(_ctx, 6);
    case 15: return precpred(_ctx, 5);
    case 16: return precpred(_ctx, 4);
    case 17: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> antlrquejaimeParser::_decisionToDFA;
atn::PredictionContextCache antlrquejaimeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN antlrquejaimeParser::_atn;
std::vector<uint16_t> antlrquejaimeParser::_serializedATN;

std::vector<std::string> antlrquejaimeParser::_ruleNames = {
  "big", "programme", "variable", "aff", "affectation", "expr", "return_", 
  "break_", "instruction", "bloc", "declaration", "fonction", "parametre", 
  "parametre1", "main", "structure_if", "clause", "else_", "structure_while"
};

std::vector<std::string> antlrquejaimeParser::_literalNames = {
  "", "'['", "']'", "'++'", "'--'", "'='", "'&='", "'|='", "'+='", "'-='", 
  "'*='", "'/='", "'%='", "'<='", "'>='", "'('", "')'", "'~'", "'!'", "'*'", 
  "'/'", "'%'", "'+'", "'-'", "'<<'", "'>>'", "'&'", "'|'", "'^'", "'&&'", 
  "'||'", "'<'", "'>'", "'=='", "'!='", "'return'", "';'", "'break'", "','", 
  "'{'", "'}'", "'void'", "'if'", "'else_'", "'while'"
};

std::vector<std::string> antlrquejaimeParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "Nom_var", "Type_var", "Type_fonction", 
  "Include", "EspaceBlanc", "CommentaireBlock", "CommentaireLigne", "LETTRE", 
  "CHIFFRE", "SYMBOLE", "NOMBRE", "CHAR"
};

dfa::Vocabulary antlrquejaimeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> antlrquejaimeParser::_tokenNames;

antlrquejaimeParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3a, 0x193, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x2c, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x2f, 
    0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0x32, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x35, 
    0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3f, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x47, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x83, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x92, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0xca, 0xa, 0x7, 0xc, 0x7, 0xe, 
    0x7, 0xcd, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xd1, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xdf, 0xa, 0xa, 
    0x3, 0xb, 0x7, 0xb, 0xe2, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xe5, 0xb, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xeb, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0xee, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xfe, 0xa, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x107, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x10a, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 
    0xd, 0x115, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x118, 0xb, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x124, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x127, 
    0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x12c, 0xa, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x137, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
    0x13b, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x144, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
    0x147, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x152, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0x155, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x7, 0x10, 0x161, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x164, 0xb, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x16a, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x177, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x181, 0xa, 0x13, 0x7, 0x13, 
    0x183, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x186, 0xb, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x5, 0x14, 0x191, 0xa, 0x14, 0x3, 0x14, 0x2, 0x3, 0xc, 
    0x15, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x2, 0x2, 0x2, 0x1c3, 0x2, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x46, 0x3, 0x2, 0x2, 0x2, 0xa, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x91, 0x3, 0x2, 0x2, 0x2, 0xe, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x12, 0xde, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xe3, 0x3, 0x2, 0x2, 0x2, 0x16, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x18, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x136, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x169, 0x3, 0x2, 0x2, 0x2, 0x20, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x176, 0x3, 0x2, 0x2, 0x2, 0x24, 0x184, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x187, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x5, 0x4, 0x3, 0x2, 
    0x29, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 0x5, 0x16, 0xc, 0x2, 0x2b, 
    0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x32, 0x5, 0x18, 
    0xd, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x36, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x37, 0x5, 0x1e, 0x10, 0x2, 0x37, 0x5, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3f, 
    0x7, 0x2f, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x2f, 0x2, 0x2, 0x3a, 0x3b, 0x7, 
    0x3, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0xc, 0x7, 0x2, 0x3c, 0x3d, 0x7, 0x4, 
    0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x47, 0x7, 0x2f, 0x2, 0x2, 0x41, 0x42, 0x7, 0x2f, 0x2, 0x2, 0x42, 
    0x43, 0x7, 0x3, 0x2, 0x2, 0x43, 0x44, 0x5, 0xc, 0x7, 0x2, 0x44, 0x45, 
    0x7, 0x4, 0x2, 0x2, 0x45, 0x47, 0x3, 0x2, 0x2, 0x2, 0x46, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x41, 0x3, 0x2, 0x2, 0x2, 0x47, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x49, 0x5, 0x6, 0x4, 0x2, 0x49, 0x4a, 0x7, 0x5, 0x2, 
    0x2, 0x4a, 0x83, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x5, 0x2, 0x2, 
    0x4c, 0x83, 0x5, 0x6, 0x4, 0x2, 0x4d, 0x4e, 0x5, 0x6, 0x4, 0x2, 0x4e, 
    0x4f, 0x7, 0x6, 0x2, 0x2, 0x4f, 0x83, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 
    0x7, 0x6, 0x2, 0x2, 0x51, 0x83, 0x5, 0x6, 0x4, 0x2, 0x52, 0x53, 0x5, 
    0x8, 0x5, 0x2, 0x53, 0x54, 0x7, 0x7, 0x2, 0x2, 0x54, 0x55, 0x5, 0xc, 
    0x7, 0x2, 0x55, 0x83, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 0x8, 0x5, 
    0x2, 0x57, 0x58, 0x7, 0x8, 0x2, 0x2, 0x58, 0x59, 0x5, 0xc, 0x7, 0x2, 
    0x59, 0x83, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x5, 0x8, 0x5, 0x2, 0x5b, 
    0x5c, 0x7, 0x9, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0xc, 0x7, 0x2, 0x5d, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x8, 0x5, 0x2, 0x5f, 0x60, 0x7, 
    0xa, 0x2, 0x2, 0x60, 0x61, 0x5, 0xc, 0x7, 0x2, 0x61, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x63, 0x5, 0x8, 0x5, 0x2, 0x63, 0x64, 0x7, 0xb, 0x2, 
    0x2, 0x64, 0x65, 0x5, 0xc, 0x7, 0x2, 0x65, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x67, 0x5, 0x8, 0x5, 0x2, 0x67, 0x68, 0x7, 0xc, 0x2, 0x2, 0x68, 
    0x69, 0x5, 0xc, 0x7, 0x2, 0x69, 0x83, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 
    0x5, 0x8, 0x5, 0x2, 0x6b, 0x6c, 0x7, 0xd, 0x2, 0x2, 0x6c, 0x6d, 0x5, 
    0xc, 0x7, 0x2, 0x6d, 0x83, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x8, 
    0x5, 0x2, 0x6f, 0x70, 0x7, 0xe, 0x2, 0x2, 0x70, 0x71, 0x5, 0xc, 0x7, 
    0x2, 0x71, 0x83, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0x8, 0x5, 0x2, 
    0x73, 0x74, 0x7, 0xf, 0x2, 0x2, 0x74, 0x75, 0x5, 0xc, 0x7, 0x2, 0x75, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x5, 0x8, 0x5, 0x2, 0x77, 0x78, 
    0x7, 0x10, 0x2, 0x2, 0x78, 0x79, 0x5, 0xc, 0x7, 0x2, 0x79, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x8, 0x5, 0x2, 0x7b, 0x7c, 0x7, 0x8, 
    0x2, 0x2, 0x7c, 0x7d, 0x5, 0xc, 0x7, 0x2, 0x7d, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x7f, 0x5, 0x8, 0x5, 0x2, 0x7f, 0x80, 0x7, 0x9, 0x2, 0x2, 
    0x80, 0x81, 0x5, 0xc, 0x7, 0x2, 0x81, 0x83, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0x82, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x82, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x50, 0x3, 0x2, 0x2, 0x2, 0x82, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x56, 0x3, 0x2, 0x2, 0x2, 0x82, 0x5a, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x82, 0x62, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x66, 0x3, 0x2, 0x2, 0x2, 0x82, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x82, 0x72, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x82, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x82, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x83, 0xb, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x8, 
    0x7, 0x1, 0x2, 0x85, 0x92, 0x7, 0x39, 0x2, 0x2, 0x86, 0x92, 0x7, 0x3a, 
    0x2, 0x2, 0x87, 0x88, 0x7, 0x11, 0x2, 0x2, 0x88, 0x89, 0x5, 0xc, 0x7, 
    0x2, 0x89, 0x8a, 0x7, 0x12, 0x2, 0x2, 0x8a, 0x92, 0x3, 0x2, 0x2, 0x2, 
    0x8b, 0x8c, 0x7, 0x13, 0x2, 0x2, 0x8c, 0x92, 0x5, 0xc, 0x7, 0x18, 0x8d, 
    0x8e, 0x7, 0x14, 0x2, 0x2, 0x8e, 0x92, 0x5, 0xc, 0x7, 0x17, 0x8f, 0x92, 
    0x5, 0x6, 0x4, 0x2, 0x90, 0x92, 0x5, 0x8, 0x5, 0x2, 0x91, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x91, 0x86, 0x3, 0x2, 0x2, 0x2, 0x91, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0xc, 0x16, 0x2, 0x2, 0x94, 
    0x95, 0x7, 0x15, 0x2, 0x2, 0x95, 0xca, 0x5, 0xc, 0x7, 0x17, 0x96, 0x97, 
    0xc, 0x15, 0x2, 0x2, 0x97, 0x98, 0x7, 0x16, 0x2, 0x2, 0x98, 0xca, 0x5, 
    0xc, 0x7, 0x16, 0x99, 0x9a, 0xc, 0x14, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x17, 
    0x2, 0x2, 0x9b, 0xca, 0x5, 0xc, 0x7, 0x15, 0x9c, 0x9d, 0xc, 0x13, 0x2, 
    0x2, 0x9d, 0x9e, 0x7, 0x18, 0x2, 0x2, 0x9e, 0xca, 0x5, 0xc, 0x7, 0x14, 
    0x9f, 0xa0, 0xc, 0x12, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x19, 0x2, 0x2, 0xa1, 
    0xca, 0x5, 0xc, 0x7, 0x13, 0xa2, 0xa3, 0xc, 0x11, 0x2, 0x2, 0xa3, 0xa4, 
    0x7, 0x1a, 0x2, 0x2, 0xa4, 0xca, 0x5, 0xc, 0x7, 0x12, 0xa5, 0xa6, 0xc, 
    0x10, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x1b, 0x2, 0x2, 0xa7, 0xca, 0x5, 0xc, 
    0x7, 0x11, 0xa8, 0xa9, 0xc, 0xf, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x1c, 0x2, 
    0x2, 0xaa, 0xca, 0x5, 0xc, 0x7, 0x10, 0xab, 0xac, 0xc, 0xe, 0x2, 0x2, 
    0xac, 0xad, 0x7, 0x1d, 0x2, 0x2, 0xad, 0xca, 0x5, 0xc, 0x7, 0xf, 0xae, 
    0xaf, 0xc, 0xd, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x1e, 0x2, 0x2, 0xb0, 0xca, 
    0x5, 0xc, 0x7, 0xe, 0xb1, 0xb2, 0xc, 0xc, 0x2, 0x2, 0xb2, 0xb3, 0x7, 
    0x1f, 0x2, 0x2, 0xb3, 0xca, 0x5, 0xc, 0x7, 0xd, 0xb4, 0xb5, 0xc, 0xb, 
    0x2, 0x2, 0xb5, 0xb6, 0x7, 0x20, 0x2, 0x2, 0xb6, 0xca, 0x5, 0xc, 0x7, 
    0xc, 0xb7, 0xb8, 0xc, 0xa, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x21, 0x2, 0x2, 
    0xb9, 0xca, 0x5, 0xc, 0x7, 0xb, 0xba, 0xbb, 0xc, 0x9, 0x2, 0x2, 0xbb, 
    0xbc, 0x7, 0xf, 0x2, 0x2, 0xbc, 0xca, 0x5, 0xc, 0x7, 0xa, 0xbd, 0xbe, 
    0xc, 0x8, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x22, 0x2, 0x2, 0xbf, 0xca, 0x5, 
    0xc, 0x7, 0x9, 0xc0, 0xc1, 0xc, 0x7, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x10, 
    0x2, 0x2, 0xc2, 0xca, 0x5, 0xc, 0x7, 0x8, 0xc3, 0xc4, 0xc, 0x6, 0x2, 
    0x2, 0xc4, 0xc5, 0x7, 0x23, 0x2, 0x2, 0xc5, 0xca, 0x5, 0xc, 0x7, 0x7, 
    0xc6, 0xc7, 0xc, 0x5, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x24, 0x2, 0x2, 0xc8, 
    0xca, 0x5, 0xc, 0x7, 0x6, 0xc9, 0x93, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0x99, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x9c, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xc9, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xa8, 0x3, 0x2, 0x2, 
    0x2, 0xc9, 0xab, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xc9, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 
    0x2, 0xcc, 0xd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0xd0, 0x7, 0x25, 0x2, 0x2, 0xcf, 0xd1, 0x5, 0xc, 0x7, 0x2, 0xd0, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 
    0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x26, 0x2, 0x2, 0xd3, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x27, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x26, 
    0x2, 0x2, 0xd6, 0x11, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xdf, 0x5, 0x20, 0x11, 
    0x2, 0xd8, 0xdf, 0x5, 0x26, 0x14, 0x2, 0xd9, 0xda, 0x5, 0xc, 0x7, 0x2, 
    0xda, 0xdb, 0x7, 0x26, 0x2, 0x2, 0xdb, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0xdf, 0x5, 0xe, 0x8, 0x2, 0xdd, 0xdf, 0x5, 0x10, 0x9, 0x2, 0xde, 0xd7, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xde, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdd, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0x13, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe2, 0x5, 0x12, 0xa, 
    0x2, 0xe1, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 
    0x7, 0x30, 0x2, 0x2, 0xe7, 0xec, 0x7, 0x2f, 0x2, 0x2, 0xe8, 0xe9, 0x7, 
    0x28, 0x2, 0x2, 0xe9, 0xeb, 0x7, 0x2f, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xeb, 0xee, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 0xfe, 0x7, 0x26, 0x2, 0x2, 0xf0, 
    0xf1, 0x7, 0x30, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x2f, 0x2, 0x2, 0xf2, 0xf3, 
    0x7, 0x7, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0xc, 0x7, 0x2, 0xf4, 0xf5, 0x7, 
    0x26, 0x2, 0x2, 0xf5, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x30, 
    0x2, 0x2, 0xf7, 0xf8, 0x7, 0x2f, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x3, 0x2, 
    0x2, 0xf9, 0xfa, 0x5, 0xc, 0x7, 0x2, 0xfa, 0xfb, 0x7, 0x4, 0x2, 0x2, 
    0xfb, 0xfc, 0x7, 0x26, 0x2, 0x2, 0xfc, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xe6, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0x17, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x7, 
    0x31, 0x2, 0x2, 0x100, 0x101, 0x7, 0x2f, 0x2, 0x2, 0x101, 0x102, 0x7, 
    0x11, 0x2, 0x2, 0x102, 0x103, 0x5, 0x1a, 0xe, 0x2, 0x103, 0x104, 0x7, 
    0x12, 0x2, 0x2, 0x104, 0x108, 0x7, 0x29, 0x2, 0x2, 0x105, 0x107, 0x5, 
    0x16, 0xc, 0x2, 0x106, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 0x3, 
    0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 
    0x2, 0x2, 0x2, 0x10b, 0x10c, 0x5, 0x14, 0xb, 0x2, 0x10c, 0x10d, 0x7, 
    0x2a, 0x2, 0x2, 0x10d, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x7, 
    0x31, 0x2, 0x2, 0x10f, 0x110, 0x7, 0x2f, 0x2, 0x2, 0x110, 0x111, 0x7, 
    0x11, 0x2, 0x2, 0x111, 0x112, 0x7, 0x12, 0x2, 0x2, 0x112, 0x116, 0x7, 
    0x29, 0x2, 0x2, 0x113, 0x115, 0x5, 0x16, 0xc, 0x2, 0x114, 0x113, 0x3, 
    0x2, 0x2, 0x2, 0x115, 0x118, 0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x5, 
    0x14, 0xb, 0x2, 0x11a, 0x11b, 0x7, 0x2a, 0x2, 0x2, 0x11b, 0x12c, 0x3, 
    0x2, 0x2, 0x2, 0x11c, 0x11d, 0x7, 0x31, 0x2, 0x2, 0x11d, 0x11e, 0x7, 
    0x2f, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x11, 0x2, 0x2, 0x11f, 0x120, 0x7, 
    0x2b, 0x2, 0x2, 0x120, 0x121, 0x7, 0x12, 0x2, 0x2, 0x121, 0x125, 0x7, 
    0x29, 0x2, 0x2, 0x122, 0x124, 0x5, 0x16, 0xc, 0x2, 0x123, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x124, 0x127, 0x3, 0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 
    0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 0x3, 
    0x2, 0x2, 0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x5, 
    0x14, 0xb, 0x2, 0x129, 0x12a, 0x7, 0x2a, 0x2, 0x2, 0x12a, 0x12c, 0x3, 
    0x2, 0x2, 0x2, 0x12b, 0xff, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x10e, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x12d, 0x12e, 0x7, 0x30, 0x2, 0x2, 0x12e, 0x12f, 0x7, 0x2f, 0x2, 
    0x2, 0x12f, 0x137, 0x5, 0x1c, 0xf, 0x2, 0x130, 0x131, 0x7, 0x30, 0x2, 
    0x2, 0x131, 0x132, 0x7, 0x2f, 0x2, 0x2, 0x132, 0x133, 0x7, 0x3, 0x2, 
    0x2, 0x133, 0x134, 0x5, 0xc, 0x7, 0x2, 0x134, 0x135, 0x7, 0x4, 0x2, 
    0x2, 0x135, 0x137, 0x3, 0x2, 0x2, 0x2, 0x136, 0x12d, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x130, 0x3, 0x2, 0x2, 0x2, 0x137, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x138, 0x139, 0x7, 0x28, 0x2, 0x2, 0x139, 0x13b, 0x5, 0x1a, 0xe, 0x2, 
    0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 
    0x13b, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x31, 0x2, 0x2, 
    0x13d, 0x13e, 0x7, 0x2f, 0x2, 0x2, 0x13e, 0x13f, 0x7, 0x11, 0x2, 0x2, 
    0x13f, 0x140, 0x5, 0x1a, 0xe, 0x2, 0x140, 0x141, 0x7, 0x12, 0x2, 0x2, 
    0x141, 0x145, 0x7, 0x29, 0x2, 0x2, 0x142, 0x144, 0x5, 0x16, 0xc, 0x2, 
    0x143, 0x142, 0x3, 0x2, 0x2, 0x2, 0x144, 0x147, 0x3, 0x2, 0x2, 0x2, 
    0x145, 0x143, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 
    0x146, 0x148, 0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 
    0x148, 0x149, 0x5, 0x14, 0xb, 0x2, 0x149, 0x14a, 0x7, 0x2a, 0x2, 0x2, 
    0x14a, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x7, 0x31, 0x2, 0x2, 
    0x14c, 0x14d, 0x7, 0x2f, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0x11, 0x2, 0x2, 
    0x14e, 0x14f, 0x7, 0x12, 0x2, 0x2, 0x14f, 0x153, 0x7, 0x29, 0x2, 0x2, 
    0x150, 0x152, 0x5, 0x16, 0xc, 0x2, 0x151, 0x150, 0x3, 0x2, 0x2, 0x2, 
    0x152, 0x155, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 
    0x153, 0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 0x156, 0x3, 0x2, 0x2, 0x2, 
    0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x5, 0x14, 0xb, 0x2, 
    0x157, 0x158, 0x7, 0x2a, 0x2, 0x2, 0x158, 0x16a, 0x3, 0x2, 0x2, 0x2, 
    0x159, 0x15a, 0x7, 0x31, 0x2, 0x2, 0x15a, 0x15b, 0x7, 0x2f, 0x2, 0x2, 
    0x15b, 0x15c, 0x7, 0x11, 0x2, 0x2, 0x15c, 0x15d, 0x7, 0x2b, 0x2, 0x2, 
    0x15d, 0x15e, 0x7, 0x12, 0x2, 0x2, 0x15e, 0x162, 0x7, 0x29, 0x2, 0x2, 
    0x15f, 0x161, 0x5, 0x16, 0xc, 0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 
    0x161, 0x164, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 
    0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x165, 0x3, 0x2, 0x2, 0x2, 
    0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x5, 0x14, 0xb, 0x2, 
    0x166, 0x167, 0x7, 0x2a, 0x2, 0x2, 0x167, 0x168, 0x5, 0x1a, 0xe, 0x2, 
    0x168, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x169, 0x13c, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x169, 0x159, 0x3, 0x2, 0x2, 0x2, 
    0x16a, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x7, 0x2c, 0x2, 0x2, 
    0x16c, 0x16d, 0x7, 0x11, 0x2, 0x2, 0x16d, 0x16e, 0x5, 0xc, 0x7, 0x2, 
    0x16e, 0x16f, 0x7, 0x12, 0x2, 0x2, 0x16f, 0x170, 0x5, 0x22, 0x12, 0x2, 
    0x170, 0x21, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x7, 0x29, 0x2, 0x2, 
    0x172, 0x173, 0x5, 0x14, 0xb, 0x2, 0x173, 0x174, 0x7, 0x2a, 0x2, 0x2, 
    0x174, 0x177, 0x3, 0x2, 0x2, 0x2, 0x175, 0x177, 0x5, 0x12, 0xa, 0x2, 
    0x176, 0x171, 0x3, 0x2, 0x2, 0x2, 0x176, 0x175, 0x3, 0x2, 0x2, 0x2, 
    0x177, 0x178, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x5, 0x24, 0x13, 0x2, 
    0x179, 0x23, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x180, 0x7, 0x2d, 0x2, 0x2, 
    0x17b, 0x17c, 0x7, 0x29, 0x2, 0x2, 0x17c, 0x17d, 0x5, 0x14, 0xb, 0x2, 
    0x17d, 0x17e, 0x7, 0x2a, 0x2, 0x2, 0x17e, 0x181, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x181, 0x5, 0x12, 0xa, 0x2, 0x180, 0x17b, 0x3, 0x2, 0x2, 0x2, 
    0x180, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x181, 0x183, 0x3, 0x2, 0x2, 0x2, 
    0x182, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x183, 0x186, 0x3, 0x2, 0x2, 0x2, 
    0x184, 0x182, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 0x2, 
    0x185, 0x25, 0x3, 0x2, 0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x187, 
    0x188, 0x7, 0x2e, 0x2, 0x2, 0x188, 0x189, 0x7, 0x11, 0x2, 0x2, 0x189, 
    0x18a, 0x5, 0xc, 0x7, 0x2, 0x18a, 0x190, 0x7, 0x12, 0x2, 0x2, 0x18b, 
    0x18c, 0x7, 0x29, 0x2, 0x2, 0x18c, 0x18d, 0x5, 0x14, 0xb, 0x2, 0x18d, 
    0x18e, 0x7, 0x2a, 0x2, 0x2, 0x18e, 0x191, 0x3, 0x2, 0x2, 0x2, 0x18f, 
    0x191, 0x5, 0x12, 0xa, 0x2, 0x190, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x190, 
    0x18f, 0x3, 0x2, 0x2, 0x2, 0x191, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x2d, 
    0x33, 0x3e, 0x46, 0x82, 0x91, 0xc9, 0xcb, 0xd0, 0xde, 0xe3, 0xec, 0xfd, 
    0x108, 0x116, 0x125, 0x12b, 0x136, 0x13a, 0x145, 0x153, 0x162, 0x169, 
    0x176, 0x180, 0x184, 0x190, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

antlrquejaimeParser::Initializer antlrquejaimeParser::_init;
