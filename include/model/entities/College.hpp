#ifndef INCLUDE_CONTROLLER_COLLEGE_H_
#define INCLUDE_CONTROLLER_COLLEGE_H_

#include <memory>
#include <vector>

#include "Person.hpp"

class College final {
  static std::vector<std::shared_ptr<Person>> students;
  static std::vector<std::shared_ptr<Person>> teachers;

public:
  static std::vector<std::shared_ptr<Person>> &getStudents();
  static void setStudents(std::vector<std::shared_ptr<Person>> &students);
};

#endif
