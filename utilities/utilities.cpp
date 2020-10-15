#include "utilities.hpp"

/**
* Funtion: função que processa linhas de entrada
* @param {string} - uma linha lida do teclado
* @returns {string} - a linha a partir do primeiro igual
* 
* @precondition: none
* @postcondition: none
*/
string processInput(string line) {
	
	int position;
	
	position = (line.find("=")) + 1;
	
	// substr((int) índice do inicio da substring, (int) tamanho da substring)
	
	return line.substr( position, (line.size() - position - 1));
}

/**
* Funtion: função que remove um determinado caractere de uma cadeia de caracteres
* @param {string} - uma linha lida do teclado
* @param {char} - um caractere a ser escluido
* @returns {string} - a linha sem o caracter
* 
* @precondition: none
* @postcondition: none
*/
string removeCharacter(string line, char character) {

    string newLine = "";

    for (int i = 0; i < (int)line.size(); i++) {
        if (line[i] != character) {
            newLine += line[i];
        }
    }
    
    return newLine;
}

/**
* Funtion: Elimina espacos em branco seguidos
* @param {string} - uma linha lida do teclado
* @returns {string} - uma linha sem espacos no comeco no fim e seguidos
* 
* @precondition: none
* @postcondition: none
*/
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

/**
* Funtion: função que verifica se todos os caracteres de uma cadeia são números ou letras
* @param {string} - uma linha lida do teclado
* @returns {bool} - verdade quando a string semente possui caracteres alfabeticos e numericos
* 
* @precondition: none
* @postcondition: none
*/
bool stringIsAlNum (string line) {
	for (int i = 0; i < (int)line.size(); i++) {
		if (!isalnum(line[i])) {
			return false;
		}
	}
	return true;
}

/**
* Funtion: função que verifica se todos os caracteres de uma cadeia são letras
* @param {string} - uma linha lida do teclado
* @returns {bool} - verdade quando a string semente possui caracteres alfabeticos
* 
* @precondition: none
* @postcondition: none
*/
bool stringIsAlpha (string line) {
	for (int i = 0; i < (int)line.size(); i++) {
		if (!isalpha(line[i])) {
			return false;
		}
	}
	return true;
}
