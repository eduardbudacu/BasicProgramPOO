#pragma once
#include <iostream>

class Animal
{
	char *nume;
	float greutate;
public:

	Animal();
	Animal(const Animal& obj);
	~Animal();
	//setters
	void setNume(const char *v_nume);
	void setGreutate(float greutate);

	//getters
	char* getNume();
	float getGreutate();

	friend std::ostream& operator<<(std::ostream& out, Animal& animal);
};