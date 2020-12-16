#include "Animal.h"
#include <iostream>


Animal::Animal()
{
	this->nume = nullptr;
	this->greutate = 0;
}

Animal::Animal(const Animal& obj) {
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume, obj.nume);
	this->greutate = obj.greutate;
}

Animal::~Animal()
{
	delete[] this->nume;
}

void Animal::setNume(const char *v_nume) {
	if (this->nume) {
		delete[] this->nume;
	}
	this->nume = new char[strlen(v_nume) + 1];
	strcpy(this->nume, v_nume);
}

void Animal::setGreutate(float v_greutate) {
	if(v_greutate <= 10) {
		this->greutate = v_greutate;
	}
	else {
		throw "greutate trebuie sa fie mai mica sau egala cu 10.00 kg";
	}
}

char* Animal::getNume() {
	return this->nume;
}

float Animal::getGreutate() {
	return this->greutate;
}

std::ostream& operator<<(std::ostream& out, Animal& animal) {
	out << animal.nume << " | " << animal.greutate << std::endl;
	return out;
}