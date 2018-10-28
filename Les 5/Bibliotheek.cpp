#include "Bibliotheek.h"
#include <iostream>

Bibliotheek::Bibliotheek() {
}

void Bibliotheek::show() {
    std::cout << "" << book->naam << std::endl;
}

void Bibliotheek::lend(std::string type) {
    book = new Book(type);

}