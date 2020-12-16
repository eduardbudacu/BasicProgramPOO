#pragma once
#include "Controller.h"
#include "RegistruAnimale.h"

class AdaugaAnimalController :
	public Controller
{
	RegistruAnimale *registru;
public:
	AdaugaAnimalController(RegistruAnimale *registru);
	void run();
};

