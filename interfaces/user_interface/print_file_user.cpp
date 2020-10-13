#include "print_file_user.hpp"

// função que imprime no arquivo de usuários a identificação de um usuário
void printFileUserIdentificatio(string identification, ofstream &file) {
     file << "identification = " << identification << ";" << endl;
}

// função que imprime no arquivo de usuários o nome de um usuário
void printFileUserName(string username, ofstream &file) {
    file << "UserName = " << username << ";" << endl;

}

// função que imprime no arquivo de usuários a data de aniversario de um usuário
void printFileUserDateOfBirth(DateOfBirthStructure date, ofstream &file) {
	 file << "date = " << date.day << " / " << date.month << " / " << date.year << ";\n";

}

// função que imprime no arquivo de usuários a identificação dos vídeos visto por um usuário
void printFileUserVideosIdentifications(HistoryStructure history, ofstream &file) {
	file << "history = {\n";
	for (int i = 0; i < history.historyLenght; i++) {
		file << history.videoIdentifications[i] << "," << endl;
	}
	file << "}\n";


}

// função que imprime no arquivo de usuários um usuário
void printFileUser(UserDocumentStructure user, ofstream &file) {
    printFileUserIdentificatio(user.identification, file);
	printFileUserName(user.name, file);
	printFileUserDateOfBirth(user.date, file);
	printFileUserVideosIdentifications(user.history,file);

}

// função que imprime no arquivo de usuários todos os usuário
void printFileUserList(UserListDocumentStructure vetor, string file_path) {

    ofstream output_file;
	output_file.open(file_path);

	for (int i = 0; i < vetor.numberOfUsers; i++) {
		output_file << "{\n";
		printFileUser(vetor.usersList[i] , output_file);
		output_file << "}\n";
	}

	output_file.close();

   }
