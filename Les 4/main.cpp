#include <iostream>
#include <fstream>

#define FILE "C:\\Users\\niels\\Documents\\HKU\\HEOBPB\\Github\\HEOPBasic\\Les 4\\Jabberwocky.txt"
#define OUTFILE "C:\\Users\\niels\\Documents\\HKU\\HEOBPB\\Github\\HEOPBasic\\Les 4\\output.txt"
int countAmountOfLetters() {
    char ch;
    std::ifstream in_stream;
    int count = 0;

    in_stream.open(FILE);
    if (!in_stream) {
        std::cout << "Probleem bij openen file" << std::endl;
        exit(1);
    }


    in_stream.get(ch);

    while (!in_stream.fail()) {
        count++;
        in_stream.get(ch);
    }
    in_stream.close();

    std::cout << count << " tekens in bestand" << std::endl;

    return count;
}

    char getCharacterAtPosition(int number) {
    char ch;
    std::ifstream fileInput;

    fileInput.open(FILE);
    for (int i = 0; i < number; i++) {
        fileInput.get(ch);
    }
    fileInput.close();
    return ch;
    }

    int main() {
        std::ifstream in_stream;
        std::ofstream out_stream;


        char ch;
        bool skip;
        int count;

        in_stream >> std::noskipws;
        in_stream >> ch;

        while (!in_stream.eof()) {
            in_stream >> ch;

            skip = !skip;

            if (!skip) {
                out_stream << ch;
            }
        }

        count = countAmountOfLetters();

        for (int number = count; number > 0; number--) {
            std::cout << getCharacterAtPosition(number);
        }

        out_stream.open(OUTFILE);
        if (!out_stream) {
            std::cout << "Probleem bij openen output file" << std::endl;
            exit(1);
        }

        in_stream.close();

        out_stream.close();

        return 0;
    }


