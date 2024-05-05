#ifndef STUDENT_H_
#define STUDENT_H_

#include "../dto/StudentDTO.hpp"

#include <memory>
#include <string>

class Student {
private:
  std::unique_ptr<StudentDTO> dto;

public:
  Student(std::unique_ptr<StudentDTO> studentDTO)
      : dto(std::move(studentDTO)){};

  virtual ~Student() = default;

  StudentDTO *getDTO() const;

  void setName(std::string name);
  void setAge(int age);
  void setPhone(std::string phone);
  void setCourse(std::string course);
};

#endif
