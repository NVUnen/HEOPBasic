#pragma once
#include <string>
#include "Book.h"



class Bibliotheek {

    public:
        Bibliotheek();

        void show();
        void lend(std::string type);
    private:
        Book* book = new Book();

};


