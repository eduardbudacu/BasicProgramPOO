#include <iostream>

#include "Program.h"

#include "Animal.h"
#include "AdaugaAnimalController.h"
#include "ListareAnimaleController.h"
#include "IncarcareDateController.h"


Program::Program()
{
	this->controllers.push_back(new AdaugaAnimalController(this->registru));
	this->controllers.push_back(new ListareAnimaleController(this->registru));
	this->controllers.push_back(new IncarcareDateController(this->registru));
}


void Program::run()
{
	this->menu->afisare();
	this->menu->alegeOptiune();
}

void Program::executare(int optiune) {
	if (optiune <= this->controllers.size()) {
		this->controllers[optiune - 1]->run();
		this->run();
	}
}
