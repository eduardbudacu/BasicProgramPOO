#pragma once

class Controller
{
public:
	Controller();
	~Controller();

	virtual void run() = 0;

	void asteaptaTasta();
};

