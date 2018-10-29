#pragma once

#include "Train.h"

class Expresstrain : public Train{
    public:
        Expresstrain(int a, int d);

        float ticketprice() override;
        float income() override;
        float allowance() override;

    private:
        int capacity;
        int distance;
        int kilometerprice;

};

