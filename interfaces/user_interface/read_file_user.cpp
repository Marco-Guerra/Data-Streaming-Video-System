#include "read_file_user.hpp"

/**
* Funtion: que faz a leitura do arquivo de usuários da identificação de um usuário
* @param {ifstream} - arquivo de entrada
* @returns {string} -
* 
* @precondition: none
* @postcondition: none
*/
string readFileUserIdentification(ifstream &storageUserFile) {

	string line;

	getline(storageUserFile, line);

	line = removeCharacter(line, ' ');
	line = processInput(line);

	return line;
}

/**
* Funtion:  que faz a leitura do arquivo de usuários do nome de um usuário
* @param {ifstream} - arquivo de entrada
* @returns {string} -
* 
* @precondition: none
* @postcondition: none
*/
string readFileUserName(ifstream &storageUserFile) {

    string line;

	getline(storageUserFile, line);

	line = processInput(line);
	line = removeEspaces(line);

	return line;
}

/**
* Funtion:  que faz a leitura do arquivo de usuários do dia da data de aniversario de um usuário
* @param {string} - line
* @returns {int} -
* 
* @precondition: none
* @postcondition: none
*/
int readFileUserDay(string line) {

	int init, length;

	init = (int) line.find('=') + 1;
	length = (int) line.find('/') - init;

	string substring = line.substr(init, length);

	init = stoi(substring, nullptr, 10);

	return init;

}

/**
* Funtion:  que faz a leitura do arquivo de usuários do mes da data de aniversario de um usuário
* @param {string} - line
* @returns {int} -
* 
* @precondition: none
* @postcondition: none
*/
int readFileUserMonth(string line) {

	int init, length;

	init = (int) line.find('/') + 1;
	length = (int) line.find_last_of('/') - init;

	string substring = line.substr(init, length);

	init = stoi(substring, nullptr, 10);
	
	return init;

}

/**
* Funtion:  que faz a leitura do arquivo de usuários do ano da data de aniversario de um usuário
* @param {string} - line
* @returns {int} -
* 
* @precondition: none
* @postcondition: none
*/
int readFileUserYear(string line) {

	int init, length;

	init = (int) line.find_last_of('/') + 1;
	length = (int) line.find(';') - init;

	string substring = line.substr(init, length);

	init = stoi(substring, nullptr, 10);

	return init;

}

/**
* Funtion:  que faz a leitura do arquivo de usuários do ano da data de aniversario de um usuário
* @param {ifstream} - arquivo de entrada
* @returns {DateOfBirthStructure} - retorna a data de nascimento de um usuário
* 
* @precondition: none
* @postcondition: none
*/
DateOfBirthStructure readFileUserDateOfBirth(ifstream &storageUserFile) {

	string line;
	DateOfBirthStructure data;

	getline(storageUserFile,line);

	line = removeEspaces(line);

	data.day = readFileUserDay(line);
	data.month = readFileUserMonth(line);
	data.year = readFileUserYear(line);

	return data;
}

/**
* Funtion: que retorna apenas o ID, sem caracteres desnecessários
* @param {string} - line
* @returns {string} - retorna ID do usuário
* 
* @precondition: none
* @postcondition: none
*/
string processHistory (string line) {

	string subString = line.substr( 0 , line.find(","));

	return subString;

}

/**
* Funtion: que acha um ID no histórico, caso contrario retorna falso
* @param {ifstream} - arquivo de entrada
* @param {string} - line
* @returns {bool} - encontra um ID no histórico
* 
* @precondition: none
* @postcondition: none
*/
bool readFileUserHistory(ifstream &storageUserFile, string &line) {

	string auxiliaryLine;

	getline(storageUserFile, auxiliaryLine);

	if (auxiliaryLine == "}") {
		return false;
	}

	line = auxiliaryLine.substr(auxiliaryLine.find(' ') + 1);

	return true;
}

/**
* Funtion: que faz a leitura do arquivo de usuários da identificação dos vídeos visto por um usuário
* @param {ifstream} - arquivo de entrada
* @returns {HistoryStructure} - retorna o arquivo de usuários que contém o histórico de vídeos assistidos	
* 
* @precondition: none
* @postcondition: none
*/
HistoryStructure readFileUserVideosIdentifications(ifstream &storageUserFile) {

	string line;
	HistoryStructure history;

	int i;

	getline(storageUserFile, line);

	if (line != "history = {") {
		return history;
	}

	for (i = 0; readFileUserHistory(storageUserFile, line); i++) {
		history.videoIdentifications[i] = processHistory(line);
	}

	history.historyLenght = i;

	return history;

}

/**
* Funtion: para encontrar o ultimo fechamento de chaves
* @param {ifstream} - arquivo de entrada
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void findEndOfStructureUser (ifstream &storageUserFile) {

	string line;

	getline(storageUserFile, line);

	while(line != "}") {
		getline(storageUserFile, line);
	}

	return;
}

/**
* Funtion: que faz a leitura do arquivo de usuários de um usuário
* @param {ifstream} - arquivo de entrada
* @returns {UserDocumentStructure} - retorna um usuário
* 
* @precondition: none
* @postcondition: none
*/
UserDocumentStructure readFileUser(ifstream &storageUserFile) {
	
	UserDocumentStructure user;

	user.identification = readFileUserIdentification(storageUserFile);
	user.name = readFileUserName(storageUserFile);
	user.date = readFileUserDateOfBirth(storageUserFile);
	user.history = readFileUserVideosIdentifications(storageUserFile);

    findEndOfStructureUser(storageUserFile);

	return user;

}

/**
* Funtion: que acha o fim da struct
* @param {ifstream} - arquivo de entrada
* @returns {bool} - retorna true caso ache o fim da struct ou false caso ache o fim do arquivo
* 
* @precondition: none
* @postcondition: none
*/
bool findBeginOfStructureUser(ifstream &storageUserFile) {
	
	string line;

	while(!storageUserFile.eof()) {

		getline(storageUserFile, line);

		if (line == "{") {
			return true;
		}
	}
	return false;
}


/**
* Funtion: que faz a leitura do arquivo de usuários de todos os usuário
* @param {string} - nome do arquivo
* @returns {UserListDocumentStructure} - retorna os dados de todos os usuários
* 
* @precondition: none
* @postcondition: none
*/
UserListDocumentStructure readFileUserList(string storageUserFileName) {

	ifstream storageUserFile;
	UserListDocumentStructure userList;
	int i;

	storageUserFile.open(storageUserFileName);

	if( !storageUserFile.is_open() ) {
		cout << "Falha ao abrir o arquivo, nome inválido\n";
		exit(0);
	}

	for (i = 0; findBeginOfStructureUser(storageUserFile); i++) {
		userList.usersList[i] = readFileUser(storageUserFile);
	}

	userList.numberOfUsers = i;
	
	return userList;
}
