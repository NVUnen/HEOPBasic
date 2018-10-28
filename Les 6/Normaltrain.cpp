#include <iostream>
#include "math.h"
#include "Normaltrain.h"

Normaltrain::Normaltrain(int c, int d, int k) {
    capacity = c;
    distance = d;
    kilometerprice = k;
}



float Normaltrain::ticketprice() {
    return capacity * distance * kilometerprice;
}

float Normaltrain::allowance() {

}



