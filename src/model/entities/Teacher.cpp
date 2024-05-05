#include "../../../include/model/entities/Teacher.hpp"

#include <memory>
#include <string>

TeacherDTO *Teacher::getDTO() const { return this->dto.get(); }

void Teacher::setName(std::string name) { this->dto->setName(name); }

void Teacher::setAge(int age) { this->dto->setAge(age); }

void Teacher::setPhone(std::string phone) { this->dto->setPhone(phone); }

void Teacher::setSalary(double salary) { this->dto->setSalary(salary); }
