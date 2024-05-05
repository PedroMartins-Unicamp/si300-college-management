#ifndef TEACHER_SERVICE_H_
#define TEACHER_SERVICE_H_

#include "../dto/TeacherDTO.hpp"

class TeacherService {
public:
  static int addSubject(TeacherDTO &teacher,
                        const std::shared_ptr<Subject> &subject);
  static int removeSubject(TeacherDTO &teacher, int code);
};

#endif
