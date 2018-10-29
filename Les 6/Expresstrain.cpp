#include <iostream>
#include "math.h"
#include "Expresstrain.h"

Expresstrain::Expresstrain(int c, int d) {
    capacity = c;
    distance = d;
}

float Expresstrain::ticketprice() {
    float price;
    price = distance * kilometerprice;
    return price;
}

float Expresstrain::income() {
    float income;
    income = capacity * ticketprice();
    return income;
}

float Expresstrain::allowance() {
    float allowance;
    allowance = 0.0f;
    return allowance;
}
