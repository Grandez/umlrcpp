/*
 * Function.cpp
 *
 *  Created on: 16 ago. 2020
 *      Author: Javier
 */

#include <vector>

#include "umlr.h"

using namespace std;

namespace rcomp {

Function::Function() {}

Function::~Function() {}

vector<string> Function::getSignature(bool full) {
   std::vector<string> names;

   names.reserve(parms.size());
   for (auto const& x : parms) {
	   string n = x->getName();
	   if (full && x->hasValue()) n = n + " = " + x->getValue();
	   names.push_back(n);
   }
   return names;
}

} /* namespace rcomp */
