#include <iostream>
#include <fstream>
#include <string>
#include "Package.h"
using std::cout;

void FileRead(People* person, int size) {
    std::string line;
    std::fstream FILE_PEOPLE;
    FILE_PEOPLE.open("Memory.txt", std::ios::in);
    if (FILE_PEOPLE.is_open()) {
        for (int i = 0; i < size; i++) {
            std::getline(FILE_PEOPLE, line);
            cout << line;
        }
    }
    else cout << "error";
    FILE_PEOPLE.close();
}

void FileWrite(People* person, int size) {}

int FileSize() {
    int size = 0;
    std::string line;
    std::fstream FILE_PEOPLE;
    FILE_PEOPLE.open("Memory.txt", std::ios::in);
    if (FILE_PEOPLE.is_open()) {
        while (std::getline(FILE_PEOPLE, line))
            size++;
    }
    else cout << "error";
    FILE_PEOPLE.close();
    return size;
}