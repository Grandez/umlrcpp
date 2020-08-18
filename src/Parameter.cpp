/*
 * Parameter.cpp
 *
 *  Created on: 18 ago. 2020
 *      Author: Javier
 */
#include <iostream>
#include <string>
#include "Parameter.hpp"

namespace rcomp {
using namespace std;

Parameter::Parameter(string name) { this->name = name;}

Parameter::~Parameter() {}

bool       Parameter::hasName()              { return !name.empty();       }
bool       Parameter::hasValue()             { return !value.empty();      }
string     Parameter::getName()              { return  name;               }
string     Parameter::getValue()             { return  value;              }
string     Parameter::getFull()              { return  name + "=" + value; }
Parameter *Parameter::addValue(string value) {
	this->value = value;
	return this; }
} /* namespace rcomp */
