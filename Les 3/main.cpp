#include <iostream>
#include "Muntgeld.h"
#include "Vijftigcent.h"
#include "Eeneuro.h"
#include "Koffiemunt.h"
#include "Koffieautomaat.h"

using namespace std;

int main() {

    Vijftigcent c = Vijftigcent();
    c.saldo();

    std::cout << "Vijftig cent ingeworpen " << c.Vijftigcent() << std::endl;
    std::cout << std::endl;
    return 0;

}