/*
 * Controller.cpp
 *
 *  Created on: 8 de abr. de 2024
 *      Author: juan
*/

#include <exception>
#include <iostream>

#include "../../include/controller/Controller.hpp"
#include "../../include/menu/Menu.hpp"
#include "../../include/utils/Utils.hpp"
#include "../../include/system/SysInfo.hpp"

Controller::Controller() {
}

Controller::~Controller() {
}

void Controller::start() {
	vector<string> menuItens { "Students", "Teachers", "Subjects", "Reports",
			"Ajuda", "Sobre", "Sai do programa" };
	vector<void (Controller::*)()> functions { &Controller::actionStudents,
			&Controller::actionTeachers, &Controller::actionSubjects, &Controller::actionReports,&Controller::actionHelp, &Controller::actionAbout };
	launchActions("Menu Principal", menuItens, functions);
}

void Controller::actionStudents() {
	vector<string> menuStudents { "Inserir estudante",
			"Visualizar todos os estudantes", "Pesquisar estudante por RA",
			"Alterar estudante", "Voltar ao menu principal" };
	vector<void (Controller::*)()> functions { &Controller::actionInsertStudent,
			&Controller::actionToDo, &Controller::actionToDo,
			&Controller::actionToDo };
	launchActions("Menu Estudantes", menuStudents, functions);
}

void Controller::actionTeachers() {
	vector<string> menuTeachers { "Inserir professor",
			"Visualizar todos os professores", "Pesquisar professor por ID",
			"Alterar professor", "Voltar ao menu principal" };
	vector<void (Controller::*)()> functions { &Controller::actionToDo,
			&Controller::actionToDo, &Controller::actionToDo,
			&Controller::actionToDo };
	launchActions("Menu Professores", menuTeachers, functions);
}


void Controller::actionSubjects()
{
	return;
}

void Controller::actionReports()
{
	return;
}


void Controller::actionInsertStudent() {
	return;
}

void Controller::actionHelp(void) {
	Utils::printMessage(SysInfo::getVersion() + " | Help");
	actionToDo();
}

void Controller::actionAbout(void) {
	Utils::printMessage(SysInfo::getVersion() + " | About");
	actionToDo();
}

void Controller::launchActions(string title, vector<string> menuItens,
		vector<void (Controller::*)()> functions) {
	try {
		Menu menu(menuItens, title, "Sua opcao: ");
		menu.setSymbol("*");

		while (int choice = menu.getChoice()) {
			(this->*functions.at(choice - 1))();
		}
	} catch (const exception &myException) {
		Utils::printMessage(
				"Unexpected problem launching actions. "
						+ string(myException.what()));
	}
}

void Controller::actionToDo(void) {
	Utils::printMessage("Place holder function. Code was not written yet!\n");
}

