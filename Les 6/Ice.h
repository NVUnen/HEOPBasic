#pragma once

#include "Train.h"

class Ice : public Train{
    public:
        Ice(int a, int d, int k);

        float ticketprice() override;
        float allowance() override;

    private:
        int capacity;
        int distance;
        int kilometerprice;
};
