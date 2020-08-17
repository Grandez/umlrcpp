%{ /* -*- C++ -*- */
# include <cerrno>
# include <climits>
# include <cstdlib>
# include <string>
# include "umlrDriver.hh"
# include "umlrParser.hpp"

# undef yywrap
# define yywrap() 1

// The location of the current token.
static yy::location loc;
%}

%option noyywrap nounput batch noinput
%option stack
%x COMMENT QUOTE

id    [a-zA-Z_\.][a-zA-Z_\.0-9]*
int   [0-9]+
blank [ \t]
R6    "R6Class"

%{
  // Code run each time a pattern is matched.
  # define YY_USER_ACTION  loc.columns (yyleng);
%}



%%

%{
  // Code run each time yylex is called.
  loc.step ();
%}

<<EOF>>    { return yy::umlrParser::make_END(loc); } 
{blank}+   { loc.step ();                     }
[\n]+      { loc.lines (yyleng); loc.step (); }
"#"        { std::cout << "JGG Inicio comentario\n"; BEGIN(COMMENT); }
\"         { std::cout << "JGG Inicio cadena\n"; BEGIN(QUOTE);   }

"library"     { return yy::umlrParser::make_LIBRARY(yytext, loc);   }
"function"    { return yy::umlrParser::make_FUNCTION(yytext, loc);  }
{R6}          { return yy::umlrParser::make_R6CLASS(yytext, loc);   }
"ifelse"      { return yy::umlrParser::make_IFELSE(yytext, loc);    }
"else"        { return yy::umlrParser::make_ELSE(yytext, loc);      }
"if"          { return yy::umlrParser::make_IF(yytext, loc);        }
"public"      { return yy::umlrParser::make_PUBLIC(yytext, loc);    }
"private"     { return yy::umlrParser::make_PRIVATE(yytext, loc);   }
"active"      { return yy::umlrParser::make_ACTIVE(yytext, loc);    }
"list"        { return yy::umlrParser::make_LIST(yytext, loc);      }
"initialize"  { return yy::umlrParser::make_INIT(yytext, loc);      }
"finalize"    { return yy::umlrParser::make_DEST(yytext, loc);      }
"TRUE"        { return yy::umlrParser::make_TRUE(yytext, loc);      }
"FALSE"       { return yy::umlrParser::make_FALSE(yytext, loc);     }
"NULL"        { return yy::umlrParser::make_NULL(yytext, loc);      }
"NA"          { return yy::umlrParser::make_NA(yytext, loc);        }

"T"           { return yy::umlrParser::make_TRUE(yytext, loc);      }
"F"           { return yy::umlrParser::make_FALSE(yytext, loc);     }

"..."      { return yy::umlrParser::make_ELLIPSIS(yytext, loc);  }
"<<-"      { return yy::umlrParser::make_ASSIGNG(yytext, loc);  } 
"<-"       { return yy::umlrParser::make_ASSIGN(yytext, loc);   }
"[["       { return yy::umlrParser::make_LIDX2(yytext, loc);    }
"]]"       { return yy::umlrParser::make_RIDX2(yytext, loc);    }
"="        { return yy::umlrParser::make_ASSIGN(yytext, loc);   }
"("        { return yy::umlrParser::make_LPAR(yytext, loc);     }
")"        { return yy::umlrParser::make_RPAR(yytext, loc);     }
"{"        { return yy::umlrParser::make_LBRA(yytext, loc);     }
"}"        { return yy::umlrParser::make_RBRA(yytext, loc);     }
"["        { return yy::umlrParser::make_LIDX(yytext, loc);     }
"]"        { return yy::umlrParser::make_RIDX(yytext, loc);     }
"$"        { return yy::umlrParser::make_DOLLAR(yytext, loc);   }
","        { return yy::umlrParser::make_COMMA(yytext, loc);    }
";"        { return yy::umlrParser::make_SEMMI(yytext, loc);    }

{id}:::{id} { return yy::umlrParser::make_ID_INTERNAL(yytext, loc);       }
{id}::{R6}  { return yy::umlrParser::make_R6CLASS_PKG(yytext, loc);  }
{id}::{id}  { return yy::umlrParser::make_ID_PKG(yytext, loc);       }
{id}        { return yy::umlrParser::make_ID(yytext, loc);  }

.          { return yy::umlrParser::make_ALGO(yytext, loc);     }



<COMMENT>{
  \n        { BEGIN(INITIAL);  std::cout << "JGG Comment\n"; }
  {blank}+  {                      }
  [.]+      { /* Eat */ }
}

<QUOTE>{
  \"        { BEGIN(INITIAL); return yy::umlrParser::make_STRING(yytext, loc); }
  [.]+      { /* Eat */ }
}

%%

void umlrDriver::scan_begin () {
   yy_flex_debug = trace_scanning;
   if (file.empty () || file == "-") {
       yyin = stdin;
   } else if (!(yyin = fopen (file.c_str (), "r"))) {
              error ("cannot open " + file + ": " + strerror(errno));
              exit (EXIT_FAILURE);
   }
}

void umlrDriver::scan_end () {
  fclose (yyin);
}

