#include <iostream>
#include "Muntgeld.h"
#include "Vijftigcent.h"
#include "Koffieautomaat.h"

int main() {

    Vijftigcent Vijftigcent1 = (0.5,"Vijftigcent");

    std::cout << Vijftigcent1.getValue() << "Value" << Vijftigcent1.getName() << "Name" << std::endl;

    return 0;
}