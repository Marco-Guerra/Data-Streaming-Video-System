#ifndef USER_VALIDATOR
#define USER_VALIDATOR

bool validateUserIdentification(string identification);

bool validateUserName(string name);

bool validateDay(int day);

bool validateMonth(int month);

bool validateYear(int year);

bool validateDateOfBirth(DateOfBirthStructure dateOfBirth);

bool validateVideoIdentification(string identification);

bool validateNumberOfVideoIdentification(int numberOfVideoIdentification);

bool validateHistory(HistoryStructure historyStructure);

#endif