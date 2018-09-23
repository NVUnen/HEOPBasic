#pragma once
#include "Persoon.h"

class Docent : public Persoon{

private:
    int leeftijd;
    std::string naam;

public:
    Docent(int leeftijd, std::string naam);


};
