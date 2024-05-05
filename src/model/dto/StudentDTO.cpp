#include "../../../include/model/dto/StudentDTO.hpp"

std::string StudentDTO::getCourse() const { return this->course; }

void StudentDTO::setCourse(std::string course) { this->course = course; }

long StudentDTO::getRA() const { return this->ra; }

void StudentDTO::printInfo() const {
  // TODO
}
