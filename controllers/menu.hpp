#ifndef MENU
#define MENU
#include <iostream>
#include <limits>
#include <unistd.h>
#include <termios.h>

using namespace std;

//#define cima 65
//#define baixo 66
//#define direita 67
//#define esquerda 68

#define CIMA_PADRAO 'w'
#define BAIXO_PADRAO 's'
#define DIREITA_PADRAO 'd'
#define ESQUERDA_PADRAO 'a'

#define CIMA_VIM 'k'
#define BAIXO_VIM 'j'
#define DIREITA_VIM 'l'
#define ESQUERDA_VIM 'h'

#define ENTER 10

char getChar();

void linha (int tam_linha);

void preencheEspaco (int n);

void opcoes (int escolha);

void mensagemInicial ();

int menu();

#endif
