/*
 * Controller.h
 *
 *  Created on: 8 de abr. de 2024
 *      Author: juan
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <string>
#include <vector>
#include <memory>

using namespace std;

#include "../model/entities/College.hpp"

class Controller final
{
private:
	void actionStudents();
	void actionTeachers();
	void actionSubjects();
	void actionReports();
	void actionHelp(void);
	void actionAbout(void);
	void launchActions(string title, vector<string> menuItens, vector<void (Controller::*)()> functions);
	void actionInsertStudent();
	void actionToDo(void);
public:
	Controller();
	virtual ~Controller();
	void start();

};


#endif /* CONTROLLER_H_ */
