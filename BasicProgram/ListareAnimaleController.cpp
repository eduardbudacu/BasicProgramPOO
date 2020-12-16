#include<vector>
#include "Animal.h"
#include "ListareAnimaleController.h"
#include "RegistruAnimale.h"

ListareAnimaleController::ListareAnimaleController(RegistruAnimale* registru) {
	this->registru = registru;
}

void ListareAnimaleController::run() {
	std::vector<Animal*> animale = this->registru->getListaAnimale();
	int dimensiune = animale.size();

	std::cout << "registrul are " << dimensiune << " animale" << std::endl;
	
	std::vector<Animal*>::iterator it;
	for (it = animale.begin(); it < animale.end(); it++) {
		std::cout << **it;
	}

	this->asteaptaTasta();
}
