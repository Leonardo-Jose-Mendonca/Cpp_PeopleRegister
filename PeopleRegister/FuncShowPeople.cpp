#include <iostream>
#include "Package.h"
using std::cout;

void FuncShowPeople(People* person, int size) {
    for (int i = 0; i < size; i++) {
        if (person[i].CheckPerson())
            person[i].ShowPerson();
        else {
            if (i == 0)
                cout << "--EMPTY--";
            break;
        }
    }
    system("pause>0");
    system("cls");
}