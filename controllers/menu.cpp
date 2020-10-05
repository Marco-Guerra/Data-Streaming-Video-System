#include "menu.hpp"

char getchChar() {
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

void linha (int tam_linha) {
	cout << "|";
	for (int i = 0; i < tam_linha; i++) {
		cout << "-";
	}
	cout << "|\n";
}

void preencheEspaco (int n) {
	for (int i = 0; i < n; i++) {
		cout << ' ';
	}
}

void opcoes (int escolha) {
	linha(13);
	for (int i = 0; i < 5; i++) {
		cout << "| [";
		if (i == escolha) {
			cout << 'x';
		}else {
			cout << ' ';
		}
		cout << "] Opção " << (char)('A' + i) << " |\n";
	}
	linha(13);
}

void mensagemInicial () {
	linha(36);
	cout << "| Utilize as teclas do vim ou [wasd] |\n";
	cout << "| Para se movimentar no menu";
	preencheEspaco(9);
	cout << "|\n";
	linha(36);
	cout << endl << endl;
}

int menu () {
	int resposta;
	int opcao = 0;
	mensagemInicial();
	opcoes(opcao);
	while(1) {
		resposta = getchChar();
		if (resposta == CIMA_VIM || resposta == CIMA_PADRAO) {
			opcao--;
		}else if (resposta == BAIXO_VIM || resposta == BAIXO_PADRAO){
			opcao++;
		}else if (resposta == ENTER) {
			break;
		}else {
			cout << "Tecla invalida tente novamente\n";
			continue;
		}
		system("clear");
		opcoes(opcao);
	}
	return opcao;
}

