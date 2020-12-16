#include <iostream>

#include "Menu.h"
#include "Program.h"

using namespace std;

Menu::Menu(Program *program)
{
	this->program = program;

	this->options.push_back("1. Adauga animal");
	this->options.push_back("2. Listeaza animale");
	this->options.push_back("3. Incarca date");
	this->options.push_back("4. Salveaza date");
	this->options.push_back("5. Iesire");
}

void Menu::afisare() {
	system("cls");

	for (auto it = options.begin(); it != options.end(); it++) {
		std::cout << *it << " | ";
	}

	cout << endl << "Alege o optiune: ";
}


void Menu::alegeOptiune() {
	int optiune = 0;

	while (optiune == 0) {
		cin >> optiune;

		if (optiune > this->options.size()) {

			cout << "Alege o optiune valida din meniu" << endl;
			optiune = 0;
		}
	}

	this->program->executare(optiune);
}
