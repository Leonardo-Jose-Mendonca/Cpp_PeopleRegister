#include <iostream>
#include "Classes.h"
using std::cout;
using std::cin;

void funcDel(people* person, int size) {
    int selection = 0;
    int end = 0;
    for (int i = 0; i < size; i++) {
        if (person[i].checkPerson()) {
            cout << i << " - ";
            person[i].showPerson();
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
        person[i + 1].getPerson(&name, &age);
        person[i].insertPerson(name, age);
    }
    person[end].insertPerson("none", 0);
    cout << "Person DELETED";
    system("pause>0");
    system("cls");
}