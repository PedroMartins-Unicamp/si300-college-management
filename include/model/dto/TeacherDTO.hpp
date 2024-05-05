#ifndef TEACHER_DTO_H_
#define TEACHER_DTO_H_

#include "../entities/Person.hpp"
#include "../entities/Subject.hpp"

#include <memory>
#include <vector>

class TeacherDTO : Person {
private:
  int id;
  double salary;
  std::vector<std::shared_ptr<Subject>> subjects;

public:
  TeacherDTO(std::string name = "", int age = 0, std::string phone = "",
             int id = 0, double salary = 0)
      : Person(name, age, phone), id(id), salary(salary){};

  virtual ~TeacherDTO() = default;

  std::string getName() const override;
  void setName(std::string name) override;

  int getAge() const override;
  void setAge(int age) override;

  std::string getPhone() const override;
  void setPhone(std::string phone) override;

  int getId() const;

  double getSalary() const;
  void setSalary(double salary);

  void printInfo() const override;
};

#endif
