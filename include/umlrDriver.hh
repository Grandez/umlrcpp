#ifndef umlrDriver_HH
#define umlrDriver_HH

#include <string>
#include <map>
#include "umlrParser.hpp"
#include "umlr.h"

# define YY_DECL yy::umlrParser::symbol_type yylex (umlrDriver& driver)
YY_DECL;

// Conducting the whole scanning and parsing of Calc++.
class umlrDriver {
public:
  umlrDriver ();
  virtual ~umlrDriver ();
  rcomp::Unit unit;

  std::map<std::string, int> variables;

  int result;
  // Handling the scanner.
  void scan_begin ();
  void scan_end ();
  bool trace_scanning;
  // Run the parser on file F.
  // Return 0 on success.
  int parse (const std::string& f);
  // The name of the file being parsed.
  // Used later to pass the file name to the location tracker.
  std::string file;
  // Whether parser traces should be generated.
  bool trace_parsing;
  // Error handling.
  void error (const yy::location& l, const std::string& m);
  void error (const std::string& m);
};
#endif // ! umlrDriver_HH
