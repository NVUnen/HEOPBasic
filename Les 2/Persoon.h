#pragma once
#include <string>

using namespace std;

class Persoon {
private:
    int leeftijd;
    std::string naam;

public:
    Persoon (int leeftijd, std::string naam);

    const int getAge() const;
    const std::string getName() const;

};

