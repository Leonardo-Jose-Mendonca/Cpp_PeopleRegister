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
void FuncAddPeople(People* person, int& size, int& max_size, bool& reStart);
void FuncDelPeople(People* person, int& size);
void FuncShowPeople(People* person, int& size);
void FileRead(string* person);
void FileWrite(string* person, int size);
int FileSize();
void Decode_List_to_Object(People* peopleCard, string* peopleList, int size);
void Decode_Object_to_List(People* peopleCard, string* peopleList, int size);
