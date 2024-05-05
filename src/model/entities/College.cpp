#include "../../../include/model/entities/College.hpp"
#include "../../../include/model/entities/Person.hpp"

#include <memory>
#include <vector>

std::vector<std::shared_ptr<Person>> College::students;
std::vector<std::shared_ptr<Person>> College::teachers;

std::vector<std::shared_ptr<Person> > & College::getStudents() {
	return students;
}

void College::setStudents(std::vector<std::shared_ptr<Person> > &_students) {
	students = _students;
}



