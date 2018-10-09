#include "Muntgeld.h"

Muntgeld::Muntgeld(std::string name, float value){
    this->value = value;
    this->name = name;
}
const std::string Muntgeld::getName() const{
    return name;
}

const float Muntgeld::getValue() const {
    return value;
}