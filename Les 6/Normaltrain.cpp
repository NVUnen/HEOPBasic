#include <iostream>
#include "math.h"
#include "Normaltrain.h"

Normaltrain::Normaltrain(int c, int d) {
    capacity = c;
    distance = d;
}

float Normaltrain::ticketprice() {

    float price;
    price = distance * kilometerprice;
    return price;
}

float Normaltrain::income() {
    float income;
    income = capacity * ticketprice();
    return income;
}

float Normaltrain::allowance() {
    float allowance;
    allowance = 0.0f;
    return allowance;
}



