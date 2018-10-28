#include <iostream>
#include <fstream>

#define FILE1 "C:\\Users\\niels\\Documents\\HKU\\HEOBPB\\Github\\HEOPBasic\\Les 4\\Jabberwocky.txt"
#define FILE2 "C:\\Users\\niels\\Documents\\HKU\\HEOBPB\\Github\\HEOPBasic\\Les 4\\Jabberwocky_lat.txt"
#define OUTFILE "C:\\Users\\niels\\Documents\\HKU\\HEOBPB\\Github\\HEOPBasic\\Les 4\\output.txt"

int main() {
    std::ifstream in_stream;

    in_stream.open(FILE1);
    if (!in_stream) {
        std::cout << "Probleem bij openen file 1" << std::endl;
        exit(1);
    }

    std::ifstream in_stream2;
    in_stream2.open(FILE2);
    if (!in_stream) {
        std::cout << "Probleem bij openen file 2" << std::endl;
        exit(1);
    }

    std::ofstream out_stream;
    out_stream.open(OUTFILE);
    if (!out_stream) {
        std::cout << "Probleem bij openen output file" << std::endl;
        exit(1);
    }

    bool skip;

    char ch;
    in_stream >> std::noskipws;
    in_stream >> ch;
    while (!in_stream.eof()) {
        in_stream >> ch;

        skip = !skip;

        if (!skip) {
            out_stream << ch;
        }
    }

    in_stream.close();
    in_stream2.close();

    out_stream.close();

    return 0;
}