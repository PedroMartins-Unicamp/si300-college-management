/*
 * Person.h
 *
 *  Created on: Apr. 14, 2024
 *      Author: juan
 */

#ifndef INCLUDE_PERSON_H_
#define INCLUDE_PERSON_H_

#include <string>

using namespace std;

class Person {
	string name;
	int age;
	string phone;
public:
	Person(string _name="", int _age=0, string _phone ="" ):name(_name), age(_age), phone(_phone){}
	virtual ~Person();
};

#endif /* INCLUDE_PERSON_H_ */
