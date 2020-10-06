#include "print_stdio_user.hpp"

// função que imprime na saída estandar a identificação de um usuário
void printStdioUserIdentificatio(string identification) {

    cout << "Identificação do usuário: " << identification << endl;

}

// função que imprime na saída estandar o nome de um usuário
void printStdioUserName(string name) {

    cout << "Nome do usuário: " << name << endl;

}

// função que imprime na saída estandar o dia da data de aniversario de um usuário
void printStdioUserDay(int day) {

    cout << "Dia de nascimento do usuário: " << day << endl;

}

// função que imprime na saída estandar o mes da data de aniversario de um usuário
void printStdioUserMonth(int month) {

    cout << "Mes de nascimento do usuário: " << month << endl;

}

// função que imprime na saída estandar o ano da data de aniversario de um usuário
void printStdioUserYear(int year) {

    cout << "Ano de nascimento do usuário: " << year << endl;

}

// função que imprime na saída estandar a data de aniversario de um usuário
void printStdioUserDateOfBirth(DateOfBirthStructure dateOfBirth) {

    cout << "Data de nascimento do usuário: " << dateOfBirth.day << " / " << dateOfBirth.month << " / " << dateOfBirth.year << "." << endl;

}

// função que imprime na saída estandar a identificação de um vídeo visto por um usuário
void printStdioUserVideosIdentification(string videoIdentification, int videoNumber) {

    cout << "Identificação do vídeo " << videoNumber << ": " << videoIdentification << "." << endl;

}


// função que imprime na saída estandar a identificação dos vídeos visto por um usuário
void printStdioUserVideosIdentifications(HistoryStructure history) {

    for(int i = 0; i < history.historyLenght; i++) {
        printStdioUserVideosIdentification( history.videoIdentifications[i], i + 1);
    }

}

// função que imprime na saída estandar o tamanho do histórico de vídeos de um usuário
void printStdioUserHistoryLenght(int historyLenght) {
    
    cout << "Quantidade de vídeos no histórico do usuário: " << historyLenght << endl;

}

// função que imprime na saída estandar um usuário
void printStdioUser(UserDocumentStructure user) {

    printStdioUserIdentificatio(user.identification);
    printStdioUserName(user.name);
    printStdioUserDateOfBirth(user.date);
    printStdioUserHistoryLenght(user.history.historyLenght);
    printStdioUserVideosIdentifications(user.history);
}

// função que imprime na saída estandar todos os usuário
void printStdioUserList(UserDocumentStructure userList[]) {

    //for(int i = 0; i < )

}