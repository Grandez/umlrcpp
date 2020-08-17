/*
 * Unit.h
 *
 *  Created on: 16 ago. 2020
 *      Author: Javier
 */

#ifndef UNIT_H_
#define UNIT_H_

#include <string>
#include <map>
#include <vector>
#include <set>

#include "umlr.h"
#include "R6.h"

namespace rcomp {
using namespace std;

class Unit {
  public:
	  Unit();
	  virtual ~Unit();
	  string name;
	  map<std::string,int> chars;
	  unsigned int tokens = 0;
	  set<string> libraries; // Imports
	  vector<string> refs;       // Packages referenced as pkg::method
	  void add (void* object);
	  void addLibrary(string library);
  private:
	  map<string, R6&> r6;
	  map<string, Function&> functions;
	  template<typename Base, typename T>
	  inline bool instanceof(const T*) { return is_base_of<Base, T>::value; }
	  int    lines;
	    std::set<std::string> setOfNumbers;

};

} /* namespace rcomp */

#endif /* UNIT_H_ */
