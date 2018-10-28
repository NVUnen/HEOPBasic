#include <iostream>
#include "math.h"
#include "Thalys.h"

Thalys::Thalys(int c, int d, int k) {
    capacity = c;
    distance = d;
    kilometerprice = k;
}



float Thalys::ticketprice() {
    return capacity * distance * kilometerprice;
}

float Thalys::allowance() {

}



