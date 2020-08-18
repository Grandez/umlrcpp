#include "Unit.hpp"

/*
 * Unit.cpp
 *
 *  Created on: 16 ago. 2020
 *      Author: Javier
 */

#include <iostream>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include "Unit.hpp"
#include "umlr.h"

using namespace std;
namespace rcomp {

   Unit::Unit() {
	   this->tokens = 0;
   }

   Unit::~Unit() {}

   Unit *Unit::addLibrary(string library) {
	   libraries.insert(library);
	   return this;
   }
   Unit *Unit::raro(string txt) {
	   raros.insert(txt);
	   return this;
   }

   Unit *Unit::add(Definition *object) {
	   if (dynamic_cast<R6*>(object))       r6.push_back((R6 *) object);
	   if (dynamic_cast<Function*>(object)) functions.push_back((Function *) object);
	   return this;
   }
   vector<string> Unit::getFunctionsName() {
	   std::vector<string> names (functions.size());
	   for (auto const& i : functions) names.push_back(i->name);
	   return names;
   }
   list<Function *> Unit::getFunctions() { return functions; }


} /* namespace rcomp */
