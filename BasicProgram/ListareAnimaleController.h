#pragma once
#include "Controller.h"

#include "RegistruAnimale.h"
class ListareAnimaleController :
    public Controller
{
    RegistruAnimale* registru;

public:
    ListareAnimaleController(RegistruAnimale* registru);
    void run();
};

