#ifndef PERSON_H_
#define PERSON_H_

#include <string>

using namespace std;

class Person {
  string name;
  int age;
  string phone;

public:
  Person(string name = "", int age = 0, string phone = "")
      : name(name), age(age), phone(phone) {}
  virtual ~Person();

  virtual string getName() const;
  virtual void setName(string name);

  virtual int getAge() const;
  virtual void setAge(int age);

  virtual string getPhone() const;
  virtual void setPhone(string phone);

  virtual void printInfo() const = 0;
};

#endif
