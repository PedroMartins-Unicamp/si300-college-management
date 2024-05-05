#include "../../../include/model/entities/TeacherService.hpp"

#include <algorithm>
#include <iostream>

int TeacherService::addSubject(TeacherDTO &teacher,
                               const std::shared_ptr<Subject> &subject) {
  int code = subject->getCode();

  auto &subjects = teacher.getSubjects();

  auto it = std::find_if(subjects.begin(), subjects.end(),
                         [code](const std::shared_ptr<Subject> &ptr) {
                           return ptr->getCode() == code;
                         });

  if (it != subjects.end()) {
    std::cout << "Subject" << subject->getName()
              << " already taught by teacher " << teacher.getName() << "."
              << std::endl;
    return 1;
  }

  teacher.mPrivate_addSubject(subject);
  return 0; // Successfully added subject
}

int TeacherService::removeSubject(TeacherDTO &teacher, int code) {
  auto &subjects = teacher.getSubjects();

  int i = 0;
  for (auto it = subjects.begin(); it != subjects.end(); it++, i++)
    if ((*it)->getCode() == code) {
      teacher.mPrivate_removeSubject(i);
      return 0; // Successfully removed subject
    }

  std::cout << "Subject code" << code << " not taught by teacher "
            << teacher.getName() << "." << std::endl;
  return 1; // Could not remove subject.
}
