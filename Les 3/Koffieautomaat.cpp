#include <iostream>
#include "Koffieautomaat.h"

Koffieautomaat::Koffieautomaat() {}

Koffieautomaat::~Koffieautomaat() {}

void Koffieautomaat::getValue(Eeneuro d) {
    saldo+= 10;
}

void Koffieautomaat::getValue(Vijftigcent c) {
    saldo+= 5;
}

void Koffieautomaat::getValue(Koffiemunt b) {
    saldo+= 100;
    koffieMunt = 1;
}

void Koffieautomaat::getValue(Muntgeld a) {
}
