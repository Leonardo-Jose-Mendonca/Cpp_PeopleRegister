#pragma once
#include <iostream>
#include <list>
#include <string>
using std::list;
using std::string;
using std::cout;
using std::endl;

class People {
private:
    string name;
    int age;
    list<string> hobby = {};
public:
    People(string Name = "none", int Age = 0) {
        name = Name;
        age = Age;
    }
    void InsertName(string Name) {
        name = Name;
    }
    void InsertAge(int Age) {
        age = Age;
    }
    void InsertHobby(string Hobby) {
        hobby.push_front(Hobby);
    }
    void DeleteHobby() {
        hobby.pop_front();
    }
    void ShowPerson() {
        cout << "Name: " << name << ", Age: " << age << ", Hobby: ";
        bool flagComma = false;
        for (string s : hobby) {
            if (flagComma == true)
                cout << ", ";
            cout << s;
            flagComma = true;
        }
        cout << "." << endl;
    }
    bool CheckPerson(string Name) {
        if (name == Name)
            return true;
        else
            return false;
    }
    void GetName(string& nameReference) {
        nameReference = name;
    }
    void GetAge(int& ageReference) {
        ageReference = age;
    }
    void GetHobby(list<string>& hobbyReference) {
        hobbyReference = hobby;
    }
};