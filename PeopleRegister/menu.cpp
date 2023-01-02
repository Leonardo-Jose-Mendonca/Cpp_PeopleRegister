#include "Package.h"

int Menu() {
    unsigned int option = 0;
    system("cls");
    do {
        cout << "------------MENU------------\n";
        cout << "0 - Exit\n";
        cout << "1 - ADD    a person\n";
        cout << "2 - DELETE a person\n";
        cout << "3 - LIST     people\n";
        cout << "4 - ***************\n";
        cout << "5 - ***************\n";
        cout << "6 - SAVE\n";
        cout << "----------------------------\n";
        cout << "option: ";
        option = intInput();
        system("cls");
    } while (!(option >= 0 && option <= 6));
    return option;
}