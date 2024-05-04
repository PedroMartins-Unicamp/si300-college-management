/*
 * College.h
 *
 *  Created on: Apr. 14, 2024
 *      Author: juan
 */

#ifndef INCLUDE_CONTROLLER_COLLEGE_H_
#define INCLUDE_CONTROLLER_COLLEGE_H_

#include <vector>
#include <memory>

#include "Person.hpp"

using namespace std;

class College final {
	static vector<shared_ptr<Person>> students;
	static vector<shared_ptr<Person>> teachers;
public:
	static vector<shared_ptr<Person> > & getStudents();
	static void setStudents(vector<shared_ptr<Person> > &students);
};

#endif /* INCLUDE_CONTROLLER_COLLEGE_H_ */
