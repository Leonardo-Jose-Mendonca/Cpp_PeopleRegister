#include "Package.h"

int main() {
    bool reStart, save;
    do {
        reStart = false;
        save = false;
        const int incrementation = 2;
        unsigned int file_size = FileSize();
        unsigned int max_size = file_size + incrementation;
        People* peopleCard = new People[max_size];
        string* peopleList = new string[file_size];
        FileRead(peopleList);
        Decode_List_to_Object(peopleCard, peopleList, file_size);
        delete[] peopleList;
        peopleList = NULL;
        unsigned int option = 0;
        do {
            string yesSave;
            option = Menu();
            switch (option) {
            case 0:
                cout << "---DO YOU WANT TO SAVE THE CHANGES?---\n";
                cout << "Type 'YES' to save or 'NO' to exit: ";
                yesSave = stringInput();
                for (int i = 0; i < yesSave.length(); i++)
                    yesSave[i] = toupper(yesSave[i]);
                if (yesSave == "YES")
                    save = true;
                break;
            case 1: FuncAddPeople(peopleCard, file_size, max_size, reStart);
                if (reStart)
                    save = true;
                break;
            case 2: FuncDelPeople(peopleCard, file_size);
                break;
            case 3: FuncShowPeople(peopleCard, file_size);
                break;
            case 4:   //Edit People
                break;
            case 5:   //Search People
                break;
            case 6:
                reStart = true;
                save = true;
                cout << "SAVING CHANGES..\nPress any key..";
                system("pause>0");
                break;
            };
        } while (option != 0 && !reStart);
        if (save) {
            string* peopleList_save = new string[file_size];
            Decode_Object_to_List(peopleCard, peopleList_save, file_size);
            FileWrite(peopleList_save, file_size);
            delete[] peopleList_save;
            peopleList_save = NULL;
        }
        delete[] peopleCard;
        peopleCard = NULL;
    } while (reStart);
    return 0;
}