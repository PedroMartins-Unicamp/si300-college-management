#ifndef TEACHER_DTO_H_
#define TEACHER_DTO_H_

#include "../entities/Person.hpp"
#include "../entities/Subject.hpp"

#include <memory>
#include <vector>

using namespace std;

class TeacherDTO : Person {
private:
  int id;
  double salary;
  vector<shared_ptr<Subject>> subjects;

public:
  TeacherDTO(string name = "", int age = 0, string phone = "", int id = 0,
             double salary = 0)
      : Person(name, age, phone), id(id), salary(salary){};

  virtual ~TeacherDTO() = default;

  string getName() const override;
  void setName(string name) override;

  int getAge() const override;
  void setAge(int age) override;

  string getPhone() const override;
  void setPhone(string phone) override;

  int getId() const;

  double getSalary() const;
  void setSalary(double salary);

  void printInfo() const override;
};

#endif
