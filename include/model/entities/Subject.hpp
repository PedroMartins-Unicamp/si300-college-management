#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <string>

class Subject {
private:
  int code;
  std::string name;
  std::string syllabus;

public:
  Subject(int code = 0, std::string name = "unknown",
          std::string syllabus = "unspecified")
      : code(code), name(name), syllabus(syllabus){};

  virtual ~Subject() = default;

  int getCode() const;

  std::string getName() const;
  void setName(std::string name);

  std::string getSyllabus() const;
  void setSyllabus(std::string syllabus);
};

#endif
