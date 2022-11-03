#include <iostream>
#include "Classes.h"
using std::cout;

void funcShow(people* person, int size) {
    for (int i = 0; i < size; i++) {
        if (person[i].checkPerson())
            person[i].showPerson();
        else {
            if (i == 0)
                cout << "--EMPTY--";
            break;
        }
    }
    system("pause>0");
    system("cls");
}