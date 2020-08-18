/*
 * Unit.h
 *
 *  Created on: 16 ago. 2020
 *      Author: Javier
 */

#ifndef UNIT_HPP_
#define UNIT_HPP_

#include <string>
#include <map>
#include <vector>
#include <set>
#include <list>

#include "umlr.h"

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
	  set<string> raros; // Imports
	  vector<string> refs;       // Packages referenced as pkg::method
	  Unit *add(Definition *object);
	  Unit *addLibrary(string library);
	  Unit *raro(string txt);
	  vector<string>     getFunctionsName();
	  list<Function *> getFunctions();
  private:
	  list<R6 *> r6;
	  list<Function *> functions;
//	  template<typename Base, typename T>
//	  bool instanceof(const T*) {
//		  cout << "instanceof " <<
//		  return is_base_of<Base, T>::value;
//	  }
	  int    lines = 0;
};

} /* namespace rcomp */

#endif /* UNIT_H_ */
