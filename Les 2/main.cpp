#include <iostream>
#include "Persoon.h"
#include "Student.h"
#include "Docent.h"

int main() {

    Student student1 =  Student(21, "Niels");
    Docent docent1 = Docent(35, "Henk");

    cout << student1.getName() << " Naam" << student1.getAge() << "Leeftijd" << endl;
    cout << docent1.getName() << " Naam" << docent1.getAge() << "Leeftijd" << endl;

    return 0;
}