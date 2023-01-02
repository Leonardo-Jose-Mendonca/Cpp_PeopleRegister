#include "Package.h"

void FuncDelPeople(People* person, unsigned int& size) {
    if (size == 0) {
        cout << "--EMPTY--";
        system("pause>0");
        return;
    }
    for (unsigned int i = 0; i < size; i++) {
        cout << i+1 << " - ";
        person[i].ShowPerson();
    }
    unsigned int selection = 0;
    cout << "Select the person's index number to be DELETED or '0' to leave: ";
    selection = intInput();
    if (selection == 0){
        cout << "CANCELLED";
        system("pause>0");
        return;
    }
    else if (selection < 0 || selection > size) {
        cout << "Person DO NOT existe";
        system("pause>0");
        return;
    }
    string name = "";
    unsigned int age = 0;
    list<string> hobby = {};
    string hobby_s = "";
    selection--;
    unsigned int end = size - 1;
    for (unsigned int i = selection; i < end; i++) {
        person[i].DeleteName();
        person[i].DeleteAge();
        while (person[i].DeleteHobby()) {}
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

void FuncAddPeople(People* person, unsigned int& size, unsigned int& max_size, bool& reStart) {
    if (size == max_size) {
        cout << "Reached the maximum size.. System will restart to free some space up.. Press any key..";
        system("pause>0");
        reStart = true;
        return;
    }

    string existingName = "";
    string name = "";
    unsigned int age = 0;
    string hobby = "";

    cout << "__Sing Up__" << endl;
    cout << "Insert the name or type 'out' and press ENTER to leave:\n";
    cout << "name: ";
    name = stringInput();
    for (unsigned int i = 0; i < size; i++) {
        person[i].GetName(existingName);
        if (existingName == name) {
            cout << "--NAME ALREADY EXIST--";
            system("pause>0");
            return;
        }
        else if (name == "out") {
            cout << "--CANCELLED--";
            system("pause>0");
            return;
        }
    }
    cout << "age: ";
    age = intInput();
    person[size].InsertName(name);
    person[size].InsertAge(age);
    unsigned int numberHobby = 0;
    do {
        numberHobby++;
        if (numberHobby == 1)
            cout << "insert 1st hobby or type 'out' and press ENTER to leave: ";
        else if (numberHobby == 2)
            cout << "insert 2nd hobby or type 'out' and press ENTER to leave: ";
        else if (numberHobby == 3)
            cout << "insert 3rd hobby or type 'out' and press ENTER to leave: ";
        else
            cout << "insert " << numberHobby << "th hobby or type 'out' and press ENTER to leave: ";
        hobby = stringInput();
        if (hobby != "out")
            person[size].InsertHobby(hobby);
    } while (hobby != "out");
    size++;
    cout << "--PERSON ADD--";
    system("pause>0");
}

void FuncShowPeople(People* person, unsigned int& size) {
    if (size == 0) {
        cout << "--EMPTY--";
        system("pause>0");
        return;
    }
    for (unsigned int i = 0; i < size; i++)
        person[i].ShowPerson();
    system("pause>0");
}