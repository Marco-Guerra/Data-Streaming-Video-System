#include "read_file_user.hpp"

// função que faz a leitura do arquivo de usuários da identificação de um usuário
string readFileUserIdentificatio() {
	cout << "Insira o ID: ";
	string aux;
	cin >> aux;
	return aux;
}


// função que faz a leitura do arquivo de usuários do nome de um usuário
string readFileUserName() {
 	cout << "Insira o nome de usuário: ";
	string aux;
	getline(cin, aux);
	return aux;
}

// função que faz a leitura do arquivo de usuários do dia da data de aniversario de um usuário
int readFileUserDay() {
    cout << "Insira sua Data de Nascimento: ";
	int aux;
	cin >> aux;
	return aux;
}

// função que faz a leitura do arquivo de usuários do mes da data de aniversario de um usuário
int readFileUserMonth() {
    int aux;
	cin >> aux;
	return aux;
}

// função que faz a leitura do arquivo de usuários do ano da data de aniversario de um usuário
int readFileUserYear() {
    int aux;
	cin >> aux;
	return aux;
}

// função que faz a leitura do arquivo de usuários da data de aniversario de um usuário
DateOfBirthStructure readFileUserDateOfBirth() {
    DateOfBirthStructure aux;
    aux.day = readFileUserDay();
    aux.month = readFileUserMonth();
    aux.year = readFileUserYear();
	return aux;
}

// função que faz a leitura do arquivo de usuários da identificação dos vídeos visto por um usuário
HistoryStructure readFileUserVideosIdentifications() {

}

// função que faz a leitura do arquivo de usuários de um usuário
UserDocumentStructure readFileUser() {
    
	UserDocumentStructure aux;

	aux.identification = readFileUserIdentificatio();
	aux.name = readFileUserName();
	aux.history = readFileUserVideosIdentifications();
	aux.date = readFileUserDateOfBirth();

	return aux;
}
