#ifndef TEACHER_DAO_H_
#define TEACHER_DAO_H_

#include "../dto/TeacherDTO.hpp"
#include "AbstractDAO.hpp"

class TeacherDAO : AbstractDAO<TeacherDTO> {
public:
  void create(std::shared_ptr<TeacherDTO> item) override;
  std::shared_ptr<TeacherDTO> read(int index) const override;
  void remove(int index) override;
};

#endif
