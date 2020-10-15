#include "print_file_user.hpp"

/**
* Funtion: que imprime no arquivo de usuários a identificação de um usuário
* @param {string} - identificação do usuário
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileUserIdentificatio(string identification, ofstream &storageUserFile) {

     storageUserFile << "identification = " << identification << ";" << endl;

}

/**
* Funtion: que imprime no arquivo de usuários o nome de um usuário
* @param {string} - nome do usuário
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileUserName(string username, ofstream &storageUserFile) {

    storageUserFile << "UserName = " << username << ";" << endl;

}

/**
* Funtion: que imprime no arquivo de usuários a data de aniversario de um usuário
* @param {DateOfBirthStructure} - data de nascimento do usuário
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileUserDateOfBirth(DateOfBirthStructure date, ofstream &storageUserFile) {

	 storageUserFile << "date = " << date.day << " / " << date.month << " / " << date.year << ";" << endl;

}

/**
* Funtion: que imprime no arquivo de usuários a identificação dos vídeos visto por um usuário
* @param {HistoryStructure} - histórico do usuário
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileUserVideosIdentifications(HistoryStructure history, ofstream &storageUserFile) {

	storageUserFile << "history = {" << endl;

	for (int i = 0; i < history.historyLenght; i++) {
		storageUserFile << history.videoIdentifications[i] << "," << endl;
	}

	storageUserFile << "}" << endl;
}

/**
* Funtion: que imprime no arquivo de usuários um usuário
* @param {UserDocumentStructure} - todos os dados do usuário
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileUser(UserDocumentStructure user, ofstream &storageUserFile) {

    printFileUserIdentificatio(user.identification, storageUserFile);

	printFileUserName(user.name, storageUserFile);

	printFileUserDateOfBirth(user.date, storageUserFile);

	printFileUserVideosIdentifications(user.history, storageUserFile);
}

/**
* Funtion: que imprime no arquivo de usuários todos os usuário
* @param {UserListDocumentStructure} - número de usuários
* @param {string} - representa o nome do arquivo
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
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
