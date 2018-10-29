#include <iostream>
#include "math.h"
#include "Thalys.h"

Thalys::Thalys(int c, int d) {
    capacity = c;
    distance = d;
}

float Thalys::ticketprice() {
    float price;
    price = distance * kilometerprice;
    return price;
}

float Thalys::income() {
    float income;
    income = capacity * ticketprice();
    return income;
}

float Thalys::allowance() {
    float allowance;
    allowance = 0.1f;
    return allowance;
}


