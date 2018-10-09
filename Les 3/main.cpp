#include <iostream>
#include "Muntgeld.h"
#include "Vijftigcent.h"
#include "Koffieautomaat.h"

int main() {
    Muntgeld vijftigcent =  Muntgeld();

    Koffieautomaat automaat;
    automaat.checkMuntvalue(vijftigcent);

    std::cin >> vijftigcent;

    return 0;
}