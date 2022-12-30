#include "Package.h"

unsigned int intInput() {
	unsigned int arraySize = 50;
	char* userValue = new char[arraySize];
	bool error;
	do {
		error = false;
		for (unsigned int i = 0; i < arraySize; i++)
			userValue[i] = NULL;
		cin >> userValue;
		for (unsigned int i = 0; i < arraySize; i++) {
			if (userValue[i] == NULL)
				break;
			if (userValue[i] < '0' || userValue[i] > '9') {
				error = true;
				cout << "WRONG - Insert again!" << endl;
				break;
			}
		}
	} while(error);
	unsigned int intNumber = 0;
	for (unsigned int i = 0; i < arraySize; i++) {
		if (userValue[i] == NULL)
			break;
		intNumber *= 10;
		intNumber += (userValue[i] - '0');
	}
	delete[] userValue;
	userValue = NULL;
	return intNumber;
}

string stringInput() {
	unsigned int arraySize = 50;
	char* strUserValue = new char[arraySize];
	for (unsigned int i = 0; i < arraySize; i++)
		strUserValue[i] = NULL;
	cin >> strUserValue;
	string strValue = {};

	for (unsigned int i = 0; i < arraySize; i++) {
		if (strUserValue[i] == NULL)
			break;
		strValue.push_back(strUserValue[i]);
		cout << i << "-";
	}

	system("pause>0");

	delete[] strUserValue;
	strUserValue = NULL;
	return strValue;
}