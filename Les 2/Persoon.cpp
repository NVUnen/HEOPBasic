#include "Persoon.h"


Persoon::Persoon(int leeftijd, std::string naam){
    this->leeftijd = leeftijd;
    this->naam = naam;
}
const std::string Persoon::getName() const{
    return naam;
}

const int Persoon::getAge() const{
    return leeftijd;
}