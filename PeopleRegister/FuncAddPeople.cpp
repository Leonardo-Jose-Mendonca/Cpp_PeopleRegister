#include "Package.h"

void FuncAddPeople(People* person, int size) {
    string name = "";
    int age = 0;

    cout << "__Sing Up__" << endl;
    cout << "name: ";
    cin >> name;
    for (int i = 0; i < size; i++) {
        if (person[i].CheckPerson(name)) {
            cout << "--NAME ALREADY EXIST--";
            cin.get();
            return;
        }
    }
    cout << "age: ";
    cin >> age;
    person[size+1].InsertName(name);
    person[size+1].InsertAge(age);
    cout << "--PERSON ADD--";
    cin.get();
}