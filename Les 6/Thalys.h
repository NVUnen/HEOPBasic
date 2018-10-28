#pragma once

#include "Train.h"

class Thalys : public Train {
public:
    Thalys(int a, int d, int k);

    float ticketprice() override;
    float allowance() override;

private:
    int capacity;
    int distance;
    int kilometerprice;

};

