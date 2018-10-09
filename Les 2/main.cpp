#include <iostream>
#include "Persoon.h"
#include "Student.h"
#include "Docent.h"

int main() {

    Student student1 =  Student(21, "Niels", 20);
    Docent docent1 = Docent(35, "Henk", 10);

    cout << student1.getName() << " Naam" << student1.getAge() << "Leeftijd" << student1.amountOfbooks() << "Amount of books" << endl;
    cout << docent1.getName() << " Naam" << docent1.getAge() << "Leeftijd" << docent1.amountOfstudents() << "Amount of students " << endl;

    return 0;
}