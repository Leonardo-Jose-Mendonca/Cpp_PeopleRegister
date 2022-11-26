#include "Package.h"

void FileRead(string* person) {
    std::string line;
    std::fstream FILE_PEOPLE;
    FILE_PEOPLE.open("Memory.txt", std::ios::in);
    int index = 0;
    while (std::getline(FILE_PEOPLE, line)) {
        person[index] = line;
        index++;
    }
    FILE_PEOPLE.close();
}

void FileWrite(string* person, int size) {
    std::fstream FILE_PEOPLE;
    FILE_PEOPLE.open("Memory.txt", std::ios::out);
    FILE_PEOPLE.close();
    FILE_PEOPLE.open("Memory.txt", std::ios::app);
    int index = 0;
    while (index < size) {
        FILE_PEOPLE << person[index] << "\n";
        index++;
    }
    FILE_PEOPLE.close();
}

int FileSize() {
    int size = 0;
    std::string line;
    std::fstream FILE_PEOPLE;
    FILE_PEOPLE.open("Memory.txt", std::ios::in);
    if (FILE_PEOPLE.is_open())
        while (std::getline(FILE_PEOPLE, line))
            size++;
    FILE_PEOPLE.close();
    return size;
}