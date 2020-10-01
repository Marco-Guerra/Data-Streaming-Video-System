#ifndef PRINT_STDIO_USER
#define PRINT_STDIO_USER

#include <iostream>
#include <string>
#include "../../structures/user_structure.hpp"

void printUserIdentification(string identification);

void printUserName(string name);

void printDay(int day);

void printMonth(int month);

void printYear(int year);

void printDateOfBirth(DateOfBirthStructure dateOfBirth);

void printVideoIdentification(string identification);

void printNumberOfVideoIdentification(int historyLenght);

void printHistory(HistoryStructure history);

void printUser(UserDocumentStructure user);

#endif
