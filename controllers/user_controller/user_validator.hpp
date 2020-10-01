#ifndef USER_VALIDATOR
#define USER_VALIDATOR

#include <iostream>
#include <string>
#include "../../structures/user_structure.hpp"

using namespace std;

bool validateUserIdentification(string identification);

bool validateUserName(string name);

bool validateDay(int day);

bool validateMonthpp(int month);

bool validateYear(int year);

bool validateDateOfBirth(DateOfBirthStructure dateOfBirthpp);

bool validateVideoIdentificationForUser(string identification);

bool validateNumberOfVideoIdentification(int numberOfVideoIdentification);

bool validateHistory(HistoryStructure historyStructure);

#endif