#include "menu_controller.hpp"

// função que marca com 'x' a opção em que o usuário se encontra
/**
* Funtion: 
* @param {} - 
* @param {} - 
* @returns {} - 
* 
* @precondition: 
* @postcondition: 
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

// realizar a leitura de um ùnico carater, retorna o carater lido
/**
* Funtion: 
* @param {} - 
* @param {} - 
* @returns {} - 
* 
* @precondition: 
* @postcondition: 
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

// imprimir linha de delimitação do menu
/**
* Funtion: 
* @param {} - 
* @param {} - 
* @returns {} - 
* 
* @precondition: 
* @postcondition: 
*/
void line (int lineLength) {

	cout << "|";

	for (int i = 0; i < lineLength; i++) {
		cout << "-";
	}

	cout << "|\n";
}

// realizar o prenchimento de espaços em branco
/**
* Funtion: 
* @param {} - 
* @param {} - 
* @returns {} - 
* 
* @precondition: 
* @postcondition: 
*/
void fillSpaces (int numberOfSpaces) {
	
	for (int i = 0; i < numberOfSpaces; i++) {
		cout << ' ';
	}
}
