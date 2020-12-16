#pragma once

#include<vector>

#include "Controller.h"
#include "RegistruAnimale.h"
#include "Menu.h"

class Program
{
	RegistruAnimale *registru = new RegistruAnimale();
	Menu *menu = new Menu(this);
	std::vector<Controller *> controllers;

public:
	Program();

	void run();
	void executare(int optiune);
};

