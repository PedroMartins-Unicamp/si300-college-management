#include "../../../include/model/entities/College.hpp"
#include "../../../include/model/entities/Person.hpp"

//vector<shared_ptr<Person>> College::students;

vector<shared_ptr<Person>> College::students;
vector<shared_ptr<Person>> College::teachers;

vector<shared_ptr<Person> > & College::getStudents() {
	return students;
}

void College::setStudents(vector<shared_ptr<Person> > &_students) {
	students = _students;
}



