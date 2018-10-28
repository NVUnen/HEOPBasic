#include <iostream>
#include "math.h"
#include "Expresstrain.h"

Expresstrain::Expresstrain(int c, int d, int k) {
    capacity = c;
    distance = d;
    kilometerprice = k;
}



float Expresstrain::ticketprice() {
    return capacity * distance * kilometerprice;
}

float Expresstrain::allowance() {

}
