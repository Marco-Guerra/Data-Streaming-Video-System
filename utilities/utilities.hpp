#ifndef UTILITIES
#define UTILITIES

#include <iostream>
#include <string>

using namespace std;

// função que processa linhas de entrada
string processInput(string line);

// função que remove um determinado caracter de uma cadeia de caracteres
string removeCharacter(string line, char character);

// 
string removeEspaces(string line);

// funue que verifica se todos os caraceteres de uma cadeia são numeros ou letras
bool stringIsAlNum (string line);

// função que verifica se todos os caraceteres de uma cadeia são letras
bool stringIsAlpha (string line);


#endif