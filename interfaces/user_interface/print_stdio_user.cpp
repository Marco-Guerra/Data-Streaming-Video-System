#include "print_stdio_user.hpp"

/**
* Funtion: que imprime na saída estândar a identificação de um usuário
* @param {string} - identificação do usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioUserIdentification(string identification) {

    cout << "   Identificação do usuário: " << identification << endl << endl;

}

/**
* Funtion: que imprime na saída estândar o nome de um usuário
* @param {string} - nome do usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioUserName(string name) {

    cout << "   Nome do usuário: " << name << endl << endl;

}

/**
* Funtion: que imprime na saída estândar o dia da data de aniversario de um usuário
* @param {int} - valor inteiro que representa o dia de nascimento do usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioUserDay(int day) {

    cout << "   Dia de nascimento do usuário: " << day << endl << endl;
    
}

/**
* Funtion: que imprime na saída estândar o mês da data de aniversario de um usuário
* @param {int} - valor inteiro que representa a mês de nascimento do usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioUserMonth(int month) {

    cout << "   Mês de nascimento do usuário: " << month << endl << endl;

}

/**
* Funtion: que imprime na saída estândar o ano da data de aniversario de um usuário
* @param {int} - valor inteiro que representa a ano de nascimento do usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioUserYear(int year) {

    cout << "   Ano de nascimento do usuário: " << year << endl << endl;

}

/**
* Funtion: que imprime na saída estândar a data de aniversario de um usuário
* @param {DateOfBirthStructure} - data de nascimento do usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioUserDateOfBirth(DateOfBirthStructure dateOfBirth) {

    cout << "   Data de nascimento do usuário: " 
         << dateOfBirth.day << " / " 
         << dateOfBirth.month << " / " 
         << dateOfBirth.year << endl << endl;

}

/**
* Funtion: que imprime na saída estândar a identificação de um vídeo visto por um usuário
* @param {string} - identificação do vídeo
* @param {int} - valor inteiro que representa o número de vídeos que o usuário assistiu
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioUserVideosIdentification(string videoIdentification, int videoNumber) {

    cout << "       Identificação do vídeo " << videoNumber << ": " << videoIdentification << endl << endl;

}

/**
* Funtion: que imprime na saída estândar a identificação dos vídeos visto por um usuário
* @param {HistoryStructure} - histórico do usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioUserVideosIdentifications(HistoryStructure history) {

    for(int i = 0; i < history.historyLenght; i++) {
        printStdioUserVideosIdentification( history.videoIdentifications[i], i + 1);
    }

}

/**
* Funtion: que imprime na saída estândar a identificação dos vídeos visto por um usuário
* @param {int} - valor inteiro que represeta o tamanho do histórico do usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioUserHistoryLenght(int historyLenght) {
    
    cout << "   Quantidade de vídeos no histórico do usuário: " << historyLenght << endl << endl;

}

/**
* Funtion: que imprime na saída estândar um usuário
* @param {UserDocumentStructure} - todos os dados de um usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioUser(UserDocumentStructure user) {

    cout << endl
		 << "----------------------------------------" << endl << endl;

    printStdioUserIdentification(user.identification);
    printStdioUserName(user.name);
    printStdioUserDateOfBirth(user.date);
    printStdioUserVideosIdentifications(user.history);

    cout << endl
		 << "----------------------------------------" << endl << endl;
}

/**
* Funtion: que imprime na saída estândar todos os usuário
* @param {UserListDocumentStructure} - vetor que contém a quantidade de todos os usuários 
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioUserList(UserListDocumentStructure userList) {

    for(int i = 0; i < userList.numberOfUsers; i++){

        cout << "User num: " << i + 1 << endl;

    	printStdioUser (userList.usersList[i]);
    }

}
