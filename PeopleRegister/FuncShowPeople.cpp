#include "Package.h"

void FuncShowPeople(People* person, int size) {
    string name;
    for (int i = 0; i < size; i++) {
        if (person[i].CheckPerson(name))
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