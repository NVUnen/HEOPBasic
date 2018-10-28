#pragma once

#include "Train.h"

class Normaltrain : public Train{
    public:
        Normaltrain(int a, int d, int k);

        float ticketprice() override;
        float allowance() override;


    private:
        int capacity;
        int distance;
        int kilometerprice;

};


