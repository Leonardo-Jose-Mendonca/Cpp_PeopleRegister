#include <iostream>
#include <string>
#include "Package.h"
using std::string;
using std::cout;
using std::cin;

void FuncDelPeople(People* person, int size) {
    int selection = 0;
    int end = 0;
    for (int i = 0; i < size; i++) {
        if (person[i].CheckPerson()) {
            cout << i << " - ";
            person[i].ShowPerson();
        }
        else {
            if (i == 0) {
                cout << "--EMPTY--";
                system("pause>0");
                return;
            }
            end = i - 1;
            break;
        }
        end = i;
    }
    cout << "Select the person to be DELETED: ";
    cin >> selection;
    if (selection < 0 || selection > end) {
        cout << "Person DO NOT existe";
        system("pause>0");
        system("cls");
        return;
    }
    string name = "";
    int age = 0;
    for (int i = selection; i < end; i++) {
        person[i + 1].GetPerson(&name, &age);
        person[i].InsertPerson(name, age);
    }
    person[end].InsertPerson("none", 0);
    cout << "Person DELETED";
    system("pause>0");
    system("cls");
}