#pragma once
#include "Controller.h"
#include "RegistruAnimale.h"

class IncarcareDateController :
    public Controller
{
    RegistruAnimale* registru;
public:
    IncarcareDateController(RegistruAnimale *registru);
    void run();
};

