
    //#line 156 "dtParserTemplateD.g



    //#line 162 "dtParserTemplateD.g


#include <iostream>

#include "ExprParserprs.h"
#include "DeterministicParser.h"
#include "diagnose.h"
#include "ErrorToken.h"
#include "Exception.h"
#include "IAbstractArrayList.h"
#include "IAst.h"
#include "ILexStream.h"
#include "ParseTable.h"
#include "PrsStream.h"
#include "RuleAction.h"
#include "AstPoolHolder.h"
 struct ExprParser :public PrsStream ,public RuleAction
{
 
     bool unimplementedSymbolsWarning = false;
      struct  Ast ;

    inline static ParseTable* prs = new ExprParserprs();
     ParseTable* getParseTable() { return prs; }

     DeterministicParser* dtParser = nullptr;
     DeterministicParser* getParser() { return dtParser; }

     void setResult(Object* object) { dtParser->setSym1(object); }
     Object* getRhsSym(int i) { return dtParser->getSym(i); }

     int getRhsTokenIndex(int i) { return dtParser->getToken(i); }
     IToken* getRhsIToken(int i) { return PrsStream::getIToken(getRhsTokenIndex(i)); }
    
     int getRhsFirstTokenIndex(int i) { return dtParser->getFirstToken(i); }
     IToken* getRhsFirstIToken(int i) { return PrsStream::getIToken(getRhsFirstTokenIndex(i)); }

     int getRhsLastTokenIndex(int i) { return dtParser->getLastToken(i); }
     IToken* getRhsLastIToken(int i) { return PrsStream::getIToken(getRhsLastTokenIndex(i)); }

     int getLeftSpan() { return dtParser->getFirstToken(); }
     IToken* getLeftIToken()  { return PrsStream::getIToken(getLeftSpan()); }

     int getRightSpan() { return dtParser->getLastToken(); }
     IToken* getRightIToken() { return PrsStream::getIToken(getRightSpan()); }

     int getRhsErrorTokenIndex(int i)
    {
        int index = dtParser->getToken(i);
        IToken* err = PrsStream::getIToken(index);
        return ( dynamic_cast<ErrorToken*>(err) ? index : 0);
    }
     ErrorToken* getRhsErrorIToken(int i)
    {
        int index = dtParser->getToken(i);
        IToken* err = PrsStream::getIToken(index);
        return (ErrorToken*) (  dynamic_cast<ErrorToken*>(err) ? err : nullptr);
    }
	~ExprParser()
	{
	   delete dtParser;
	}
     ExprParser(ILexStream* lexStream):PrsStream(lexStream)
    {
        try
        {
            PrsStream::remapTerminalSymbols(orderedTerminalSymbols(), ExprParserprs::EOFT_SYMBOL);
        }
        catch(NullExportedSymbolsException& e) {
        }
        catch(NullTerminalSymbolsException& e) {
        }
        catch(UnimplementedTerminalsException& e)
        {
            if (unimplementedSymbolsWarning) {
                auto unimplemented_symbols = e.getSymbols();
                 std::cout << ("The Lexer will not scan the following token(s):");
                for (int i = 0; i < unimplemented_symbols.size(); i++)
                {
                    auto id =  unimplemented_symbols.at(i);
                    std::wcout << L"    " << ExprParsersym::orderedTerminalSymbols[id];          
                }
                 std::cout << std::endl;
            }
        }
        catch(UndefinedEofSymbolException& e)
        {
		    
            //throw ( UndefinedEofSymbolException
                //                ("The Lexer does not implement the Eof symbol " +
                //                 ExprParsersym::orderedTerminalSymbols[ExprParserprs::EOFT_SYMBOL]));
        }
        
        try
        {
            dtParser = new DeterministicParser(this, prs, this);
        }
        catch (NotDeterministicParseTableException& e)
        {
            throw  ( NotDeterministicParseTableException
                                 ("Regenerate ExprParserprs.java with -NOBACKTRACK option"));
        }
        catch (BadParseSymFileException& e)
        {
            throw  ( BadParseSymFileException("Bad Parser Symbol File -- ExprParsersym.java. Regenerate ExprParserprs.java"));
        }
    }

     std::vector<std::wstring> orderedTerminalSymbols() { return ExprParsersym::orderedTerminalSymbols; }
     std::wstring getTokenKindName(int kind) { return ExprParsersym::orderedTerminalSymbols[kind]; }            
     int getEOFTokenKind() { return ExprParserprs ::EOFT_SYMBOL; }
     PrsStream* getParseStream() { return (PrsStream*) this; }
    struct Ast;
     Ast * parser()
    {
        return parser(nullptr, 0);
    }
        
     Ast * parser(Monitor* monitor)
    {
        return parser(monitor, 0);
    }
        
     Ast * parser(int error_repair_count)
    {
        return parser(nullptr, error_repair_count);
    }
        
     Ast * parser(Monitor* monitor, int error_repair_count)
    {
        dtParser->setMonitor(monitor);
        
        try
        {
            return (Ast *) dtParser->parse();
        }
        catch (BadParseException e)
        {
            reset(e.error_token); // point to error token

            DiagnoseParser diagnoseParser(this, prs);
            diagnoseParser.diagnose(e.error_token);
        }

        return nullptr;
    }

    //
    // Additional entry points, if any
    //
    

    //#line 318 "dtParserTemplateD.g

     void ruleAction(int ruleNumber)
    {
        switch (ruleNumber)
        {

    //#line 322 "dtParserTemplateD.g

    
            default:
                break;
        }
        return;
    }
};

