#include "Package.h"

int main() {
    const int incrementation = 2;
    int file_size = FileSize();
    int max_size = file_size + incrementation;
    string* peopleList = new string[file_size];
    People* peopleCard = new People[max_size];
    FileRead(peopleList);
    Decode_List_to_Object(peopleCard, peopleList, file_size);
    delete[] peopleList;
    peopleList = NULL;
    int option = 0;
    do {
        option = Menu();
        switch (option) {
        case 1: FuncAddPeople(peopleCard, file_size, max_size);
            break;
        case 2: FuncDelPeople(peopleCard, file_size);
            break;
        case 3: FuncShowPeople(peopleCard, file_size);
            break;
        };
    } while (option != 0);
    string* peopleList_end = new string[file_size];
    Decode_Object_to_List(peopleCard, peopleList_end, file_size);
    FileWrite(peopleList_end, file_size);
    delete[] peopleList_end;
    peopleList_end = NULL;
    delete[] peopleCard;
    peopleCard = NULL;
    return 0;
}