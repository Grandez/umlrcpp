/*
 * R6.h
 *
 *  Created on: 17 ago. 2020
 *      Author: Javier
 */

#ifndef R6_H_
#define R6_H_

#include <string>

namespace rcomp {

using namespace std;

class R6 {
public:
	R6();
	virtual ~R6();
	string name;
	string generator;
	string parent;

};

} /* namespace rcomp */

#endif /* R6_H_ */
