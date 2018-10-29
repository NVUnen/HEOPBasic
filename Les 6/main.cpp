#include <iostream>
#include "Normaltrain.h"
#include "Expresstrain.h"
#include "Thalys.h"
#include "Ice.h"

int main() {

    Normaltrain c = Normaltrain(100,12);
    c.ticketprice();
    std::cout << "Income Normal train on max capacity: " << c.income() << std::endl;

    Expresstrain a = Expresstrain(50,10);
    a.ticketprice();
    std::cout << "Income Express train on max capacity: " << a.income() << std::endl;

    Thalys b = Thalys(100,12);
    b.ticketprice();
    std::cout << "Income Thalys on max capacity: " << b.income() << std::endl;

    Ice d = Ice(100,12);
    d.ticketprice();
    std::cout << "Income ICE train on max capacity: " << d.income() << std::endl;

    return 0;
}