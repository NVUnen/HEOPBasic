#include <iostream>
#include <fstream>

#define FILE "C:\Gebruikers\niels\Bureaublad\Jabberwocky.txt"

int main() {
    char ch;
    std::ifstream in_stream;

    in_stream.open(FILE);

    if (!in_stream){
        std::cout << "probleem bij openen file " << std::endl;
        exit(1);
    }

    in_stream.get(ch);
    while (!in_stream.eof()) {
        in_stream.get(ch);
        std::cout << ch << std::endl;
    }

    in_stream.close();
    return 0;
}