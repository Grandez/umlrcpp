/*
 * Unit.cpp
 *
 *  Created on: 16 ago. 2020
 *      Author: Javier
 */

#include <iostream>
#include <set>
#include <map>
#include "umlr.h"
#include "R6.h"
using namespace std;
namespace rcomp {

Unit::Unit() {
	// TODO Auto-generated constructor stub
	this->tokens = 0;

}

Unit::~Unit() {
	// TODO Auto-generated destructor stub
}

void Unit::addLibrary(string library) {
	libraries.insert(library);
}
void Unit::add(void *object) {

	if (instanceof<R6>(object)) r6.insert(std::pair<std::string, R6&>(((R6 *)object)->name, object));

}
/**
	map<string, int>::iterator it ;
	it = chars.find(txt);
	int act = it == chars.end() ? -1 : chars[txt];
	chars[txt] = ++act;
*/
}
} /* namespace rcomp */
