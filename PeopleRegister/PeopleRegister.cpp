#include <iostream>
#include "Package.h"
using std::cout;

int main(){
    int size = FileSize();
    People* peopleCard = new People[size+1];
    FileRead(peopleCard, size);

    int option = 0;
    do {
        option = Menu();
        switch (option) {
        case 1: FuncAddPeople(peopleCard, size);
            break;
        case 2: FuncDelPeople(peopleCard, size);
            break;
        case 3: FuncShowPeople(peopleCard, size);
            break;
        };
    } while (option != 0);

    delete[]peopleCard;
    peopleCard = NULL;
    return 0;
}