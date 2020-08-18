/*
 * Definition.cpp
 *
 *  Created on: 17 ago. 2020
 *      Author: Javier
 */

#include <iostream>

#include <string>
#include <list>
#include "umlr.h"

namespace rcomp {

Definition::Definition() {}
Definition::Definition(std::string name) {
	this->name = name;
}

Definition::~Definition() {}
Definition *Definition::addParameters(Parameter *pparms) {
	parms.push_back(pparms);
	return this;
}

Definition *Definition::addParameters(std::list<Parameter *> pparms) {
	parms.insert(parms.end(), pparms.begin(), pparms.end());
	return this;
}
void Definition::setName(string name) {
	this->name = name;
}

} /* namespace rcomp */
