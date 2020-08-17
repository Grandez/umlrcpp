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

#include "Unit.h"
#include "umlr.h"

using namespace std;
namespace rcomp {

   Unit::Unit() {
	   this->tokens = 0;
   }

   Unit::~Unit() {}

   void Unit::addLibrary(string library) {
	   libraries.insert(library);
   }
   void Unit::add(Definition *object) {

	   pair<string,Definition *> p = pair<string,Definition *>();
	   pair<string,R6 *>(object->name, (R6 *) object);
	   p.first = object->name;
	   p.second = object;

	   if (instanceof<R6>(object))       r6.insert(std::make_pair(object->name, (R6 *)object));
	   if (instanceof<Function>(object)) functions.insert(std::make_pair(object->name, (Function *)object));
   }
} /* namespace rcomp */
