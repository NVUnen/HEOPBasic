#pragma once

#include "train.h"

class Expresstrain : public Train{
    public:
        Expresstrain(int a, int d, int k);

        float ticketprice() override;
        float allowance() override;

    private:
        int capacity;
        int distance;
        int kilometerprice;

};

