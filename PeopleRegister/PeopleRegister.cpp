#include "Package.h"

int main() {
    bool reStart;
    do {
        reStart = false;
        const int incrementation = 2;
        int file_size = FileSize();
        int max_size = file_size + incrementation;
        People* peopleCard = new People[max_size];
        string* peopleList = new string[file_size];
        FileRead(peopleList);
        Decode_List_to_Object(peopleCard, peopleList, file_size);
        delete[] peopleList;
        peopleList = NULL;
        int option = 0;
        do {
            option = Menu();
            switch (option) {
            case 1: FuncAddPeople(peopleCard, file_size, max_size, reStart);
                break;
            case 2: FuncDelPeople(peopleCard, file_size);
                break;
            case 3: FuncShowPeople(peopleCard, file_size);
                break;
            };
        } while (option != 0 && !reStart);
        string* peopleList_save = new string[file_size];
        Decode_Object_to_List(peopleCard, peopleList_save, file_size);
        FileWrite(peopleList_save, file_size);
        delete[] peopleList_save;
        peopleList_save = NULL;
        delete[] peopleCard;
        peopleCard = NULL;
    } while (reStart);
    return 0;
}