/*
 * Function.h
 *
 *  Created on: 16 ago. 2020
 *      Author: Javier
 */

#ifndef FUNCTION_H_
#define FUNCTION_H_

#include <string>
#include "Definition.h"

using namespace std;

namespace rcomp {

class Function : Definition {
public:
	Function();
	virtual ~Function();
private:
	string name;
	string signature;
};

} /* namespace rcomp */

#endif /* FUNCTION_H_ */
