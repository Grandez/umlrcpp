/*
 * Definition.h
 *
 *  Created on: 17 ago. 2020
 *      Author: Javier
 */

#ifndef DEFINITION_HPP_
#define DEFINITION_HPP_

#include <string>
#include <list>

#include "umlr.h"
#include "Parameter.hpp"

using namespace std;

namespace rcomp {

class Definition {
public:
	Definition();
	Definition(string name);
	virtual ~Definition();
	string name;

	Definition *addParameters(rcomp::Parameter *pparms);
	Definition *addParameters(std::list<rcomp::Parameter *> pparms);
	void setName(string name);
protected:
	std::list<rcomp::Parameter *> parms;
};

} /* namespace rcomp */

#endif /* DEFINITION_H_ */
