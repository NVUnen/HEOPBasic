#pragma once
#include <iostream>
#include "Eeneuro.h"
#include "Koffiemunt.h"
#include "Vijftigcent.h"
#include "Muntgeld.h"

class Koffieautomaat {
public:
    Koffieautomaat();
    ~Koffieautomaat();

    void getValue(Eeneuro d);
    void getValue(Vijftigcent c);
    void getValue(Koffiemunt b);
    void getValue(Muntgeld a);

private:
    int saldo = 0;
    int koffieMunt = 100;
};

