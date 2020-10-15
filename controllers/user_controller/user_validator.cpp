#include "user_validator.hpp"

/**
* Funtion: função imprime as mensagens que encerram de erra
* @param {int} - codigo de erro
* @param {string} - auxilia a impressao da mensagem
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
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

/**
* Funtion: função que valida uma identificação de usuário
* @param {string} - ID do usuario
* @returns {bool} - entrada é válida
* 
* @precondition: none
* @postcondition: none
*/
bool validateUserIdentification(string identification) {

    /*if ( identification.size() != 20 ) {
        errorMessagesCodeUser(0, "");
        return 0;
    }

    if ( !stringIsAlNum(identification) ) {
        errorMessagesCodeUser(1, "");
        return 0;
    }*/

    return 1;
}

/**
* Funtion: função que valida o nome do usuário
* @param {string} - nome do usuario
* @returns {bool} - entrada é válida
* 
* @precondition: none
* @postcondition: none
*/
bool validateUserName(string name) {

    /*if( name.size() != 0 ) {
        errorMessagesCodeUser(2, "");
        return 0;
    }

    if( stringIsAlpha(name) ) {
        errorMessagesCodeUser(3, "");
        return 0;
    }*/

    return 1;
}

/**
* Funtion: função que valida um dia do mes
* @param {int} - dia de nascimento do usuario
* @returns {bool} - entrada é válida
* 
* @precondition: none
* @postcondition: none
*/
bool validateDay(int day) {

    /*if( 1 <= day && day <= 31 ) {
        errorMessagesCodeUser(4, "");
        return 0;
    }*/

    // agregar diferença entre meses e anos bisesxtos

    return 1;
}

/**
* Funtion: função que valida o mes do ano
* @param {int} - mes de nascimento do usuario
* @returns {bool} - entrada é válida
* 
* @precondition: none
* @postcondition: none
*/
bool validateMonth(int month) {

    /*if( 1 <= month && month <= 12 ) {
        errorMessagesCodeUser(5, "");
        return 0;
    }*/

    return 1;
}

/**
* Funtion: função que valida o ano
* @param {int} - ano de nascimento do usuario
* @returns {bool} - entrada é válida
* 
* @precondition: none
* @postcondition: none
*/
bool validateYear(int year) {

    /*if( 1689 <= year ) {
        errorMessagesCodeUser(6, "");
        return 0;
    }*/

    // desde inicio do calendario romano ate o ano atual

    return 1;
}

/**
* Funtion: função que valida a data de aniversario do usuário
* @param {DateOfBirthStructure} - data de nascimento do usuario
* @returns {bool} - entrada é válida
* 
* @precondition: none
* @postcondition: none
*/
bool validateDateOfBirth(DateOfBirthStructure dateOfBirth) {

    if( validateDay(dateOfBirth.day) && validateMonth(dateOfBirth.month) && validateYear(dateOfBirth.year) ) {
        return 1;
    }

    return 1;
}

/**
* Funtion: função que valida se os videos do historico de um usuário existem
* @param {string} - ID de um video no historico de usuario
* @returns {bool} - entrada é válida
* 
* @precondition: none
* @postcondition: none
*/
bool validateVideoIdentificationForUser(string identification) {

    // verificaar se existe video com esse id e se o formato do id é correto

    return 1;
}

/**
* Funtion: função que valida o numero de videos de um usuário
* @param {int} - numero de videos assistidos pelo usuário
* @returns {bool} - entrada é válida
* 
* @precondition: none
* @postcondition: none
*/
bool validateNumberOfVideoIdentification(int numberOfVideoIdentification) {



    return 1;
}

/**
* Funtion: função que valida o historial de um usuário
* @param {HistoryStructure} - historico completo
* @returns {bool} - entrada é válida
* 
* @precondition: none
* @postcondition: none
*/
bool validateHistory(HistoryStructure historyStructure) {

    // fazer as duas verificaçoes anteriores

    return 1;
}

// 
/**
* Funtion: função que valida um usuário
* @param {UserDocumentStructure userDocumentStructure} - usuário completo
* @returns {bool} - entrada é válida
* 
* @precondition: none
* @postcondition: none
*/
bool validateUser(UserDocumentStructure userDocumentStructure) {

    if( !( validateUserIdentification(userDocumentStructure.identification) && validateUserName(userDocumentStructure.name) && validateDateOfBirth(userDocumentStructure.date) && validateHistory(userDocumentStructure.history) ) ) {
        return 1;
    }

    return 1;
}
