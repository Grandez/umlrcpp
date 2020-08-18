// A Bison parser, made by GNU Bison 3.5.0.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.





#include "umlrParser.hpp"


// Unqualified %code blocks.

   #include "umlrDriver.hh"
   using namespace std;
   rcomp::Unit *unitp = NULL;
   rcomp::R6 *R6Pend; 
   Function *funcPend;
   Definition *obj;



#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  umlrParser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  umlrParser::umlrParser (umlrDriver& driver_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      driver (driver_yyarg)
  {}

  umlrParser::~umlrParser ()
  {}

  umlrParser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  umlrParser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  umlrParser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  umlrParser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  umlrParser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  umlrParser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  umlrParser::symbol_number_type
  umlrParser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  umlrParser::stack_symbol_type::stack_symbol_type ()
  {}

  umlrParser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 63: // function_definition
        value.YY_MOVE_OR_COPY< rcomp::Function * > (YY_MOVE (that.value));
        break;

      case 67: // parameter
      case 68: // parameter_name
        value.YY_MOVE_OR_COPY< rcomp::Parameter * > (YY_MOVE (that.value));
        break;

      case 64: // function_parameters
      case 65: // parameters_decl
      case 66: // parameters_list
        value.YY_MOVE_OR_COPY< std::list<Parameter *> > (YY_MOVE (that.value));
        break;

      case 7: // INHERIT
      case 8: // ASSIGN
      case 9: // ASSIGNG
      case 10: // LPAR
      case 11: // RPAR
      case 12: // LBRA
      case 13: // RBRA
      case 14: // LIDX
      case 15: // RIDX
      case 16: // DOLLAR
      case 17: // COMMA
      case 18: // SEMMI
      case 19: // FUNCTION
      case 20: // R6CLASS
      case 21: // R6CLASS_PKG
      case 22: // ACTIVE
      case 23: // IF
      case 24: // IFELSE
      case 25: // ELSE
      case 26: // LIBRARY
      case 27: // PUBLIC
      case 28: // PRIVATE
      case 29: // LIST
      case 30: // INIT
      case 31: // DEST
      case 32: // TRUE
      case 33: // FALSE
      case 34: // NULL
      case 35: // NA
      case 36: // ELLIPSIS
      case 37: // EQU
      case 38: // NEQ
      case 39: // GTE
      case 40: // LTE
      case 41: // GT
      case 42: // LT
      case 43: // AND
      case 44: // OR
      case 45: // AND1
      case 46: // OR1
      case 47: // NEG
      case 48: // PLUS
      case 49: // MINUS
      case 50: // MULT
      case 51: // DIV
      case 52: // SEMICOLON
      case 53: // ID
      case 54: // ID_PKG
      case 55: // ID_INTERNAL
      case 56: // STRING
      case 57: // NUMBER
      case 58: // ALGO
      case 60: // rsource
      case 61: // declarations
      case 62: // declaration
      case 69: // parameter_value
      case 70: // function_body
      case 71: // statement_block
      case 72: // statements_decl
      case 73: // statements
      case 74: // statement_separator
      case 75: // statement
      case 76: // expression
      case 77: // expression_reserved
      case 78: // conditional_expression
      case 79: // logical_or_expression
      case 80: // logical_and_expression
      case 81: // inclusive_or_expression
      case 82: // and_expression
      case 83: // relational_expression
      case 84: // arit_expression
      case 85: // primary_expression
      case 86: // library
      case 87: // library_name
      case 88: // library_parms
      case 90: // identifier
      case 91: // constant
      case 92: // op_assign
      case 93: // op_rel
      case 94: // op_arit
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  umlrParser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.type_get ())
    {
      case 63: // function_definition
        value.move< rcomp::Function * > (YY_MOVE (that.value));
        break;

      case 67: // parameter
      case 68: // parameter_name
        value.move< rcomp::Parameter * > (YY_MOVE (that.value));
        break;

      case 64: // function_parameters
      case 65: // parameters_decl
      case 66: // parameters_list
        value.move< std::list<Parameter *> > (YY_MOVE (that.value));
        break;

      case 7: // INHERIT
      case 8: // ASSIGN
      case 9: // ASSIGNG
      case 10: // LPAR
      case 11: // RPAR
      case 12: // LBRA
      case 13: // RBRA
      case 14: // LIDX
      case 15: // RIDX
      case 16: // DOLLAR
      case 17: // COMMA
      case 18: // SEMMI
      case 19: // FUNCTION
      case 20: // R6CLASS
      case 21: // R6CLASS_PKG
      case 22: // ACTIVE
      case 23: // IF
      case 24: // IFELSE
      case 25: // ELSE
      case 26: // LIBRARY
      case 27: // PUBLIC
      case 28: // PRIVATE
      case 29: // LIST
      case 30: // INIT
      case 31: // DEST
      case 32: // TRUE
      case 33: // FALSE
      case 34: // NULL
      case 35: // NA
      case 36: // ELLIPSIS
      case 37: // EQU
      case 38: // NEQ
      case 39: // GTE
      case 40: // LTE
      case 41: // GT
      case 42: // LT
      case 43: // AND
      case 44: // OR
      case 45: // AND1
      case 46: // OR1
      case 47: // NEG
      case 48: // PLUS
      case 49: // MINUS
      case 50: // MULT
      case 51: // DIV
      case 52: // SEMICOLON
      case 53: // ID
      case 54: // ID_PKG
      case 55: // ID_INTERNAL
      case 56: // STRING
      case 57: // NUMBER
      case 58: // ALGO
      case 60: // rsource
      case 61: // declarations
      case 62: // declaration
      case 69: // parameter_value
      case 70: // function_body
      case 71: // statement_block
      case 72: // statements_decl
      case 73: // statements
      case 74: // statement_separator
      case 75: // statement
      case 76: // expression
      case 77: // expression_reserved
      case 78: // conditional_expression
      case 79: // logical_or_expression
      case 80: // logical_and_expression
      case 81: // inclusive_or_expression
      case 82: // and_expression
      case 83: // relational_expression
      case 84: // arit_expression
      case 85: // primary_expression
      case 86: // library
      case 87: // library_name
      case 88: // library_parms
      case 90: // identifier
      case 91: // constant
      case 92: // op_assign
      case 93: // op_rel
      case 94: // op_arit
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  umlrParser::stack_symbol_type&
  umlrParser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 63: // function_definition
        value.copy< rcomp::Function * > (that.value);
        break;

      case 67: // parameter
      case 68: // parameter_name
        value.copy< rcomp::Parameter * > (that.value);
        break;

      case 64: // function_parameters
      case 65: // parameters_decl
      case 66: // parameters_list
        value.copy< std::list<Parameter *> > (that.value);
        break;

      case 7: // INHERIT
      case 8: // ASSIGN
      case 9: // ASSIGNG
      case 10: // LPAR
      case 11: // RPAR
      case 12: // LBRA
      case 13: // RBRA
      case 14: // LIDX
      case 15: // RIDX
      case 16: // DOLLAR
      case 17: // COMMA
      case 18: // SEMMI
      case 19: // FUNCTION
      case 20: // R6CLASS
      case 21: // R6CLASS_PKG
      case 22: // ACTIVE
      case 23: // IF
      case 24: // IFELSE
      case 25: // ELSE
      case 26: // LIBRARY
      case 27: // PUBLIC
      case 28: // PRIVATE
      case 29: // LIST
      case 30: // INIT
      case 31: // DEST
      case 32: // TRUE
      case 33: // FALSE
      case 34: // NULL
      case 35: // NA
      case 36: // ELLIPSIS
      case 37: // EQU
      case 38: // NEQ
      case 39: // GTE
      case 40: // LTE
      case 41: // GT
      case 42: // LT
      case 43: // AND
      case 44: // OR
      case 45: // AND1
      case 46: // OR1
      case 47: // NEG
      case 48: // PLUS
      case 49: // MINUS
      case 50: // MULT
      case 51: // DIV
      case 52: // SEMICOLON
      case 53: // ID
      case 54: // ID_PKG
      case 55: // ID_INTERNAL
      case 56: // STRING
      case 57: // NUMBER
      case 58: // ALGO
      case 60: // rsource
      case 61: // declarations
      case 62: // declaration
      case 69: // parameter_value
      case 70: // function_body
      case 71: // statement_block
      case 72: // statements_decl
      case 73: // statements
      case 74: // statement_separator
      case 75: // statement
      case 76: // expression
      case 77: // expression_reserved
      case 78: // conditional_expression
      case 79: // logical_or_expression
      case 80: // logical_and_expression
      case 81: // inclusive_or_expression
      case 82: // and_expression
      case 83: // relational_expression
      case 84: // arit_expression
      case 85: // primary_expression
      case 86: // library
      case 87: // library_name
      case 88: // library_parms
      case 90: // identifier
      case 91: // constant
      case 92: // op_assign
      case 93: // op_rel
      case 94: // op_arit
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  umlrParser::stack_symbol_type&
  umlrParser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 63: // function_definition
        value.move< rcomp::Function * > (that.value);
        break;

      case 67: // parameter
      case 68: // parameter_name
        value.move< rcomp::Parameter * > (that.value);
        break;

      case 64: // function_parameters
      case 65: // parameters_decl
      case 66: // parameters_list
        value.move< std::list<Parameter *> > (that.value);
        break;

      case 7: // INHERIT
      case 8: // ASSIGN
      case 9: // ASSIGNG
      case 10: // LPAR
      case 11: // RPAR
      case 12: // LBRA
      case 13: // RBRA
      case 14: // LIDX
      case 15: // RIDX
      case 16: // DOLLAR
      case 17: // COMMA
      case 18: // SEMMI
      case 19: // FUNCTION
      case 20: // R6CLASS
      case 21: // R6CLASS_PKG
      case 22: // ACTIVE
      case 23: // IF
      case 24: // IFELSE
      case 25: // ELSE
      case 26: // LIBRARY
      case 27: // PUBLIC
      case 28: // PRIVATE
      case 29: // LIST
      case 30: // INIT
      case 31: // DEST
      case 32: // TRUE
      case 33: // FALSE
      case 34: // NULL
      case 35: // NA
      case 36: // ELLIPSIS
      case 37: // EQU
      case 38: // NEQ
      case 39: // GTE
      case 40: // LTE
      case 41: // GT
      case 42: // LT
      case 43: // AND
      case 44: // OR
      case 45: // AND1
      case 46: // OR1
      case 47: // NEG
      case 48: // PLUS
      case 49: // MINUS
      case 50: // MULT
      case 51: // DIV
      case 52: // SEMICOLON
      case 53: // ID
      case 54: // ID_PKG
      case 55: // ID_INTERNAL
      case 56: // STRING
      case 57: // NUMBER
      case 58: // ALGO
      case 60: // rsource
      case 61: // declarations
      case 62: // declaration
      case 69: // parameter_value
      case 70: // function_body
      case 71: // statement_block
      case 72: // statements_decl
      case 73: // statements
      case 74: // statement_separator
      case 75: // statement
      case 76: // expression
      case 77: // expression_reserved
      case 78: // conditional_expression
      case 79: // logical_or_expression
      case 80: // logical_and_expression
      case 81: // inclusive_or_expression
      case 82: // and_expression
      case 83: // relational_expression
      case 84: // arit_expression
      case 85: // primary_expression
      case 86: // library
      case 87: // library_name
      case 88: // library_parms
      case 90: // identifier
      case 91: // constant
      case 92: // op_assign
      case 93: // op_rel
      case 94: // op_arit
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  umlrParser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  umlrParser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  umlrParser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  umlrParser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  umlrParser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  umlrParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  umlrParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  umlrParser::debug_level_type
  umlrParser::debug_level () const
  {
    return yydebug_;
  }

  void
  umlrParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  umlrParser::state_type
  umlrParser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  umlrParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  umlrParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  umlrParser::operator() ()
  {
    return parse ();
  }

  int
  umlrParser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    // User initialization code.
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = &driver.file;
  //std::cout << "Fichero: " << driver.file << std::endl << std::flush;
  unitp = &driver.unit;
}



    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", static_cast<state_type> (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 63: // function_definition
        yylhs.value.emplace< rcomp::Function * > ();
        break;

      case 67: // parameter
      case 68: // parameter_name
        yylhs.value.emplace< rcomp::Parameter * > ();
        break;

      case 64: // function_parameters
      case 65: // parameters_decl
      case 66: // parameters_list
        yylhs.value.emplace< std::list<Parameter *> > ();
        break;

      case 7: // INHERIT
      case 8: // ASSIGN
      case 9: // ASSIGNG
      case 10: // LPAR
      case 11: // RPAR
      case 12: // LBRA
      case 13: // RBRA
      case 14: // LIDX
      case 15: // RIDX
      case 16: // DOLLAR
      case 17: // COMMA
      case 18: // SEMMI
      case 19: // FUNCTION
      case 20: // R6CLASS
      case 21: // R6CLASS_PKG
      case 22: // ACTIVE
      case 23: // IF
      case 24: // IFELSE
      case 25: // ELSE
      case 26: // LIBRARY
      case 27: // PUBLIC
      case 28: // PRIVATE
      case 29: // LIST
      case 30: // INIT
      case 31: // DEST
      case 32: // TRUE
      case 33: // FALSE
      case 34: // NULL
      case 35: // NA
      case 36: // ELLIPSIS
      case 37: // EQU
      case 38: // NEQ
      case 39: // GTE
      case 40: // LTE
      case 41: // GT
      case 42: // LT
      case 43: // AND
      case 44: // OR
      case 45: // AND1
      case 46: // OR1
      case 47: // NEG
      case 48: // PLUS
      case 49: // MINUS
      case 50: // MULT
      case 51: // DIV
      case 52: // SEMICOLON
      case 53: // ID
      case 54: // ID_PKG
      case 55: // ID_INTERNAL
      case 56: // STRING
      case 57: // NUMBER
      case 58: // ALGO
      case 60: // rsource
      case 61: // declarations
      case 62: // declaration
      case 69: // parameter_value
      case 70: // function_body
      case 71: // statement_block
      case 72: // statements_decl
      case 73: // statements
      case 74: // statement_separator
      case 75: // statement
      case 76: // expression
      case 77: // expression_reserved
      case 78: // conditional_expression
      case 79: // logical_or_expression
      case 80: // logical_and_expression
      case 81: // inclusive_or_expression
      case 82: // and_expression
      case 83: // relational_expression
      case 84: // arit_expression
      case 85: // primary_expression
      case 86: // library
      case 87: // library_name
      case 88: // library_parms
      case 90: // identifier
      case 91: // constant
      case 92: // op_assign
      case 93: // op_rel
      case 94: // op_arit
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
         { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 3:
                                {  }
    break;

  case 4:
              { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 5:
              { yylhs.value.as < std::string > () = yystack_[1].value.as < std::string > (); }
    break;

  case 6:
             { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 7:
                                 { unitp->add(obj); }
    break;

  case 8:
                                                                             { obj->setName(yystack_[4].value.as < std::string > ()); 
                                                                               obj->addParameters(yystack_[1].value.as < std::list<Parameter *> > ()); 
                                                                             }
    break;

  case 9:
                                                { yylhs.value.as < std::list<Parameter *> > () = yystack_[1].value.as < std::list<Parameter *> > (); }
    break;

  case 10:
                 { yylhs.value.as < std::list<Parameter *> > () = yystack_[0].value.as < std::list<Parameter *> > (); }
    break;

  case 11:
                                    {}
    break;

  case 12:
                                                  { yylhs.value.as < std::list<Parameter *> > ().push_back(yystack_[0].value.as < rcomp::Parameter * > ()); }
    break;

  case 13:
                                                  { yystack_[2].value.as < std::list<Parameter *> > ().push_back(yystack_[0].value.as < rcomp::Parameter * > ()); }
    break;

  case 14:
                                             { yylhs.value.as < rcomp::Parameter * > () = yystack_[0].value.as < rcomp::Parameter * > (); }
    break;

  case 15:
                                             { yylhs.value.as < rcomp::Parameter * > () = yystack_[2].value.as < rcomp::Parameter * > ()->addValue(yystack_[0].value.as < std::string > ()); }
    break;

  case 16:
                            { yylhs.value.as < rcomp::Parameter * > () = new Parameter(yystack_[0].value.as < std::string > ()); }
    break;

  case 17:
                            { yylhs.value.as < rcomp::Parameter * > () = new Parameter(yystack_[0].value.as < std::string > ()); }
    break;

  case 18:
                 { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 19:
               { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 20:
               { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 21:
                 { yylhs.value.as < std::string > () = yystack_[2].value.as < std::string > (); }
    break;

  case 22:
                 { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 23:
                                {}
    break;

  case 24:
            { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 25:
            { yylhs.value.as < std::string > () = yystack_[2].value.as < std::string > (); }
    break;

  case 26:
                     { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 27:
                                    {}
    break;

  case 28:
           { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 29:
            { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 30:
            { yylhs.value.as < std::string > () = yystack_[2].value.as < std::string > (); }
    break;

  case 31:
                     { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 32:
                     { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 33:
                     { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 34:
                        { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 35:
                       { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 36:
                       { yylhs.value.as < std::string > () = yystack_[2].value.as < std::string > (); }
    break;

  case 37:
                        { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 38:
                        { yylhs.value.as < std::string > () = yystack_[2].value.as < std::string > (); }
    break;

  case 39:
                         { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 40:
                         { yylhs.value.as < std::string > () = yystack_[2].value.as < std::string > (); }
    break;

  case 41:
                { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 42:
                { yylhs.value.as < std::string > () = yystack_[2].value.as < std::string > (); }
    break;

  case 43:
                       { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 44:
                       { yylhs.value.as < std::string > () = yystack_[2].value.as < std::string > (); }
    break;

  case 45:
                 { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 46:
                 { yylhs.value.as < std::string > () = yystack_[2].value.as < std::string > (); }
    break;

  case 47:
                    { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 48:
                    { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 49:
                    { yylhs.value.as < std::string > () = yystack_[2].value.as < std::string > (); }
    break;

  case 50:
                                                      { unitp->addLibrary(yystack_[2].value.as < std::string > ()); }
    break;

  case 51:
                      { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 52:
                      { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 53:
                              {}
    break;

  case 54:
                    { obj = new Function(); }
    break;

  case 55:
            { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 56:
          { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 57:
          { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 58:
           { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 59:
           { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 60:
        { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 61:
        { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 62:
        { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 63:
        { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 64:
        { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 65:
        { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 66:
         { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 67:
         { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 68:
         { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;

  case 69:
         { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
    break;



            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yy_error_token_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yy_error_token_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = static_cast<state_type> (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  umlrParser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  umlrParser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    std::ptrdiff_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */
    if (!yyla.empty ())
      {
        symbol_number_type yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];

        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yy_error_token_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char umlrParser::yypact_ninf_ = -43;

  const signed char umlrParser::yytable_ninf_ = -23;

  const signed char
  umlrParser::yypact_[] =
  {
     -20,     1,    18,    22,   -20,   -43,   -43,   -43,   -32,   -43,
     -43,    12,   -43,   -43,   -43,   -43,   -43,   -43,    24,    30,
     -28,    -8,   -43,   -43,   -43,    33,    38,    48,   -43,   -43,
      -3,    -3,   -43,   -43,   -43,   -43,   -43,   -43,   -43,    13,
      15,    14,    16,    -2,   -31,    18,   -43,   -43,   -43,   -28,
     -27,    51,    46,    -1,   -43,    -3,    -3,    -3,    -3,   -43,
     -43,   -43,   -43,   -43,   -43,    -3,   -43,   -43,   -43,   -43,
      -3,   -10,    48,   -43,   -43,   -43,   -43,   -43,    -3,    15,
     -43,    14,    16,    -2,   -31,   -43,   -43,   -43,   -43,   -43,
     -43
  };

  const signed char
  umlrParser::yydefact_[] =
  {
       3,     0,     0,     0,     2,     4,     7,     6,     0,    58,
      59,     0,     1,     5,    51,    52,    53,    54,     0,     0,
      11,     0,    50,    17,    55,     0,    10,    12,    14,    16,
       0,    23,    56,    57,     8,    19,    20,    28,    29,    34,
      35,    37,    39,    41,    43,    45,    47,    48,     9,     0,
       0,     0,     0,    27,    24,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,     0,    66,    67,    68,    69,
       0,     0,    13,    15,    18,    49,    21,    26,     0,    36,
      45,    38,    40,    42,    44,    46,    31,    32,    33,    30,
      25
  };

  const signed char
  umlrParser::yypgoto_[] =
  {
     -43,   -43,   -43,    59,   -43,   -43,   -43,   -43,    17,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -26,   -29,   -43,   -43,
     -43,     9,    11,     8,    10,     4,   -42,   -43,   -43,   -43,
     -43,   -17,    20,    26,   -43,   -43
  };

  const signed char
  umlrParser::yydefgoto_[] =
  {
      -1,     3,     4,     5,     6,    21,    25,    26,    27,    28,
      73,    34,    35,    52,    53,    78,    36,    37,    89,    38,
      39,    40,    41,    42,    43,    44,    45,     7,    16,    19,
      18,    46,    47,    11,    65,    70
  };

  const signed char
  umlrParser::yytable_[] =
  {
      30,    51,    30,    29,    31,    54,     1,    30,    23,    86,
      87,     8,   -22,    80,    80,    80,    80,    66,    67,    68,
      69,    14,    12,    80,    15,    24,     9,    10,    85,    32,
      33,    17,    29,     2,    20,    59,    60,    61,    62,    63,
      64,    22,    88,    24,    48,    24,    32,    33,    32,    33,
      24,    77,    90,    32,    33,    49,    50,    55,    56,    76,
      57,    58,    75,    13,    79,    82,    72,    81,    83,    84,
      74,    71
  };

  const signed char
  umlrParser::yycheck_[] =
  {
      10,    30,    10,    20,    12,    31,    26,    10,    36,    19,
      20,    10,    13,    55,    56,    57,    58,    48,    49,    50,
      51,    53,     0,    65,    56,    53,     8,     9,    70,    56,
      57,    19,    49,    53,    10,    37,    38,    39,    40,    41,
      42,    11,    71,    53,    11,    53,    56,    57,    56,    57,
      53,    52,    78,    56,    57,    17,     8,    44,    43,    13,
      46,    45,    11,     4,    55,    57,    49,    56,    58,    65,
      50,    45
  };

  const signed char
  umlrParser::yystos_[] =
  {
       0,    26,    53,    60,    61,    62,    63,    86,    10,     8,
       9,    92,     0,    62,    53,    56,    87,    19,    89,    88,
      10,    64,    11,    36,    53,    65,    66,    67,    68,    90,
      10,    12,    56,    57,    70,    71,    75,    76,    78,    79,
      80,    81,    82,    83,    84,    85,    90,    91,    11,    17,
       8,    76,    72,    73,    75,    44,    43,    46,    45,    37,
      38,    39,    40,    41,    42,    93,    48,    49,    50,    51,
      94,    92,    67,    69,    91,    11,    13,    52,    74,    80,
      85,    81,    82,    83,    84,    85,    19,    20,    76,    77,
      75
  };

  const signed char
  umlrParser::yyr1_[] =
  {
       0,    59,    60,    60,    61,    61,    62,    62,    63,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    69,    70,
      70,    71,    72,    72,    73,    73,    74,    74,    75,    76,
      76,    77,    77,    77,    78,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    85,    85,    85,
      86,    87,    87,    88,    89,    90,    91,    91,    92,    92,
      93,    93,    93,    93,    93,    93,    94,    94,    94,    94
  };

  const signed char
  umlrParser::yyr2_[] =
  {
       0,     2,     1,     0,     1,     2,     1,     1,     5,     3,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     1,     0,     1,     3,     1,     0,     1,     1,
       3,     1,     1,     1,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     3,
       5,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const umlrParser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\"+\"", "\"_\"", "\"*\"",
  "\"/\"", "INHERIT", "ASSIGN", "ASSIGNG", "LPAR", "RPAR", "LBRA", "RBRA",
  "LIDX", "RIDX", "DOLLAR", "COMMA", "SEMMI", "FUNCTION", "R6CLASS",
  "R6CLASS_PKG", "ACTIVE", "IF", "IFELSE", "ELSE", "LIBRARY", "PUBLIC",
  "PRIVATE", "LIST", "INIT", "DEST", "TRUE", "FALSE", "NULL", "NA",
  "ELLIPSIS", "EQU", "NEQ", "GTE", "LTE", "GT", "LT", "AND", "OR", "AND1",
  "OR1", "NEG", "PLUS", "MINUS", "MULT", "DIV", "SEMICOLON", "ID",
  "ID_PKG", "ID_INTERNAL", "STRING", "NUMBER", "ALGO", "$accept",
  "rsource", "declarations", "declaration", "function_definition",
  "function_parameters", "parameters_decl", "parameters_list", "parameter",
  "parameter_name", "parameter_value", "function_body", "statement_block",
  "statements_decl", "statements", "statement_separator", "statement",
  "expression", "expression_reserved", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "and_expression", "relational_expression",
  "arit_expression", "primary_expression", "library", "library_name",
  "library_parms", "function", "identifier", "constant", "op_assign",
  "op_rel", "op_arit", YY_NULLPTR
  };

#if YYDEBUG
  const short
  umlrParser::yyrline_[] =
  {
       0,   165,   165,   166,   171,   172,   175,   176,   184,   189,
     192,   193,   196,   197,   200,   201,   204,   205,   208,   211,
     212,   219,   222,   223,   225,   226,   229,   230,   237,   240,
     241,   244,   245,   246,   249,   252,   253,   256,   257,   260,
     261,   264,   265,   268,   269,   272,   273,   276,   277,   278,
     285,   288,   289,   292,   299,   301,   304,   305,   308,   309,
     312,   313,   314,   315,   316,   317,   320,   321,   322,   323
  };

  // Print the state stack on the debug stream.
  void
  umlrParser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  umlrParser::yy_reduce_print_ (int yyrule)
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy



void yy::umlrParser::error (const location_type& l, const std::string& m) {
  driver.error (l, m);
}

