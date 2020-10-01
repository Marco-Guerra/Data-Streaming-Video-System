#include "print_stdio_user.hpp"

using namespace std;

void printUserIdentification(string identification) {

    cout << "Identificação: " << identification << endl;

}

void printUserName(string name) {

    cout << "Nome: " << name << endl;

}

void printDay(int day) {

    cout << "Dia: " << day << endl;

}

void printMonth(int month) {

    cout << "Mês: " << month << endl;

}

void printYear(int year) {

    cout << "Ano: " << year << endl;

}

void printDateOfBirth(DateOfBirthStructure dateOfBirth) {

    cout << "Data de nascimento: " << dateOfBirth.day << " / " << dateOfBirth.month << " / " << dateOfBirth.year << "." << endl;

}

void printVideoIdentification(string identification, int position) {

    cout << "Identificação do vídeo " << position << ": " << identification << "." << endl;

}

void printNumberOfVideoIdentification(int historyLenht) {

    cout << "Quantidade de vídeos no historial: " << historyLenht << endl;

}

void printHistory(HistoryStructure history) {

    printNumberOfVideoIdentification (history.historyLenght);

    for (int i = 0; i < history.historyLenght; i++) {
        printVideoIdentification(history.videoIdentifications[i], i + 1 );
    }

}

void printUser(UserDocumentStructure user) {
    
    printUserIdentification(user.identification);
    
    printUserName(user.name);

    printDateOfBirth(user.date);

    printVideoIdentification(user.identification);

    printHistory(user.history);
}
