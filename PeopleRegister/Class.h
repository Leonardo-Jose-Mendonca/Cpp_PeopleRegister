#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class People {
private:
    string name;
    int age;
public:
    People(string Name = "none", int Age = 0) {
        name = Name;
        age = Age;
    }
    void InsertPerson(string Name, int Age) {
        name = Name;
        age = Age;
    }
    void ShowPerson() {
        cout << "person: " << name << " - age: " << age << endl;
    }
    bool CheckPerson() {
        if (name == "none")
            return false;
        else
            return true;
    }
    void GetPerson(string* namePtr, int* agePtr) {
        *namePtr = name;
        *agePtr = age;
    }
};