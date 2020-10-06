#include "user_validator.hpp"

// função imprime as mensagens que encerram o arquivo
void errorMessagesCodeUser(int code, string message) {

	switch(code) {
		case 0:
			cout << "Erro de código de identificação: faltam caráteres." << endl;
			break;
		case 1:
			cout << "Erro de código de identificação: a cadeia de entrada possui caráteres inválidos." << endl;
			break;
		case 2:
			cout << "Erro de nome: o nome ingressado não possui nenhum caráter." << endl;
			break;
        case 3:
			cout << "Erro de nome: o nome ingressado possui caráteres inválidos." << endl;
			break;
        case 4:
			cout << "Erro de data: dia incorretos." << endl;
			break;
        case 5:
			cout << "Erro de data: mes incorretos." << endl;
			break;
        case 6:
			cout << "Erro de data: ano incorretos." << endl;
			break;
	}
}

// função que valida uma identificação de usuário
bool validateUserIdentification(string identification) {

    if ( identification.size() != 20 ) {
        errorMessagesCodeUser(0, "");
        return 0;
    }

    if ( !stringIsAlNum(identification) ) {
        errorMessagesCodeUser(1, "");
        return 0;
    }

    return 1;
}

// função que valida o nome do usuário
bool validateUserName(string name) {

    if( name.size() != 0 ) {
        errorMessagesCodeUser(2, "");
        return 0;
    }

    if( stringIsAlpha(name) ) {
        errorMessagesCodeUser(3, "");
        return 0;
    }

    return 1;
}

// função que valida um dia do mes
bool validateDay(int day) {

    if( 1 <= day && day <= 31 ) {
        errorMessagesCodeUser(4, "");
        return 0;
    }

    // agregar diferença entre meses e anos bisesxtos

    return 1;
}

// função que valida o mes do ano
bool validateMonth(int month) {

    if( 1 <= month && month <= 12 ) {
        errorMessagesCodeUser(5, "");
        return 0;
    }

    return 1;
}

// função que valida o ano
bool validateYear(int year) {

    if( 1689 <= year ) {
        errorMessagesCodeUser(6, "");
        return 0;
    }

    // desde inicio do calendario romano ate o ano atual

    return 1;
}

// função que valida a data de aniversario do usuário
bool validateDateOfBirth(DateOfBirthStructure dateOfBirth) {

    if( validateDay(dateOfBirth.day) && validateMonth(dateOfBirth.month) && validateYear(dateOfBirth.year) ) {
        return 0;
    }

    return 1;
}

// fun;'ao que valida se os videos do historial de um usuário existem
bool validateVideoIdentificationForUser(string identification) {

    // verificaar se existe video com esse id e se o formato do id é correto

    return 1;
}

// função que valida o numero de videos de um usuário
bool validateNumberOfVideoIdentification(int numberOfVideoIdentification) {



    return 1;
}

// função que valida o historial de um usuário
bool validateHistory(HistoryStructure historyStructure) {

    // fazer as duas verificaçoes anteriores

    return 1;
}

// função que valida um usuário
bool validateUserDocumentStructure(UserDocumentStructure userDocumentStructure) {

    if( !( validateUserIdentification(userDocumentStructure.identification) && validateUserName(userDocumentStructure.name) && validateDateOfBirth(userDocumentStructure.date) && validateHistory(userDocumentStructure.history) ) ) {
        return 0;
    }

    return 1;
}
