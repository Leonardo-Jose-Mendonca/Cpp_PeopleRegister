#include "Package.h"

int main() {
    int size = FileSize();
    People* peopleCard = new People[size];
    string* peopleList = new string[size];
    FileRead(peopleList);
    Decode_List_to_Object(peopleCard, peopleList, size);
//    delete[] peopleList;
//    peopleList = NULL;
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
//    string* peopleList = new string[size];

    Decode_Object_to_List(peopleCard, peopleList, size);
    FileWrite(peopleList, size);
    delete[] peopleList;
    peopleList = NULL;
    return 0;
}