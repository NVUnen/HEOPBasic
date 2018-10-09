#pragma once
#include "Persoon.h"

class Student : public Persoon{

private:
    int amountofbooks;

public:
    Student(int leeftijd, std::string naam, int amountofbooks);

    const int amountOfbooks() const;
};
