#include "../../../include/model/dao/TeacherDAO.hpp"

#include <memory>
#include <stdexcept>

void TeacherDAO::create(std::shared_ptr<TeacherDTO> teacherDTO) {
  this->items.push_back(teacherDTO);
}

std::shared_ptr<TeacherDTO> TeacherDAO::read(int index) const {
  if (index >= 0 && index < items.size()) {
    return items[index];
  } else {
    throw std::runtime_error(
        std::string("ERROR: TeacherDAO Read target index out of range"));
  }
}
void TeacherDAO::remove(int index) {
  if (index >= 0 && index < items.size()) {
    items.erase(items.begin() + index);
  } else {
    throw std::runtime_error(
        std::string("ERROR: TeacherDAO Remove target index out of range"));
  }
}
