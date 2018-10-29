#pragma once

#include "Train.h"

class Ice : public Train{
    public:
        Ice(int a, int d);

        float ticketprice() override;
        float income() override;
        float allowance() override;

    private:
        int capacity;
        int distance;
        int kilometerprice;
};
