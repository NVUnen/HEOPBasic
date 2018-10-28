#include <iostream>
#include "Koffieautomaat.h"

void Koffieautomaat::getValue(Eeneuro d) {
    std::cout << "Eeneuro" << std::endl;
    d.Value();
}

void Koffieautomaat::getValue(Vijftigcent c) {
    std::cout << "Vijftigcent" << std::endl;
    c.Value();
}

void Koffieautomaat::getValue(Koffiemunt b) {
    std::cout << "Koffiemunt" << std::endl;
    b.Value();
}

void Koffieautomaat::getValue(Muntgeld a) {
    std::cout << "Muntgeld" << std::endl;
    a.Value();
}

void cappuchino(int value){

}