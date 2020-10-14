#include "print_file_user.hpp"

// função que imprime no arquivo de usuários a identificação de um usuário
void printFileUserIdentificatio(string identification, ofstream &storageUserFile) {

     storageUserFile << "identification = " << identification << ";" << endl;

}

// função que imprime no arquivo de usuários o nome de um usuário
void printFileUserName(string username, ofstream &storageUserFile) {

    storageUserFile << "UserName = " << username << ";" << endl;

}

// função que imprime no arquivo de usuários a data de aniversario de um usuário
void printFileUserDateOfBirth(DateOfBirthStructure date, ofstream &storageUserFile) {

	 storageUserFile << "date = " << date.day << " / " << date.month << " / " << date.year << ";" << endl;

}

// função que imprime no arquivo de usuários a identificação dos vídeos visto por um usuário
void printFileUserVideosIdentifications(HistoryStructure history, ofstream &storageUserFile) {

	storageUserFile << "history = {" << endl;

	for (int i = 0; i < history.historyLenght; i++) {
		storageUserFile << history.videoIdentifications[i] << "," << endl;
	}

	storageUserFile << "}" << endl;
}

// função que imprime no arquivo de usuários um usuário
void printFileUser(UserDocumentStructure user, ofstream &storageUserFile) {

    printFileUserIdentificatio(user.identification, storageUserFile);

	printFileUserName(user.name, storageUserFile);

	printFileUserDateOfBirth(user.date, storageUserFile);

	printFileUserVideosIdentifications(user.history, storageUserFile);
}

// função que imprime no arquivo de usuários todos os usuário
void printFileUserList(UserListDocumentStructure userList, string storageUserFileName) {

    ofstream storageUserFile;
	storageUserFile.open(storageUserFileName);

	for (int i = 0; i < userList.numberOfUsers; i++) {
		storageUserFile << "{" << endl;

		printFileUser(userList.usersList[i] , storageUserFile);
		
		storageUserFile << "}" << endl;
	}

	storageUserFile.close();
}
