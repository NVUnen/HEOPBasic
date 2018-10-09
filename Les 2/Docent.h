#pragma once
#include "Persoon.h"

class Docent : public Persoon{

private:
    int amountofstudents;

public:
    Docent(int leeftijd, std::string naam, int amountofstudents);

    const int amountOfstudents() const;


};
