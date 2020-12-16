#pragma once
#include <vector>

#include "Animal.h"

class RegistruAnimale
{
	std::vector<Animal *> animale;
public:
	RegistruAnimale();
	~RegistruAnimale();

	void adauga(Animal *animal);
	std::vector<Animal *> getListaAnimale();
};

