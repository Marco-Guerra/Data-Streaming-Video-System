#include "utilities.hpp"

string processInput(string s) {
	int aux = ((s.find("=")) + 1);
	// substr((int) índice do inicio da substring, (int) tamanho da substring)
	return s.substr( aux, (s.size() - aux - 1));
}

string removeStringDelimitator(string line, char delimitator) {

    string newLine = "";

    for (int i = 0; i < (int)line.size(); i++) {
        if (line[i] != delimitator) {
            newLine += line[i];
        }
    }
    
    return newLine;
}

string removeEspaces(string s) {
	string aux;
	int i = 0;
	while(s[i] == ' ') {
		i++;
	}
	for (; i < (int)s.size(); i++) {
		if (s[i] != ' ' || s[i - 1] != ' ') {
			aux += s[i];
		}
	}
	for (i = s.size(); s[i] == ' '; i--) {
		;
	}
	return aux.substr(0, i);
}


bool stringIsAlNum (string s) {
	for (int i = 0; i < (int)s.size(); i++) {
		if (!isalnum(s[i])) {
			return false;
		}
	}
	return true;
}


bool stringIsAlpha (string s) {
	for (int i = 0; i < (int)s.size(); i++) {
		if (!isalpha(s[i])) {
			return false;
		}
	}
	return true;
}



void errorMessagesRead(int code, string mensage) {
	switch(code) {
		case 0:
			cout << "Você está usando o programa de forma errada!\n"
				<< "Por favor rode:\n"
				<< "[nome do programa] [nome do arquivo com os dados]\n";
			break;
		case 1:
			cout << "Falha na abertura do arquivo\n";
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
	}
}