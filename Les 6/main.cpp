#include <iostream>
#include "Normaltrain.h"
#include "Expresstrain.h"
#include "Thalys.h"
#include "Ice.h"

int main() {

    Normaltrain c = Normaltrain(100,12, 2);
    c.allowance();
    std::cout << "Normal train max capacity income: " << c.ticketprice() << std::endl;

    Expresstrain a = Expresstrain(50,10, 4);
    a.allowance();
    std::cout << "Express train max capacity income: " << a.ticketprice() << std::endl;

    Thalys b = Thalys(150,100, 8);
    b.allowance();
    std::cout << "Thalys max capacity income: " << b.ticketprice() << std::endl;

    Ice d = Ice(100,200, 5);
    d.allowance();
    std::cout << "ICE max capacity income: " << d.ticketprice() << std::endl;

    return 0;
}