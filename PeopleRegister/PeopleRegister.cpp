#include <iostream>
#include "Functions.h"
#include "Classes.h"
using std::cout;

int main(){
//    int size = FileSize();
    int size = 5;
    people* peopleCard = new people[size+1];
//    FileRead(peopleCard, size);

    int option = 0;
    do {
        option = menu();
        switch (option) {
        case 1: funcAdd(peopleCard, size);
            break;
        case 2: funcDel(peopleCard, size);
            break;
        case 3: funcShow(peopleCard, size);
            break;
        };
    } while (option != 0);

    delete[]peopleCard;
    peopleCard = NULL;

    cout << "press any key to leave";
    system("pause>0");
    return 0;
}