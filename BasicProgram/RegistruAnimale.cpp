#include "RegistruAnimale.h"



RegistruAnimale::RegistruAnimale()
{
}


RegistruAnimale::~RegistruAnimale()
{
}

void RegistruAnimale::adauga(Animal *animal) {
	this->animale.push_back(animal);
}

std::vector<Animal *> RegistruAnimale::getListaAnimale()
{
	return this->animale;
}
