#include "user_validator.hpp"
#include <cctype>

// Imprime as mensagens que encerram o arquivo
void errorMessagesCodeUser(int code, string message) {

    switch(code) {
        case 0:
            cout << "Erro de código de identificação: faltam carateres." << endl;
            break;
        case 1:
            cout << "Erro de código de identificação: a cadeia de entrada ingresada possui carateres inválidos." << endl;
            break;
        case 2:
            cout << "Erro de nome: o nome ingressado n'ao possui nenhum carater." << endl;
            break;
}


bool validateUserIdentification(string identification) {

    if ( identification.size() != 20 ) {
        errorMessagesCodeUser(0, "");
        return 0;
    }

    if ( !isalnum(identification) ) {
        errorMessagesCodeUser(1, "");
        return 0;
    }

    return 1;
}

bool validateUserName(string name) {

    if( name.size() != 0 ) {
        errorMessagesCodeUser(2, "");
        return 0
    }

    if( isalpha(name) ) {
        errorMessagesCodeUser(3, "");
        return 0;
    }

    return 1;
}

bool validateDay(int day) {

    

    return 1;
}

bool validateMonth(int month) {

    return 1;
}

bool validateYear(int year) {

    return 1;
}

bool validateDateOfBirth(DateOfBirthStructure dateOfBirth) {

    return 1;
}

bool validateVideoIdentificationForUser(string identification) {

    return 1;
}

bool validateNumberOfVideoIdentification(int numberOfVideoIdentification) {

    return 1;
}

bool validateHistory(HistoryStructure historyStructure) {

    return 1;
}
