#include <iostream>
#include <fstream>
#include <string>
#include "Classes.h"

void FileRead(people* person, int size) {
    std::string line;
    std::fstream FILE_PEOPLE;
    FILE_PEOPLE.open("People_Register.txt", std::ios::in);
    if (FILE_PEOPLE.is_open()) {
        for (int i = 0; i < size; i++) {
            std::getline(FILE_PEOPLE, line);
            cout << line;
        }
    }
    else cout << "error";
    FILE_PEOPLE.close();
}

void FileWrite(people* person, int size) {}

int FileSize() {
    int size = 0;
    std::string line;
    std::fstream FILE_PEOPLE;
    FILE_PEOPLE.open("People_Register.txt", std::ios::in);
    if (FILE_PEOPLE.is_open()) {
        while (std::getline(FILE_PEOPLE, line))
            size++;
    }
    else cout << "error";
    FILE_PEOPLE.close();
    return size;
}