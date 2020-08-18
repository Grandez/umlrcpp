// A Bison parser, made by GNU Bison 3.5.0.

// Skeleton interface for Bison LALR(1) parsers in C++

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


/**
 ** \file umlrParser.hpp
 ** Define the yy::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.

#ifndef YY_YY_UMLRPARSER_HPP_INCLUDED
# define YY_YY_UMLRPARSER_HPP_INCLUDED
// "%code requires" blocks.

  #include <string>
  #include <list>
  #include "umlr.h"
  using namespace rcomp;
  class umlrDriver;


# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"
#include <typeinfo>
#ifndef YY_ASSERT
# include <cassert>
# define YY_ASSERT assert
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

namespace yy {




  /// A Bison parser.
  class umlrParser
  {
  public:
#ifndef YYSTYPE
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class semantic_type
  {
  public:
    /// Type of *this.
    typedef semantic_type self_type;

    /// Empty construction.
    semantic_type () YY_NOEXCEPT
      : yybuffer_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    semantic_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YY_ASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

    /// Destruction, allowed only if empty.
    ~semantic_type () YY_NOEXCEPT
    {
      YY_ASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
    /// Prohibit blind copies.
    self_type& operator= (const self_type&);
    semantic_type (const self_type&);

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yybuffer_.yyraw;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yybuffer_.yyraw;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // function_definition
      char dummy1[sizeof (rcomp::Function *)];

      // parameter
      // parameter_name
      char dummy2[sizeof (rcomp::Parameter *)];

      // function_parameters
      // parameters_decl
      // parameters_list
      char dummy3[sizeof (std::list<Parameter *>)];

      // INHERIT
      // ASSIGN
      // ASSIGNG
      // LPAR
      // RPAR
      // LBRA
      // RBRA
      // LIDX
      // RIDX
      // DOLLAR
      // COMMA
      // SEMMI
      // FUNCTION
      // R6CLASS
      // R6CLASS_PKG
      // ACTIVE
      // IF
      // IFELSE
      // ELSE
      // LIBRARY
      // PUBLIC
      // PRIVATE
      // LIST
      // INIT
      // DEST
      // TRUE
      // FALSE
      // NULL
      // NA
      // ELLIPSIS
      // EQU
      // NEQ
      // GTE
      // LTE
      // GT
      // LT
      // AND
      // OR
      // AND1
      // OR1
      // NEG
      // PLUS
      // MINUS
      // MULT
      // DIV
      // SEMICOLON
      // ID
      // ID_PKG
      // ID_INTERNAL
      // STRING
      // NUMBER
      // ALGO
      // rsource
      // declarations
      // declaration
      // parameter_value
      // function_body
      // statement_block
      // statements_decl
      // statements
      // statement_separator
      // statement
      // expression
      // expression_reserved
      // conditional_expression
      // logical_or_expression
      // logical_and_expression
      // inclusive_or_expression
      // and_expression
      // relational_expression
      // arit_expression
      // primary_expression
      // library
      // library_name
      // library_parms
      // identifier
      // constant
      // op_assign
      // op_rel
      // op_arit
      char dummy4[sizeof (std::string)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me;
      /// A buffer large enough to store any of the semantic values.
      char yyraw[size];
    } yybuffer_;

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Tokens.
    struct token
    {
      enum yytokentype
      {
        TOK_END = 0,
        TOK_INHERIT = 262,
        TOK_ASSIGN = 263,
        TOK_ASSIGNG = 264,
        TOK_LPAR = 265,
        TOK_RPAR = 266,
        TOK_LBRA = 267,
        TOK_RBRA = 268,
        TOK_LIDX = 269,
        TOK_RIDX = 270,
        TOK_DOLLAR = 271,
        TOK_COMMA = 272,
        TOK_SEMMI = 273,
        TOK_FUNCTION = 274,
        TOK_R6CLASS = 275,
        TOK_R6CLASS_PKG = 276,
        TOK_ACTIVE = 277,
        TOK_IF = 278,
        TOK_IFELSE = 279,
        TOK_ELSE = 280,
        TOK_LIBRARY = 281,
        TOK_PUBLIC = 282,
        TOK_PRIVATE = 283,
        TOK_LIST = 284,
        TOK_INIT = 285,
        TOK_DEST = 286,
        TOK_TRUE = 287,
        TOK_FALSE = 288,
        TOK_NULL = 289,
        TOK_NA = 290,
        TOK_ELLIPSIS = 291,
        TOK_EQU = 292,
        TOK_NEQ = 293,
        TOK_GTE = 294,
        TOK_LTE = 295,
        TOK_GT = 296,
        TOK_LT = 297,
        TOK_AND = 298,
        TOK_OR = 299,
        TOK_AND1 = 300,
        TOK_OR1 = 301,
        TOK_NEG = 302,
        TOK_PLUS = 303,
        TOK_MINUS = 304,
        TOK_MULT = 305,
        TOK_DIV = 306,
        TOK_SEMICOLON = 307,
        TOK_ID = 308,
        TOK_ID_PKG = 309,
        TOK_ID_INTERNAL = 310,
        TOK_STRING = 311,
        TOK_NUMBER = 312,
        TOK_ALGO = 313
      };
    };

    /// (External) token type, as returned by yylex.
    typedef token::yytokentype token_type;

    /// Symbol type: an internal symbol number.
    typedef int symbol_number_type;

    /// The symbol type number to denote an empty symbol.
    enum { empty_symbol = -2 };

    /// Internal symbol number for tokens (subsumed by symbol_number_type).
    typedef signed char token_number_type;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol type
    /// via type_get ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ()
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that);
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, rcomp::Function *&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const rcomp::Function *& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, rcomp::Parameter *&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const rcomp::Parameter *& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::list<Parameter *>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::list<Parameter *>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }

      /// Destroy contents, and record that is empty.
      void clear ()
      {
        // User destructor.
        symbol_number_type yytype = this->type_get ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yytype)
        {
       default:
          break;
        }

        // Type destructor.
switch (yytype)
    {
      case 63: // function_definition
        value.template destroy< rcomp::Function * > ();
        break;

      case 67: // parameter
      case 68: // parameter_name
        value.template destroy< rcomp::Parameter * > ();
        break;

      case 64: // function_parameters
      case 65: // parameters_decl
      case 66: // parameters_list
        value.template destroy< std::list<Parameter *> > ();
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
        value.template destroy< std::string > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_type
    {
      /// Default constructor.
      by_type ();

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_type (by_type&& that);
#endif

      /// Copy constructor.
      by_type (const by_type& that);

      /// The symbol type as needed by the constructor.
      typedef token_type kind_type;

      /// Constructor from (external) token numbers.
      by_type (kind_type t);

      /// Record that this symbol is empty.
      void clear ();

      /// Steal the symbol type from \a that.
      void move (by_type& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The symbol type.
      /// \a empty_symbol when empty.
      /// An int, not token_number_type, to be able to store empty_symbol.
      int type;
    };

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_type>
    {
      /// Superclass.
      typedef basic_symbol<by_type> super_type;

      /// Empty symbol.
      symbol_type () {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type(token_type (tok), std::move (l))
      {
        YY_ASSERT (tok == token::TOK_END || tok == 258 || tok == 259 || tok == 260 || tok == 261);
      }
#else
      symbol_type (int tok, const location_type& l)
        : super_type(token_type (tok), l)
      {
        YY_ASSERT (tok == token::TOK_END || tok == 258 || tok == 259 || tok == 260 || tok == 261);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YY_ASSERT (tok == token::TOK_INHERIT || tok == token::TOK_ASSIGN || tok == token::TOK_ASSIGNG || tok == token::TOK_LPAR || tok == token::TOK_RPAR || tok == token::TOK_LBRA || tok == token::TOK_RBRA || tok == token::TOK_LIDX || tok == token::TOK_RIDX || tok == token::TOK_DOLLAR || tok == token::TOK_COMMA || tok == token::TOK_SEMMI || tok == token::TOK_FUNCTION || tok == token::TOK_R6CLASS || tok == token::TOK_R6CLASS_PKG || tok == token::TOK_ACTIVE || tok == token::TOK_IF || tok == token::TOK_IFELSE || tok == token::TOK_ELSE || tok == token::TOK_LIBRARY || tok == token::TOK_PUBLIC || tok == token::TOK_PRIVATE || tok == token::TOK_LIST || tok == token::TOK_INIT || tok == token::TOK_DEST || tok == token::TOK_TRUE || tok == token::TOK_FALSE || tok == token::TOK_NULL || tok == token::TOK_NA || tok == token::TOK_ELLIPSIS || tok == token::TOK_EQU || tok == token::TOK_NEQ || tok == token::TOK_GTE || tok == token::TOK_LTE || tok == token::TOK_GT || tok == token::TOK_LT || tok == token::TOK_AND || tok == token::TOK_OR || tok == token::TOK_AND1 || tok == token::TOK_OR1 || tok == token::TOK_NEG || tok == token::TOK_PLUS || tok == token::TOK_MINUS || tok == token::TOK_MULT || tok == token::TOK_DIV || tok == token::TOK_SEMICOLON || tok == token::TOK_ID || tok == token::TOK_ID_PKG || tok == token::TOK_ID_INTERNAL || tok == token::TOK_STRING || tok == token::TOK_NUMBER || tok == token::TOK_ALGO);
      }
#else
      symbol_type (int tok, const std::string& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YY_ASSERT (tok == token::TOK_INHERIT || tok == token::TOK_ASSIGN || tok == token::TOK_ASSIGNG || tok == token::TOK_LPAR || tok == token::TOK_RPAR || tok == token::TOK_LBRA || tok == token::TOK_RBRA || tok == token::TOK_LIDX || tok == token::TOK_RIDX || tok == token::TOK_DOLLAR || tok == token::TOK_COMMA || tok == token::TOK_SEMMI || tok == token::TOK_FUNCTION || tok == token::TOK_R6CLASS || tok == token::TOK_R6CLASS_PKG || tok == token::TOK_ACTIVE || tok == token::TOK_IF || tok == token::TOK_IFELSE || tok == token::TOK_ELSE || tok == token::TOK_LIBRARY || tok == token::TOK_PUBLIC || tok == token::TOK_PRIVATE || tok == token::TOK_LIST || tok == token::TOK_INIT || tok == token::TOK_DEST || tok == token::TOK_TRUE || tok == token::TOK_FALSE || tok == token::TOK_NULL || tok == token::TOK_NA || tok == token::TOK_ELLIPSIS || tok == token::TOK_EQU || tok == token::TOK_NEQ || tok == token::TOK_GTE || tok == token::TOK_LTE || tok == token::TOK_GT || tok == token::TOK_LT || tok == token::TOK_AND || tok == token::TOK_OR || tok == token::TOK_AND1 || tok == token::TOK_OR1 || tok == token::TOK_NEG || tok == token::TOK_PLUS || tok == token::TOK_MINUS || tok == token::TOK_MULT || tok == token::TOK_DIV || tok == token::TOK_SEMICOLON || tok == token::TOK_ID || tok == token::TOK_ID_PKG || tok == token::TOK_ID_INTERNAL || tok == token::TOK_STRING || tok == token::TOK_NUMBER || tok == token::TOK_ALGO);
      }
#endif
    };

    /// Build a parser object.
    umlrParser (umlrDriver& driver_yyarg);
    virtual ~umlrParser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    // Implementation of make_symbol for each symbol type.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_END (location_type l)
      {
        return symbol_type (token::TOK_END, std::move (l));
      }
#else
      static
      symbol_type
      make_END (const location_type& l)
      {
        return symbol_type (token::TOK_END, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INHERIT (std::string v, location_type l)
      {
        return symbol_type (token::TOK_INHERIT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INHERIT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_INHERIT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN (std::string v, location_type l)
      {
        return symbol_type (token::TOK_ASSIGN, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_ASSIGN, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGNG (std::string v, location_type l)
      {
        return symbol_type (token::TOK_ASSIGNG, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGNG (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_ASSIGNG, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LPAR (std::string v, location_type l)
      {
        return symbol_type (token::TOK_LPAR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LPAR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_LPAR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RPAR (std::string v, location_type l)
      {
        return symbol_type (token::TOK_RPAR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_RPAR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_RPAR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LBRA (std::string v, location_type l)
      {
        return symbol_type (token::TOK_LBRA, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LBRA (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_LBRA, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RBRA (std::string v, location_type l)
      {
        return symbol_type (token::TOK_RBRA, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_RBRA (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_RBRA, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LIDX (std::string v, location_type l)
      {
        return symbol_type (token::TOK_LIDX, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LIDX (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_LIDX, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RIDX (std::string v, location_type l)
      {
        return symbol_type (token::TOK_RIDX, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_RIDX (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_RIDX, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOLLAR (std::string v, location_type l)
      {
        return symbol_type (token::TOK_DOLLAR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DOLLAR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_DOLLAR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA (std::string v, location_type l)
      {
        return symbol_type (token::TOK_COMMA, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_COMMA (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_COMMA, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMMI (std::string v, location_type l)
      {
        return symbol_type (token::TOK_SEMMI, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SEMMI (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_SEMMI, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FUNCTION (std::string v, location_type l)
      {
        return symbol_type (token::TOK_FUNCTION, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FUNCTION (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_FUNCTION, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_R6CLASS (std::string v, location_type l)
      {
        return symbol_type (token::TOK_R6CLASS, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_R6CLASS (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_R6CLASS, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_R6CLASS_PKG (std::string v, location_type l)
      {
        return symbol_type (token::TOK_R6CLASS_PKG, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_R6CLASS_PKG (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_R6CLASS_PKG, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ACTIVE (std::string v, location_type l)
      {
        return symbol_type (token::TOK_ACTIVE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ACTIVE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_ACTIVE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IF (std::string v, location_type l)
      {
        return symbol_type (token::TOK_IF, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_IF (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_IF, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IFELSE (std::string v, location_type l)
      {
        return symbol_type (token::TOK_IFELSE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_IFELSE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_IFELSE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE (std::string v, location_type l)
      {
        return symbol_type (token::TOK_ELSE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ELSE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_ELSE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LIBRARY (std::string v, location_type l)
      {
        return symbol_type (token::TOK_LIBRARY, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LIBRARY (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_LIBRARY, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PUBLIC (std::string v, location_type l)
      {
        return symbol_type (token::TOK_PUBLIC, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PUBLIC (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_PUBLIC, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PRIVATE (std::string v, location_type l)
      {
        return symbol_type (token::TOK_PRIVATE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PRIVATE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_PRIVATE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LIST (std::string v, location_type l)
      {
        return symbol_type (token::TOK_LIST, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LIST (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_LIST, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INIT (std::string v, location_type l)
      {
        return symbol_type (token::TOK_INIT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INIT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_INIT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEST (std::string v, location_type l)
      {
        return symbol_type (token::TOK_DEST, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DEST (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_DEST, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TRUE (std::string v, location_type l)
      {
        return symbol_type (token::TOK_TRUE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TRUE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_TRUE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FALSE (std::string v, location_type l)
      {
        return symbol_type (token::TOK_FALSE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FALSE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_FALSE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NULL (std::string v, location_type l)
      {
        return symbol_type (token::TOK_NULL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NULL (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_NULL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NA (std::string v, location_type l)
      {
        return symbol_type (token::TOK_NA, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NA (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_NA, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELLIPSIS (std::string v, location_type l)
      {
        return symbol_type (token::TOK_ELLIPSIS, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ELLIPSIS (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_ELLIPSIS, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQU (std::string v, location_type l)
      {
        return symbol_type (token::TOK_EQU, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_EQU (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_EQU, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NEQ (std::string v, location_type l)
      {
        return symbol_type (token::TOK_NEQ, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NEQ (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_NEQ, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GTE (std::string v, location_type l)
      {
        return symbol_type (token::TOK_GTE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_GTE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_GTE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LTE (std::string v, location_type l)
      {
        return symbol_type (token::TOK_LTE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LTE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_LTE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GT (std::string v, location_type l)
      {
        return symbol_type (token::TOK_GT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_GT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_GT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LT (std::string v, location_type l)
      {
        return symbol_type (token::TOK_LT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_LT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AND (std::string v, location_type l)
      {
        return symbol_type (token::TOK_AND, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_AND (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_AND, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OR (std::string v, location_type l)
      {
        return symbol_type (token::TOK_OR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_OR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_OR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AND1 (std::string v, location_type l)
      {
        return symbol_type (token::TOK_AND1, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_AND1 (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_AND1, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OR1 (std::string v, location_type l)
      {
        return symbol_type (token::TOK_OR1, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_OR1 (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_OR1, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NEG (std::string v, location_type l)
      {
        return symbol_type (token::TOK_NEG, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NEG (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_NEG, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PLUS (std::string v, location_type l)
      {
        return symbol_type (token::TOK_PLUS, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PLUS (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_PLUS, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS (std::string v, location_type l)
      {
        return symbol_type (token::TOK_MINUS, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MINUS (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_MINUS, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MULT (std::string v, location_type l)
      {
        return symbol_type (token::TOK_MULT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MULT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_MULT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIV (std::string v, location_type l)
      {
        return symbol_type (token::TOK_DIV, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DIV (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_DIV, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMICOLON (std::string v, location_type l)
      {
        return symbol_type (token::TOK_SEMICOLON, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SEMICOLON (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_SEMICOLON, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ID (std::string v, location_type l)
      {
        return symbol_type (token::TOK_ID, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ID (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_ID, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ID_PKG (std::string v, location_type l)
      {
        return symbol_type (token::TOK_ID_PKG, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ID_PKG (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_ID_PKG, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ID_INTERNAL (std::string v, location_type l)
      {
        return symbol_type (token::TOK_ID_INTERNAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ID_INTERNAL (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_ID_INTERNAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING (std::string v, location_type l)
      {
        return symbol_type (token::TOK_STRING, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_STRING (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_STRING, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NUMBER (std::string v, location_type l)
      {
        return symbol_type (token::TOK_NUMBER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NUMBER (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_NUMBER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ALGO (std::string v, location_type l)
      {
        return symbol_type (token::TOK_ALGO, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ALGO (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_ALGO, v, l);
      }
#endif


  private:
    /// This class is not copyable.
    umlrParser (const umlrParser&);
    umlrParser& operator= (const umlrParser&);

    /// Stored state numbers (used for stacks).
    typedef signed char state_type;

    /// Generate an error message.
    /// \param yystate   the state where the error occurred.
    /// \param yyla      the lookahead token.
    virtual std::string yysyntax_error_ (state_type yystate,
                                         const symbol_type& yyla) const;

    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const signed char yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token number \a t to a symbol number.
    /// In theory \a t should be a token_type, but character literals
    /// are valid, yet not members of the token_type enum.
    static token_number_type yytranslate_ (int t);

    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const signed char yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const signed char yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const signed char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const signed char yytable_[];

    static const signed char yycheck_[];

    // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
    // symbol of state STATE-NUM.
    static const signed char yystos_[];

    // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
    static const signed char yyr1_[];

    // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
    static const signed char yyr2_[];


    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *n);


    /// For a symbol, its name in clear.
    static const char* const yytname_[];
#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r);
    /// Print the state stack on the debug stream.
    virtual void yystack_print_ ();

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol type, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol type as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol type from \a that.
      void move (by_state& that);

      /// The (internal) type number (corresponding to \a state).
      /// \a empty_symbol when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::reverse_iterator iterator;
      typedef typename S::const_reverse_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200)
        : seq_ (n)
      {}

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      std::ptrdiff_t
      ssize () const YY_NOEXCEPT
      {
        return std::ptrdiff_t (size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.rbegin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.rend ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range)
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
      stack (const stack&);
      stack& operator= (const stack&);
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1);

    /// Some specific tokens.
    static const token_number_type yy_error_token_ = 1;
    static const token_number_type yy_undef_token_ = 2;

    /// Constants.
    enum
    {
      yyeof_ = 0,
      yylast_ = 71,     ///< Last index in yytable_.
      yynnts_ = 36,  ///< Number of nonterminal symbols.
      yyfinal_ = 12, ///< Termination state number.
      yyntokens_ = 59  ///< Number of tokens.
    };


    // User arguments.
    umlrDriver& driver;
  };

  inline
  umlrParser::token_number_type
  umlrParser::yytranslate_ (int t)
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const token_number_type
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
    };
    const int user_token_number_max_ = 313;

    if (t <= 0)
      return yyeof_;
    else if (t <= user_token_number_max_)
      return translate_table[t];
    else
      return yy_undef_token_;
  }

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  umlrParser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value ()
    , location (std::move (that.location))
  {
    switch (this->type_get ())
    {
      case 63: // function_definition
        value.move< rcomp::Function * > (std::move (that.value));
        break;

      case 67: // parameter
      case 68: // parameter_name
        value.move< rcomp::Parameter * > (std::move (that.value));
        break;

      case 64: // function_parameters
      case 65: // parameters_decl
      case 66: // parameters_list
        value.move< std::list<Parameter *> > (std::move (that.value));
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
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

  }
#endif

  template <typename Base>
  umlrParser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->type_get ())
    {
      case 63: // function_definition
        value.copy< rcomp::Function * > (YY_MOVE (that.value));
        break;

      case 67: // parameter
      case 68: // parameter_name
        value.copy< rcomp::Parameter * > (YY_MOVE (that.value));
        break;

      case 64: // function_parameters
      case 65: // parameters_decl
      case 66: // parameters_list
        value.copy< std::list<Parameter *> > (YY_MOVE (that.value));
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
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }



  template <typename Base>
  bool
  umlrParser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  umlrParser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->type_get ())
    {
      case 63: // function_definition
        value.move< rcomp::Function * > (YY_MOVE (s.value));
        break;

      case 67: // parameter
      case 68: // parameter_name
        value.move< rcomp::Parameter * > (YY_MOVE (s.value));
        break;

      case 64: // function_parameters
      case 65: // parameters_decl
      case 66: // parameters_list
        value.move< std::list<Parameter *> > (YY_MOVE (s.value));
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
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_type.
  inline
  umlrParser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  umlrParser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  inline
  umlrParser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  inline
  umlrParser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  umlrParser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  umlrParser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  umlrParser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }

} // yy





#endif // !YY_YY_UMLRPARSER_HPP_INCLUDED
