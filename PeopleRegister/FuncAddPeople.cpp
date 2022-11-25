#include <iostream>
#include <string>
#include "Package.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

void FuncAddPeople(People* person, int size) {
    string name = "";
    int age = 0;

    for (int i = 0; i < size; i++) {
        if (!(person[i].CheckPerson())) {
            cout << "__Sing Up__" << endl;
            cout << "name: ";
            cin >> name;
            cout << "age: ";
            cin >> age;
            person[i].InsertPerson(name, age);
            cout << "--PERSON ADD--";
            break;
        }
        else if (i == (size - 1)) {
            cout << "--NO MEMORY SPACE--";
        }
    }
    system("pause>0");
    system("cls");
}