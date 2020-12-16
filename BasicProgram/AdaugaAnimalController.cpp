#include <iostream>

#include "AdaugaAnimalController.h"
#include "RegistruAnimale.h"


AdaugaAnimalController::AdaugaAnimalController(RegistruAnimale *registru)
{
	this->registru = registru;
}

void AdaugaAnimalController::run() {
	char buffer[100];
	float greutate;
	std::cout << "Nume animal: ";
	std::cin >> buffer;

	std::cout << std::endl;

	std::cout << "Greutate: ";
	std::cin >> greutate;


	Animal *a = new Animal();
	try {
		a->setNume(buffer);
		a->setGreutate(greutate);
	}
	catch (const char *err) {
		std::cout << err << std::endl;
		delete a;
		this->run();
	}

	this->registru->adauga(a);
}
