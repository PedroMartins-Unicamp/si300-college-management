#include "../../../include/model/dto/TeacherDTO.hpp"

#include <memory>
#include <vector>

int TeacherDTO::getId() const { return this->id; }

double TeacherDTO::getSalary() const { return this->salary; }

void TeacherDTO::setSalary(double salary) { this->salary = salary; }

void TeacherDTO::mPrivate_addSubject(const std::shared_ptr<Subject> &subject) {
  this->subjects.push_back(subject);
}

void TeacherDTO::mPrivate_removeSubject(int index) {
  auto &subjects = this->subjects;

  int i = 0;
  for (auto it = subjects.begin(); it != subjects.end(); it++, i++) {
    if (i == index) {
      this->subjects.erase(it);
    }
  }
}

const std::vector<std::shared_ptr<Subject>> TeacherDTO::getSubjects() const {
  return this->subjects;
}
