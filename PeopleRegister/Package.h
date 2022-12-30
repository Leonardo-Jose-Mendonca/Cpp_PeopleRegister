#pragma once
#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include "Class.h"
using std::list; 
using std::string;
using std::cout;
using std::cin;
using std::endl;

int Menu();
void FuncAddPeople(People* person, unsigned int& size, unsigned int& max_size, bool& reStart);
void FuncDelPeople(People* person, unsigned int& size);
void FuncShowPeople(People* person, unsigned int& size);
void FileRead(string* person);
void FileWrite(string* person, unsigned int size);
int FileSize();
void Decode_List_to_Object(People* peopleCard, string* peopleList, unsigned int size);
void Decode_Object_to_List(People* peopleCard, string* peopleList, unsigned int size);
unsigned int intInput();
string stringInput();