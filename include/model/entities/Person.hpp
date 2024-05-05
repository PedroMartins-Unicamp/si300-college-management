#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person {
protected:
  std::string name;
  int age;
  std::string phone;

public:
  Person(std::string name = "", int age = 0, std::string phone = "")
      : name(name), age(age), phone(phone) {}
  virtual ~Person();

  virtual std::string getName() const;
  virtual void setName(std::string name);

  virtual int getAge() const;
  virtual void setAge(int age);

  virtual std::string getPhone() const;
  virtual void setPhone(std::string phone);

  virtual void printInfo() const = 0;
};

#endif
