#ifndef STUDENT_H_
#define STUDENT_H_

#include "../dto/StudentDTO.hpp"

#include <memory>
#include <string>

using namespace std;

class Student {
private:
  std::unique_ptr<StudentDTO> dto;

public:
  Student(std::unique_ptr<StudentDTO> studentDTO)
      : dto(std::move(studentDTO)){};

  virtual ~Student() = default;

  StudentDTO *getDTO() const;

  void setName(string name);
  void setAge(int age);
  void setPhone(string phone);
  void setCourse(string course);
  void setRA(long ra);
};

#endif
