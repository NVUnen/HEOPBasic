#include <iostream>
#include "math.h"
#include "Ice.h"

Ice::Ice(int c, int d) {
    capacity = c;
    distance = d;
}

float Ice::ticketprice() {
    float price;
    price = distance * kilometerprice;
    return price;
}

float Ice::income() {
    float income;
    income = capacity * ticketprice();
    return income;
}

float Ice::allowance() {
    float allowance;
    allowance = 0.0f;
    return allowance;
}
