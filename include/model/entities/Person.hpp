#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person {
  std::string name;
  int age;
  std::string phone;

public:
  Person(std::string name = "", int age = 0, std::string phone = "")
      : name(name), age(age), phone(phone) {}
  virtual ~Person();

  virtual std::string getName() const = 0;
  virtual void setName(std::string name) = 0;

  virtual int getAge() const = 0;
  virtual void setAge(int age) = 0;

  virtual std::string getPhone() const = 0;
  virtual void setPhone(std::string phone) = 0;

  virtual void printInfo() const = 0;
};

#endif
