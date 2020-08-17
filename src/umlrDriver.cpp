#include <iostream>

#include "umlrDriver.hh"
#include "umlrParser.hpp"

umlrDriver::umlrDriver () : trace_scanning (false), trace_parsing (false) {
  variables["one"] = 1;
  variables["two"] = 2;
}

umlrDriver::~umlrDriver () {
}

int umlrDriver::parse (const std::string &f) {
	std::cout << "Fichero: " << f << std::endl << std::flush;

  file = f;
  unit.name = f;
  scan_begin ();
  yy::umlrParser parser (*this);
  std::cout << "Parser creado para " << file << std::endl << std::flush;
  parser.set_debug_level (trace_parsing);
  int res = parser.parse ();
  scan_end ();
  cout << "PARSER ACABADO CON " << res << endl;

  return res;
}

void umlrDriver::entra(string txt) {
	cout << "*************************** ENTRA EN " << txt << " **************" << endl;
}
void umlrDriver::sale(string txt) {
	cout << "*************************** SALE DE " << txt << " **************" << endl;
}
void umlrDriver::error (const yy::location& l, const std::string& m) {
  std::cerr << l << ": " << m << std::endl;
}

void umlrDriver::error (const std::string& m) {
  std::cerr << m << std::endl;
}
