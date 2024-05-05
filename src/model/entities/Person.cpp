#include "../../../include/model/entities/Person.hpp"

#include <string>

std::string Person::getName() const { return this->name; }

void Person::setName(std::string name) { this->name = name; }

int Person::getAge() const { return this->age; }

void Person::setAge(int age) { this->age = age; }

std::string Person::getPhone() const { return this->phone; }

void Person::setPhone(std::string phone) { this->phone = phone; }
