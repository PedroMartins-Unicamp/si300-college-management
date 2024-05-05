#include "../../../include/model/entities/Subject.hpp"

#include <string>

int Subject::getCode() const { return this->code; }

std::string Subject::getName() const { return this->name; }

void Subject::setName(std::string name) { this->name = name; }

std::string Subject::getSyllabus() const { return this->syllabus; }

void Subject::setSyllabus(std::string syllabus) { this->syllabus = syllabus; }
