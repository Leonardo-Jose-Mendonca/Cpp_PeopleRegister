#pragma once
#include <string>
#include "Class.h"
using std::string;

int Menu();
void FuncAddPeople(People* person, int size);
void FuncDelPeople(People* person, int size);
void FuncShowPeople(People* person, int size);
void FileRead(People* person, int size);
void FileWrite(People* person, int size);
int FileSize();
