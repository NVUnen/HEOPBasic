#pragma once
#include <string>

using namespace std;

class Muntgeld {
    private:
        float value;
        std::string name;

    public:
        Muntgeld(std::string name, float value);

        const std::string getName() const;
        const float getValue() const;
};

