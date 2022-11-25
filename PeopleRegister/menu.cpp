#include <iostream>
using std::cout;
using std::cin;

int Menu() {
    int option = 0;
    do {
        cout << "------------MENU------------\n";
        cout << "0 - Exit\n";
        cout << "1 - Insert people\n";
        cout << "2 - Delete people\n";
        cout << "3 - Show people\n";
        cout << "----------------------------\n";
        cout << "option: ";
        cin >> option;
        system("cls");
    } while (!(option >= 0 && option <= 3));
    return option;
}