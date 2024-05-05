#ifndef STUDENT_DTO_H_
#define STUDENT_DTO_H_

#include "../entities/Person.hpp"

#include <string>

using namespace std;

class StudentDTO : Person {
private:
  string course;
  long ra;

public:
  StudentDTO(string name = "", int age = 0, string phone = "",
             string course = "", long ra = 000000)
      : Person::Person(name, age, phone), course(course), ra(ra){};

  virtual ~StudentDTO();

  string getName() const override;
  void setName(string name) override;

  int getAge() const override;
  void setAge(int age) override;

  string getPhone() const override;
  void setPhone(string phone) override;

  string getCourse() const;
  void setCourse(string course);

  long getRA() const;

  void printInfo() const override;
};

#endif
