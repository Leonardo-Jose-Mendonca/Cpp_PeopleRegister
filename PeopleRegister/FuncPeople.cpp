#include "Package.h"

void FuncDelPeople(People* person, int& size) {
    int end = 0;
    for (int i = 0; i < size; i++) {
        if (person[i].CheckPerson()) {
            cout << i << " - ";
            person[i].ShowPerson();
        }
        else {
            if (i == 0) {
                cout << "--EMPTY--";
                system("pause>0");
                system("cls");
                return;
            }
            end = i - 1;
            break;
        }
        end = i;
    }
    int selection = 0;
    cout << "Select the person to be DELETED: ";
    cin >> selection;
    if (selection < 0 || selection > end) {
        cout << "Person DO NOT existe";
        system("pause>0");
        system("cls");
        return;
    }
    string name = "";
    int age = 0;
    list<string> hobby = {};
    string hobby_s = "";
    for (int i = selection; i < end; i++) {
        person[i + 1].GetName(name);
        person[i].InsertName(name);
        person[i + 1].GetAge(age);
        person[i].InsertAge(age);
        person[i + 1].GetHobby(hobby);
        while (!(hobby.empty())) {
            person[i].InsertHobby(hobby.back());
            hobby.pop_back();
        }
    }
    person[end].DeleteName();
    person[end].DeleteAge();
    while(person[end].DeleteHobby()) {}
    size--;
    cout << "Person DELETED";
    system("pause>0");
    system("cls");
}

void FuncAddPeople(People* person, int& size, int& max_size) {
    string name = "";
    int age = 0;

    cout << "__Sing Up__" << endl;
    cout << "name: ";
    cin >> name;
    for (int i = 0; i < size; i++) {
        if (person[i].CheckPerson()) {
            cout << "--NAME ALREADY EXIST--";
            cin.get();
            return;
        }
    }
    cout << "age: ";
    cin >> age;
    person[size+1].InsertName(name);
    person[size+1].InsertAge(age);
    cout << "--PERSON ADD--";
    cin.get();
}

void FuncShowPeople(People* person, int& size) {
    for (int i = 0; i < size; i++) {
        if (person[i].CheckPerson())
            person[i].ShowPerson();
        else {
            if (i == 0)
                cout << "--EMPTY--";
            break;
        }
    }
    if (size == 0)
        cout << "--EMPTY--";
    system("pause>0");
}