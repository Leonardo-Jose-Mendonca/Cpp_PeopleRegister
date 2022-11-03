#pragma once

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class people {
private:
    string name;
    int age;
public:
    people(string Name = "none", int Age = 0) {
        name = Name;
        age = Age;
    }
    void insertPerson(string Name, int Age) {
        name = Name;
        age = Age;
    }
    void showPerson() {
        cout << "person: " << name << " - age: " << age << endl;
    }
    bool checkPerson() {
        if (name == "none")
            return false;
        else
            return true;
    }
    void getPerson(string* namePtr, int* agePtr) {
        *namePtr = name;
        *agePtr = age;
    }
};