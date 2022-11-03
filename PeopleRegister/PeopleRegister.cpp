#include <iostream>
#include "Functions.h"
#include "Classes.h"
using std::cout;

int main(){
    int size = 5;   //size is the quantity of people that can be incremented in this register
    people* peopleCard = new people[size];
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