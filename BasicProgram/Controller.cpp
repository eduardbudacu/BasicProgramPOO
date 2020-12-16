#include<conio.h>
#include <iostream>
#include "Controller.h"



Controller::Controller()
{
}


Controller::~Controller()
{
}

void Controller::asteaptaTasta() {
	std::cout << "Apasa orice tasta pentru a continua ...";
	getch();
}
