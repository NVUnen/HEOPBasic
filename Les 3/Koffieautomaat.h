#pragma once

#include "Eeneuro.h"
#include "Koffiemunt.h"
#include "Vijftigcent.h"
#include "Muntgeld.h"

class Koffieautomaat {
public:
    void getValue(Eeneuro d);
    void getValue(Vijftigcent c);
    void getValue(Koffiemunt b);
    void getValue(Muntgeld a);

    void cappuchino(int value);

};

