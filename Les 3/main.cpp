#include <iostream>
#include "Muntgeld.h"
#include "Vijftigcent.h"
#include "Eeneuro.h"
#include "Koffiemunt.h"
#include "Koffieautomaat.h"

int main() {

    Vijftigcent vijftigcent = Vijftigcent();
    Eeneuro eeneuro = Eeneuro();
    Koffiemunt koffiemunt = Koffiemunt();

    Koffieautomaat check;
    check.getValue(vijftigcent);
    check.getValue(eeneuro);
    check.getValue(koffiemunt);

    char ;
    std::cin >> pietjepuk;

    return 0;

}