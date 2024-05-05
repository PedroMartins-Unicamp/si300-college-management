#ifndef STUDENT_DTO_H_
#define STUDENT_DTO_H_

#include "../entities/Person.hpp"

#include <string>

class StudentDTO : Person {
private:
  std::string course;
  long ra;

public:
  StudentDTO(std::string name = "", int age = 0, std::string phone = "",
             std::string course = "", long ra = 0)
      : Person(name, age, phone), course(course), ra(ra){};

  virtual ~StudentDTO();

  std::string getName() const override;
  void setName(std::string name) override;

  int getAge() const override;
  void setAge(int age) override;

  std::string getPhone() const override;
  void setPhone(std::string phone) override;

  std::string getCourse() const;
  void setCourse(std::string course);

  long getRA() const;

  void printInfo() const override;
};

#endif
