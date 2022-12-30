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
    unsigned int age;
    list<string> hobby = {};
public:
    People(string Name = "none", unsigned int Age = 0) {
        name = Name;
        age = Age;
    }
    void InsertName(string& Name) {
        name = Name;
    }
    void InsertAge(unsigned int& Age) {
        age = Age;
    }
    void InsertHobby(string& Hobby) {
        hobby.push_front(Hobby);
    }
    void DeleteName() {
        name = "";
    }
    void DeleteAge() {
        age = 0;
    }
    bool DeleteHobby() {
        if (hobby.empty())
            return false;   //empty
        else {
            hobby.pop_front();
            return true;
        }
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
    bool CheckPerson() {
        if (name == "" && age == 0 && hobby.empty())
            return false;
        else
            return true;
    }
    void GetName(string& nameReference) {
        nameReference = name;
    }
    void GetAge(unsigned int& ageReference) {
        ageReference = age;
    }
    void GetHobby(list<string>& hobbyReference) {
        hobbyReference = hobby;
    }
};