#include "IncarcareDateController.h"


IncarcareDateController::IncarcareDateController(RegistruAnimale* registru) {
	this->registru = registru;
}

void IncarcareDateController::run() {
	std::cout << "Am apelat metoda de incarcare date" << std::endl;

	this->asteaptaTasta();
}
