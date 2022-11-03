#include <iostream>
#include "Classes.h"
using std::cout;
using std::cin;
using std::string;

void funcAdd(people* person, int size) {
    string name = "";
    int age = 0;

    for (int i = 0; i < size; i++) {
        if (!(person[i].checkPerson())) {
            cout << "__Sing Up__" << endl;
            cout << "name: ";
            cin >> name;
            cout << "age: ";
            cin >> age;
            person[i].insertPerson(name, age);
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