#include "Package.h"

void Decode_List_to_Object(People* peopleCard, string* peopleList, int size) {
    string line = " ";
    for (int i = 0; i < size; i++) {
        line = peopleList[i];
        int position = 0;
        while (line[position] != NULL) {
            if (line[position] == ':') {
                if (line[position - 1] == 'e')
                    if (line[position - 2] == 'm')
                        if (line[position - 3] == 'a')
                            if (line[position - 4] == 'N') {
                                position++;
                                string name = "";
                                bool spaceTag = true;
                                while (line[position] != ',') {
                                    if (spaceTag == true && line[position] == ' ') {
                                        position++;
                                        continue;
                                    }
                                    spaceTag = false;
                                    name.push_back(line[position]);
                                    position++;
                                }
                                peopleCard[i].InsertName(name);
                            }
                if (line[position - 1] == 'e')
                    if (line[position - 2] == 'g')
                        if (line[position - 3] == 'A') {
                            position++;
                            int age = 0;
                            while (line[position] != ',') {
                                if (line[position] >= '0' && line[position] <= '9') {
                                    age *= 10;
                                    age += line[position] - '0';
                                }
                                position++;
                            }
                            peopleCard[i].InsertAge(age);
                        }
                if (line[position - 1] == 'y')
                    if (line[position - 2] == 'b')
                        if (line[position - 3] == 'b')
                            if (line[position - 4] == 'o')
                                if (line[position - 5] == 'H') {
                                    position++;
                                    string hobby = "";
                                    bool spaceTag = true;
                                    while (line[position] != '.' && line[position] != NULL) {
                                        if (spaceTag == true && line[position] == ' ') {
                                            position++;
                                            continue;
                                        }
                                        spaceTag = false;
                                        if (line[position] != ',')
                                            hobby.push_back(line[position]);
                                        else {
                                            peopleCard[i].InsertHobby(hobby);
                                            hobby = "";
                                            spaceTag = true;
                                        }
                                        position++;
                                    }
                                    if(hobby != "")
                                        peopleCard[i].InsertHobby(hobby);
                                }
            }
            position++;
        }
    }
}

void Decode_Object_to_List(People* peopleCard, string* peopleList, int size) {
    for (int i = 0; i < size; i++) {
        string name = "";
        int age = 0;
        string s_age = "";
        list<string> hobby = {};
        peopleCard[i].GetName(name);
        peopleCard[i].GetAge(age);
        peopleCard[i].GetHobby(hobby);
        float aux = 0;
        string s_aux = "";
        while (age != 0) {
            aux = age % 10;
            s_aux.push_back(aux + '0');
            age /= 10;
        }
        for (int n = s_aux.length(); n > 0; n--)
            s_age.push_back(s_aux[n-1]);

        peopleList[i] = "Name: " + name + ", Age: " + s_age + ", Hobby: ";
        bool flagComma = false;
        for (string s : hobby) {
            if (flagComma == true) {
                peopleList[i].push_back(',');
                peopleList[i].push_back(' ');
            }
            int j = 0;
            while (j < s.length()) {
                peopleList[i].push_back(s[j]);
                j++;
            }
            flagComma = true;
        }
        peopleList[i].push_back('.');
    }
}