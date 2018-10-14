#include "Student.h"
#include <iostream>

Student::Student(int leeftijd, std::string naam, int amountofbooks) : Persoon(leeftijd, naam){
    this->amountofbooks = amountofbooks;
}

const int Student::amountOfbooks() const {
    return amountofbooks;
}



