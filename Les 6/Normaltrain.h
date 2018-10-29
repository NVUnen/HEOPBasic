#pragma once

#include "Train.h"

class Normaltrain : public Train{
    public:
        Normaltrain(int a, int d);

        float ticketprice() override;
        float income() override;
        float allowance();

    private:
        int capacity;
        int distance;

};


