/*
 * Function.h
 *
 *  Created on: 16 ago. 2020
 *      Author: Javier
 */

#ifndef FUNCTION_HPP_
#define FUNCTION_HPP_

#include <string>
#include <vector>
#include "umlr.h"

using namespace std;

namespace rcomp {

class Function : public Definition {
public:
	Function();
	virtual ~Function();
	vector<string> getSignature(bool full = false);
};

} /* namespace rcomp */

#endif /* FUNCTION_HPP_ */
