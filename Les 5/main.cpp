#include <iostream>
#include "Bibliotheek.h"
#include "Book.h"

void leenBoek(Bibliotheek* bieb) {
    bieb->lend("David Baldacci");

    bieb->show();
}


int main() {
    Bibliotheek* bieb = new Bibliotheek();
    std::cout << "Beschikbare boeken" << std::endl;
    bieb->show();

    bieb->lend("David Baldacci");
    bieb->show();

    int c;
    std::cin >> c;

    std::cout << "Boek geleend" << std::endl;
    leenBoek(bieb);
    delete bieb;

    return 0;
}