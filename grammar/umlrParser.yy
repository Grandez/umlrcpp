%skeleton "lalr1.cc" /* -*- C++ -*- */
%require "3.0.4"
%defines
%define api.parser.class {umlrParser}
%define api.token.constructor
%define api.value.type variant
%define parse.assert

%code requires {
  #include <string>
  #include "umlr.h"
  using namespace rcomp;
  class umlrDriver;
}

// The parsing context.
%param { umlrDriver& driver }

%locations
%initial-action {
  // Initialize the initial location.
  @$.begin.filename = @$.end.filename = &driver.file;
  std::cout << "Fichero: " << driver.file << std::endl << std::flush;
  unitp = &driver.unit;
};

%define parse.trace
%define parse.error verbose
%define api.token.prefix {TOK_}

%code {
   #include "umlrDriver.hh"
   using namespace std;
   rcomp::Unit *unitp = NULL;
   rcomp::R6 *R6Pend; 
   Function *funcPend;
}


%token
  END  0  "end of file"
  MINUS   "-"
  PLUS    "+"
  STAR    "*"
  SLASH   "/"
;

// Reserved
%token <std::string> INHERIT

%token <std::string> ASSIGN
%token <std::string> ASSIGNG
%token <std::string> LPAR
%token <std::string> RPAR
%token <std::string> LBRA
%token <std::string> RBRA
%token <std::string> LIDX
%token <std::string> RIDX
%token <std::string> LIDX2
%token <std::string> RIDX2
%token <std::string> DOLLAR
%token <std::string> COMMA
%token <std::string> SEMMI

%token <std::string> FUNCTION
%token <std::string> R6CLASS
%token <std::string> R6CLASS_PKG
%token <std::string> ACTIVE
%token <std::string> IF
%token <std::string> IFELSE
%token <std::string> ELSE
%token <std::string> LIBRARY
%token <std::string> PUBLIC
%token <std::string> PRIVATE
%token <std::string> LIST
%token <std::string> INIT
%token <std::string> DEST
%token <std::string> TRUE
%token <std::string> FALSE
%token <std::string> NULL
%token <std::string> NA
%token <std::string> ELLIPSIS

%token <std::string> IDENTIFIER "identifier"
%token <std::string> ID
%token <std::string> ID_PKG
%token <std::string> ID_INTERNAL
%token <std::string> STRING
%token <std::string> ALGO

%token <int> NUMBER "number"

%type <std::string>     imports
%type <std::string>     def_name 

%type <rcomp::Definition> def_type
%type <rcomp::Definition> definition
%type <rcomp::R6>         type_r6
%type <rcomp::Function>   type_function

// FUNCTION

%type <std::string> function_def
%type <std::string> func_signature;

%type <std::string> op_assign
          
%type <std::string> cosas
%type <std::string> cosa
%type <std::string> reserved
%type <std::string> datos



// R6

%type <rcomp::R6> R6_def
%type <std::string> R6_parts
%type <std::string> R6_generator
%type <std::string> R6_parent
%type <std::string> R6_scope
%type <std::string> R6_scope_type
%type <std::string> R6_public
%type <std::string> R6_private
%type <std::string> R6_active

%type <std::string> signos
%type <std::string> comma_opt

%printer { yyoutput << $$; } <*>;

%left "+" "-";
%left "*" "/";

%%

%start rsource;

rsource: cosas { cout << "Acabado\n"; } // { driver.result = $1; }
     ;
     
cosas: %empty                 { cout << "Vacio\n"; }
     | cosas cosa             { unitp->tokens++;;   }
     ;

/**
cosa: imports
    | definition   { } // unitp->add($1); } 
    ;
    
imports: LIBRARY LPAR ID RPAR { unitp.addLibrary($3); }

definition: def_name op_assign def_type { $3->name = $1; $$ = $3; }
          ;
          
def_name: expr
        ;

def_type: type_r6
        | type_function       
        ;

type_r6: R6CLASS { R6Pend = new R6(); } R6_def { $$ = R6Pend; }
       ;
        
type_function: FUNCTION { funcPend = new Function(); } function_def { $$ = funcPend; }
             ;
          
// FUNCTION

function_def: func_signature  {}
            ;
            
func_signature: LPAR RPAR     {}
              ;            
// R6
       
R6_def: LPAR R6_parts RPAR  {}
      ;
      
R6_parts: R6_generator { R6Pend->generator = $1; } 
          R6_parent    { R6Pend->parent    = $1; }
          R6_scope
        ;

R6_generator: STRING { $$ = $1 } ;
R6_parent:    comma_opt INHERIT ASSIGN ID { $$ = $3 } ;
                    
R6_scope: R6_scope_type
        | R6_scope  R6_scope_type
        | %empty   { $$ = ""; }
        ;

R6_scope_type: R6_public
             | R6_private
             | R6_active
             ;
             
R6_public: comma_opt PUBLIC ASSIGN
         ;
                              
R6_private: comma_opt PRIVATE ASSIGN
         ;
         
R6_active: comma_opt ACTIVE ASSIGN
         ;

*/
/////////////////////////////////////////////////////////////////////
                                                   
cosa: reserved
    | datos
    | signos
    | ALGO  { } // unitp->add($1); }
    ;


reserved: FUNCTION     { $$ = $1; cout << "Function\n"; unitp->tokens++; }
        | R6CLASS      { $$ = $1; cout << "Clase\n";    }
        | R6CLASS_PKG  { $$ = $1; cout << "Clase\n";    }     
    |    IF
    | IFELSE
    | ELSE
    | LIBRARY
    | PUBLIC
    | PRIVATE
    | ACTIVE
    | LIST
    | INIT
    | DEST
    | TRUE
    | FALSE
    | NULL
    | NA
    | ELLIPSIS
 ;

datos: ID          { $$ = $1; cout << "Id: " << $1 << "\n"; }
     | ID_PKG      { $$ = $1; cout << "Id: " << $1 << "\n"; }
     | ID_INTERNAL { $$ = $1; cout << "Id: " << $1 << "\n"; }
     | STRING     { $$ = $1; cout << "Cadena\n"; }
     ;
         
signos: op_assign
    | LPAR
    | RPAR
    | LBRA
    | RBRA
    | LIDX
    | RIDX
    | LIDX2
    | RIDX2
    | DOLLAR
    | COMMA
    | SEMMI

    ;
         
op_assign: ASSIGN
         | ASSIGNG
         ;
         

comma_opt: COMMA
         | %empty { $$ = ""; }
         ;
          
%%
void yy::umlrParser::error (const location_type& l, const std::string& m) {
  driver.error (l, m);
}
