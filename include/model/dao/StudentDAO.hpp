#ifndef STUDENT_DAO_H_
#define STUDENT_DAO_H_

#include "../dto/StudentDTO.hpp"
#include "AbstractDAO.hpp"

class StudentDAO : AbstractDAO<StudentDTO> {
public:
  void create(std::shared_ptr<StudentDTO> item) override;
  std::shared_ptr<StudentDTO> read(int index) const override;
  void remove(int index) override;
};

#endif
