#include "read_file_user.hpp"

// função que faz a leitura do arquivo de usuários da identificação de um usuário
string readFileUserIdentification(ifstream &fn) {
	string aux;
	getline(fn, aux);
	aux = removeCharacter(aux, ' ');
	aux = processInput(aux);
	return aux;
}


// função que faz a leitura do arquivo de usuários do nome de um usuário
string readFileUserName(ifstream &fn) {
    string aux;
	getline(fn, aux);
	aux = processInput(aux);
	aux = removeEspaces(aux);
	return aux;
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
DateOfBirthStructure readFileUserDateOfBirth(ifstream &fn) {
	string aux;
	DateOfBirthStructure data;
	getline(fn,aux);
	aux = removeEspaces(aux);
	data.day = readFileUserDay(aux);
	data.month = readFileUserMonth(aux);
	data.year = readFileUserYear(aux);

	return data;
}

// função que retorna apenas o ID, sem caracteres desnecessários
string processHistory (string s) {
	return s.substr( 0 , s.find(","));
}

// acha um ID no histórico, caso contrario retorna falso
bool readFileUserHistory(ifstream &fn, string &id) {
	string aux;
	getline(fn, aux);
	if (aux == "}") {
		return false;
	}
	id = aux.substr(aux.find(' ') + 1);
	return true;
}

// função que faz a leitura do arquivo de usuários da identificação dos vídeos visto por um usuário
HistoryStructure readFileUserVideosIdentifications(ifstream &fn) {
	string aux;
	HistoryStructure history;
	int i;
	getline(fn, aux);
	if (aux != "history = {") {
		return history;
	}

	for (i = 0; readFileUserHistory(fn, aux); i++) {
		history.videoIdentifications[i] = processHistory(aux);
	}

	history.historyLenght = i;

	return history;

}

// encontrar o ultimo fechamento de chaves
void findEndOfStructureUser (ifstream &fn) {
	string aux;
	getline(fn, aux);
	while(aux != "}") {
		getline(fn, aux);
	}

	return;
}

// função que faz a leitura do arquivo de usuários de um usuário
UserDocumentStructure readFileUser(ifstream &fn) {
	UserDocumentStructure aux;

	aux.identification = readFileUserIdentification(fn);
	aux.name = readFileUserName(fn);
	aux.date = readFileUserDateOfBirth(fn);
	aux.history = readFileUserVideosIdentifications(fn);
    findEndOfStructureUser(fn);

	return aux;

}

// acha o fim da struct
// true caso ache
// false caso ache o fim do arquivo
bool findBeginOfStructureUser(ifstream &fn) {
	string aux;

	while(!fn.eof()) {
		getline(fn, aux);
		if (aux == "{") {
			return true;
		}
	}
	return false;
}


// função que faz a leitura do arquivo de usuários de todos os usuário
UserListDocumentStructure readFileUserList(string file_name) {
	ifstream inputFile;
	UserListDocumentStructure vetor;

	inputFile.open(file_name);

	if( !inputFile.is_open() ) {
		cout << "Falha ao abrir o arquivo, nome inválido\n";
		exit(0);
	}

	int i;

	for (i = 0; findBeginOfStructureUser(inputFile); i++) {
		vetor.usersList[i] = readFileUser(inputFile);
	}
	vetor.numberOfUsers = i;
	return vetor;
}
