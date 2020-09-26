#ifndef READ_STDIO_USER
#define READ_STDIO_USER

#include <iostream>
#include <string>
#include "../../structures/user_structure.h"

using namespace std;

void readUserIdentification(string identification);

void readUserName(string name);

void readDay(int day);

void readMonth(int month);

void readYear(int year);

void readDateOfBirth(DateOfBirthStructure dateOfBirth);

void readVideoIdentificationForUser(string identification);

void readNumberOfVideoIdentification(int numberOfVideoIdentification);

void readHistory(HistoryStructure historyStructure);

#endif