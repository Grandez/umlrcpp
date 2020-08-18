%skeleton "lalr1.cc" /* _*_ C++ _*_ */
%require "3.0.4"
%defines
%define api.parser.class {umlrParser}
%define api.token.constructor
%define api.value.type variant
%define parse.assert

%code requires {
  #include <string>
  #include <list>
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
  //std::cout << "Fichero: " << driver.file << std::endl << std::flush;
  unitp = &driver.unit;
};

// %define parse.trace
%define parse.error verbose
%define api.token.prefix {TOK_}

%left "+" "_";
%left "*" "/";

%code {
   #include "umlrDriver.hh"
   using namespace std;
   rcomp::Unit *unitp = NULL;
   rcomp::R6 *R6Pend; 
   Function *funcPend;
   Definition *obj;
}


%token END  0  "end of file" ;

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

%token <std::string> EQU
%token <std::string> NEQ
%token <std::string> GTE
%token <std::string> LTE
%token <std::string> GT
%token <std::string> LT
%token <std::string> AND
%token <std::string> OR
%token <std::string> AND1
%token <std::string> OR1
%token <std::string> NEG

%token <std::string> PLUS
%token <std::string> MINUS
%token <std::string> MULT
%token <std::string> DIV

%token <std::string> SEMICOLON

%token <std::string> ID
%token <std::string> ID_PKG
%token <std::string> ID_INTERNAL
%token <std::string> STRING
%token <std::string> NUMBER
%token <std::string> ALGO


///////////////////////////////////////////////
/// Types
///////////////////////////////////////////////

%type <std::string> rsource
%type <std::string> declarations
%type <std::string> declaration

%type <rcomp::Function *> function_definition
%type <std::string> function_body

%type <std::list<Parameter *>> function_parameters
%type <std::list<Parameter *>> parameters_decl
%type <std::list<Parameter *>> parameters_list
%type <rcomp::Parameter *> parameter
%type <rcomp::Parameter *> parameter_name
%type <std::string> parameter_value


// LIBRARY
%type <std::string> library
%type <std::string> library_name
%type <std::string> library_parms

// STATEMENT

%type <std::string> statement_block
%type <std::string> statements
%type <std::string> statement
%type <std::string> statements_decl
%type <std::string> statement_separator

// DECLARATIONS
%type <std::string> expression
%type <std::string> expression_reserved
%type <std::string> conditional_expression
%type <std::string> primary_expression
%type <std::string> logical_or_expression
%type <std::string> logical_and_expression
%type <std::string> inclusive_or_expression
%type <std::string> and_expression
%type <std::string> relational_expression
%type <std::string> arit_expression


%type <std::string> op_arit
%type <std::string> op_rel
%type <std::string> op_assign

%type <std::string> identifier
%type <std::string> constant

%%

%start rsource;

// Un fichero fuente es un conjunto de declaraciones o nada
rsource: declarations
       | %empty                 {  }
       ;

// Las declaraciones son cada uno de los tipos de sentencias

declarations: declaration
            | declarations declaration
            ;

declaration: library
           | function_definition { unitp->add(obj); }
           ;

////////////////////////////////////////////////////
// FUNCTION
////////////////////////////////////////////////////

           
function_definition: ID op_assign function function_parameters function_body { obj->setName($1); 
                                                                               obj->addParameters($4); 
                                                                             }
                   ;

function_parameters: LPAR parameters_decl RPAR  { $$ = $2; }
                   ;

parameters_decl: parameters_list    
               | %empty             {}
               ;
                
parameters_list: parameter                        { $$.push_back($1); }
               | parameters_list COMMA parameter  { $1.push_back($3); }
               ;

parameter: parameter_name                    { $$ = $1; }
         | parameter ASSIGN parameter_value  { $$ = $1->addValue($3); }
         ;

parameter_name: identifier  { $$ = new Parameter($1); }
              | ELLIPSIS    { $$ = new Parameter($1); }
              ;

parameter_value: constant   
               ;
                                                    
function_body: statement_block
             | statement
             ;

////////////////////////////////////////////////////
// STATEMENTS
////////////////////////////////////////////////////

statement_block: LBRA statements_decl RBRA
               ;

statements_decl: statements
               | %empty         {}
               ;
statements: statement
          | statements statement_separator statement
          ;

statement_separator: SEMICOLON
                   | %empty         {}
                   ;                  
                                         
////////////////////////////////////////////////////
// STATEMENT
////////////////////////////////////////////////////

statement: expression
         ;
         
expression: conditional_expression
          | primary_expression op_assign expression_reserved
          ;
         
expression_reserved: FUNCTION
                   | R6CLASS
                   | expression         
                   ;
                                         
conditional_expression: logical_or_expression
                      ;

logical_or_expression: logical_and_expression
                     | logical_or_expression OR logical_and_expression
                     ;
                     
logical_and_expression: inclusive_or_expression
                      | logical_and_expression AND inclusive_or_expression
                      ;

inclusive_or_expression: and_expression
                       | inclusive_or_expression OR1 and_expression
                       ;

and_expression: relational_expression
              | and_expression AND1 relational_expression
              ;

relational_expression: arit_expression
                     | relational_expression op_rel arit_expression
                     ;

arit_expression: primary_expression
               | arit_expression op_arit primary_expression
               ;      

primary_expression: identifier
                  | constant
                  | LPAR expression RPAR
                  ;
                  
////////////////////////////////////////////////////
// LIBRARY
////////////////////////////////////////////////////

library: LIBRARY LPAR library_name library_parms RPAR { unitp->addLibrary($3); } ;
       ;

library_name: ID      { $$ = $1; }
            | STRING  { $$ = $1; }
            ;
                   
library_parms: %empty         {}
            ;

////////////////////////////////////////////////////
// 
////////////////////////////////////////////////////

function: FUNCTION  { obj = new Function(); }
 
identifier: ID
          ;
          
constant: STRING  
        | NUMBER
        ;

op_assign: ASSIGN
         | ASSIGNG
         ;
         
op_rel: EQU
      | NEQ
      | GTE
      | LTE
      | GT
      | LT
      ;
      
op_arit: PLUS
       | MINUS
       | MULT
       | DIV
       ;
          
%%

void yy::umlrParser::error (const location_type& l, const std::string& m) {
  driver.error (l, m);
}

