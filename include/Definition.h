/*
 * Definition.h
 *
 *  Created on: 17 ago. 2020
 *      Author: Javier
 */

#ifndef DEFINITION_H_
#define DEFINITION_H_

#include <string>
using namespace std;

namespace rcomp {

class Definition {
public:
	Definition();
	Definition(string name);
	virtual ~Definition();
	std::string name = NULL;
};

} /* namespace rcomp */

#endif /* DEFINITION_H_ */
