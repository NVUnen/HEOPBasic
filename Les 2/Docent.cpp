#include "Docent.h"
#include <iostream>

Docent::Docent(int leeftijd, std::string naam, int amountofstudents) : Persoon(leeftijd, naam) {
    this->amountofstudents = amountofstudents;
}

int Docent::amountOfstudents() const {
    return amountofstudents;
}