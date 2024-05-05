#include "../../../include/model/dao/StudentDAO.hpp"

#include <memory>
#include <stdexcept>

void StudentDAO::create(std::shared_ptr<StudentDTO> studentDTO) {
  this->items.push_back(studentDTO);
}

std::shared_ptr<StudentDTO> StudentDAO::read(int index) const {
  if (index >= 0 && index < items.size()) {
    return items[index];
  } else {
    throw std::runtime_error(
        std::string("ERROR: StudentDAO Read target index out of range"));
  }
}
void StudentDAO::remove(int index) {
  if (index >= 0 && index < items.size()) {
    items.erase(items.begin() + index);
  } else {
    throw std::runtime_error(
        std::string("ERROR: StudentDAO Remove target index out of range"));
  }
}
