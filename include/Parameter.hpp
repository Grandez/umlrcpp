/*
 * Parameter.hpp
 *
 *  Created on: 18 ago. 2020
 *      Author: Javier
 */

#ifndef PARAMETER_HPP_
#define PARAMETER_HPP_

#include <string>
using namespace std;

namespace rcomp {

class Parameter {
public:
	Parameter(string value);
	virtual ~Parameter();

	bool       hasName();
	bool       hasValue();
	string     getName();
	string     getValue();
	string     getFull();
	Parameter *addValue(string value);
private:
	std::string name;
	std::string value;
};

} /* namespace rcomp */

#endif /* PARAMETER_HPP_ */
