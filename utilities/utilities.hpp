#ifndef UTILITIES
#define UTILITIES

#include <iostream>
#include <string>

using namespace std;

string processInput(string s);

string removeStringDelimitator(string line, char delimitator = ' ');

bool stringIsAlNum (string s);

bool stringIsAlpha (string s);

void errorMessagesRead(int code, string mensage = "");

#endif
