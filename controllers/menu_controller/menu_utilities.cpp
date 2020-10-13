#include "menu_utilities.hpp"

#include "menu_controller.hpp"

// função que marca com 'x' a opção em que o usuário se encontra
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
char getChar() {
	char buf=0;
	struct termios old={0};
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
	if(read(0,&buf,1)<0) {
		perror("read()");
	}
	old.c_lflag|=ICANON;
	old.c_lflag|=ECHO;
	if(tcsetattr(0, TCSADRAIN, &old)<0) {
		perror ("tcsetattr ~ICANON");
	}
	return buf;
}

// imprimir linha de delimitação do menu
void line (int tam_linha) {
	cout << "|";
	for (int i = 0; i < tam_linha; i++) {
		cout << "-";
	}
	cout << "|\n";
}

// realizar o prenchimento de espaços em branco
void fillSpaces (int n) {
	for (int i = 0; i < n; i++) {
		cout << ' ';
	}
}
