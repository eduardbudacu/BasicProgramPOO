#pragma once
#include<vector>
#include<string>
#include<iostream>

using namespace std;

class Program;

class Menu
{
	std::vector<std::string> options;
	Program *program;
public:
	Menu(Program *program);
	void afisare();
	void alegeOptiune();
};

