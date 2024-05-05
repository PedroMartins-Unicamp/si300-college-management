#ifndef TEACHER_H_
#define TEACHER_H_

#include "../dto/TeacherDTO.hpp"

#include <memory>
#include <string>

using namespace std;

class Teacher {
private:
  std::unique_ptr<TeacherDTO> dto;

public:
  Teacher(std::unique_ptr<TeacherDTO> teacherDTO)
      : dto(std::move(teacherDTO)){};
  virtual ~Teacher() = default;

  TeacherDTO *getDTO() const;

  void setName(string name);
  void setAge(int Age);
  void setPhone(string phone);
  void setSalary(double salary);
  void addSubject(Subject subject);
};

#endif
