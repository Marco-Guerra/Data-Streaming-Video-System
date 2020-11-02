#ifndef MENU_UTILITIES
#define MENU_UTILITIES

#define UP_DEFAULT 'w'
#define DOWN_DEFAULT 's'
#define RIGHT_DEFAULT 'd'
#define LEFT_DEFAULT 'a'

#define UP_VIM 'k'
#define DOWN_VIM 'j'

#define ENTER 10

#include <iostream>
#include <limits>
#include <unistd.h>
#include <termios.h>

//#include "menu_utilities.hpp"

using namespace std;

// função que marca com 'x' a opção em que o usuário se encontra
void selectedOption(bool selected);

// realizar a leitura de um ùnico carater, retorna o carater lido
char getChar();

// imprimir linha de delimitação do menu
void line (int lineLength);

// realizar o prenchimento de espaços em branco
void fillSpaces (int numberOfSpaces);

#endif
