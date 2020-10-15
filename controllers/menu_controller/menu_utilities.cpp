#include "menu_controller.hpp"

/**
* Funtion: que marca com 'x' a opção em que o usuário se encontra
* @param {bool} - opsão escolhida pelo usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void selectedOption(bool selected) {
    
    cout << " [";
    
    if( selected ) {
        cout << "x";
    }else{
        cout << " ";
    }
    
    cout << "] ";
}

/**
* Funtion: realizar a leitura de um ùnico carater, retorna o carater lido
* @returns {char} - caracter lido do teclado
* 
* @precondition: none
* @postcondition: none
*/
char getChar() {

	char character = 0;
	struct termios old = {0};

	fflush(stdout);

	if(tcgetattr(0, &old)<0) {
		perror("tcsetattr()");
	}

	old.c_lflag&=~ICANON;
	old.c_lflag&=~ECHO;
	old.c_cc[VMIN]=1;
	old.c_cc[VTIME]=0;

	if(tcsetattr(0, TCSANOW, &old)<0) {
		perror("tcsetattr ICANON");
	}

	if(read(0,&character,1)<0) {
		perror("read()");
	}

	old.c_lflag|=ICANON;
	old.c_lflag|=ECHO;

	if(tcsetattr(0, TCSADRAIN, &old)<0) {
		perror ("tcsetattr ~ICANON");
	}

	return character;
}

/**
* Funtion: imprimir linha de delimitação do menu
* @param {int} - tamanho da linha
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void line (int lineLength) {

	cout << "|";

	for (int i = 0; i < lineLength; i++) {
		cout << "-";
	}

	cout << "|\n";
}

/**
* Funtion: realizar o prenchimento de espaços em branco
* @param {int} - número de espaços em branco a preencher
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void fillSpaces (int numberOfSpaces) {
	
	for (int i = 0; i < numberOfSpaces; i++) {
		cout << ' ';
	}
}
