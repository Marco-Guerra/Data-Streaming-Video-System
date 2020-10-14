#include "read_file_user.hpp"

// função que faz a leitura do arquivo de usuários da identificação de um usuário
string readFileUserIdentification(ifstream &storageUserFile) {

	string line;

	getline(storageUserFile, line);

	line = removeCharacter(line, ' ');
	line = processInput(line);

	return line;
}


// função que faz a leitura do arquivo de usuários do nome de um usuário
string readFileUserName(ifstream &storageUserFile) {

    string line;

	getline(storageUserFile, line);

	line = processInput(line);
	line = removeEspaces(line);

	return line;
}

// função que faz a leitura do arquivo de usuários do dia da data de aniversario de um usuário
int readFileUserDay(string line) {

	int init, length;

	init = (int) line.find('=') + 1;
	length = (int) line.find('/') - init;

	string substring = line.substr(init, length);

	init = stoi(substring, nullptr, 10);

	return init;

}

// função que faz a leitura do arquivo de usuários do mes da data de aniversario de um usuário
int readFileUserMonth(string line) {

	int init, length;

	init = (int) line.find('/') + 1;
	length = (int) line.find_last_of('/') - init;

	string substring = line.substr(init, length);

	init = stoi(substring, nullptr, 10);
	
	return init;

}

// função que faz a leitura do arquivo de usuários do ano da data de aniversario de um usuário
int readFileUserYear(string line) {

	int init, length;

	init = (int) line.find_last_of('/') + 1;
	length = (int) line.find(';') - init;

	string substring = line.substr(init, length);

	init = stoi(substring, nullptr, 10);

	return init;

}

// função que faz a leitura do arquivo de usuários da data de aniversario de um usuário
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

// função que retorna apenas o ID, sem caracteres desnecessários
string processHistory (string line) {

	string subString = line.substr( 0 , line.find(","));

	return subString;

}

// acha um ID no histórico, caso contrario retorna falso
bool readFileUserHistory(ifstream &storageUserFile, string &line) {

	string auxiliaryLine;

	getline(storageUserFile, auxiliaryLine);

	if (auxiliaryLine == "}") {
		return false;
	}

	line = auxiliaryLine.substr(auxiliaryLine.find(' ') + 1);

	return true;
}

// função que faz a leitura do arquivo de usuários da identificação dos vídeos visto por um usuário
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

// encontrar o ultimo fechamento de chaves
void findEndOfStructureUser (ifstream &storageUserFile) {

	string line;

	getline(storageUserFile, line);

	while(line != "}") {
		getline(storageUserFile, line);
	}

	return;
}

// função que faz a leitura do arquivo de usuários de um usuário
UserDocumentStructure readFileUser(ifstream &storageUserFile) {
	
	UserDocumentStructure user;

	user.identification = readFileUserIdentification(storageUserFile);
	user.name = readFileUserName(storageUserFile);
	user.date = readFileUserDateOfBirth(storageUserFile);
	user.history = readFileUserVideosIdentifications(storageUserFile);

    findEndOfStructureUser(storageUserFile);

	return user;

}

// acha o fim da struct
// true caso ache
// false caso ache o fim do arquivo
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


// função que faz a leitura do arquivo de usuários de todos os usuário
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
