#include <iostream>
#include "math.h"
#include "Ice.h"

Ice::Ice(int c, int d, int k) {
    capacity = c;
    distance = d;
    kilometerprice = k;
}



float Ice::ticketprice() {
    return capacity * distance * kilometerprice;
}

float Ice::allowance() {

}