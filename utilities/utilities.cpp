#include "utilities.hpp"

// função que processa linhas de entrada
string processInput(string line) {
	
	int position;
	
	position = (line.find("=")) + 1;
	
	// substr((int) índice do inicio da substring, (int) tamanho da substring)
	
	return line.substr( position, (line.size() - position - 1));
}

// função que remove um determinado caractere de uma cadeia de caracteres
string removeCharacter(string line, char character) {

    string newLine = "";

    for (int i = 0; i < (int)line.size(); i++) {
        if (line[i] != character) {
            newLine += line[i];
        }
    }
    
    return newLine;
}

// 
string removeEspaces(string line) {
	
	string newLine;

	int i = 0;

	while(line[i] == ' ') {
		i++;
	}

	for (; i < (int)line.size(); i++) {
		if (line[i] != ' ' || line[i - 1] != ' ') {
			newLine += line[i];
		}
	}

	for (i = line.size(); line[i] == ' '; i--) {
		;
	}

	return newLine.substr(0, i);
}

// função que verifica se todos os caracteres de uma cadeia são números ou letras
bool stringIsAlNum (string line) {
	for (int i = 0; i < (int)line.size(); i++) {
		if (!isalnum(line[i])) {
			return false;
		}
	}
	return true;
}

// função que verifica se todos os caracteres de uma cadeia são letras
bool stringIsAlpha (string line) {
	for (int i = 0; i < (int)line.size(); i++) {
		if (!isalpha(line[i])) {
			return false;
		}
	}
	return true;
}
