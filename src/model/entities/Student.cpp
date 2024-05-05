#include "../../../include/model/entities/Student.hpp"

#include <string>

StudentDTO *Student::getDTO() const { return this->dto.get(); }

void Student::setName(std::string name) { this->dto->setName(name); }

void Student::setAge(int age) { this->dto->setAge(age); }

void Student::setPhone(std::string phone) { this->dto->setPhone(phone); }

void Student::setCourse(std::string course) { this->dto->setCourse(course); }
