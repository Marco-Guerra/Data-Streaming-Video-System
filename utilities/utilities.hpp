#ifndef UTILITIES
#define UTILITIES

#include <iostream>
#include <string>

using namespace std;

// função que processa linhas de entrada
string processInput(string line);

// função que remove um determinado caractere de uma cadeia de caracteres
string removeCharacter(string line, char character);

// 
string removeEspaces(string line);

// função que verifica se todos os caracteres de uma cadeia são números ou letras
bool stringIsAlNum (string line);

// função que verifica se todos os caracteres de uma cadeia são letras
bool stringIsAlpha (string line);


#endif
