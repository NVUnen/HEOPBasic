#pragma once

#include "Train.h"

class Thalys : public Train {
public:
    Thalys(int a, int d);

    float ticketprice() override;
    float income() override;
    float allowance() override;

private:
    int capacity;
    int distance;
    int kilometerprice;

};

