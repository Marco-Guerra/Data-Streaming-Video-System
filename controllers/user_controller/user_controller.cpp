#include "user_controller.hpp"

/**
* Funtion: troca usuários de posição
* @param {UserDocumentStructure} - usuário a
* @param {UserDocumentStructure} - usuário b
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void swapUser (UserDocumentStructure &userA, UserDocumentStructure &userB) {

	UserDocumentStructure auxiliaryUser = userA;

	userA = userB;
	userB = auxiliaryUser;
}

/**
* Funtion: busca um usuário pela sua identificação
* @param {UserListDocumentStructure} - 
* @param {string} - identificação do usuário que está sendo buscado
* @returns {int} - posição do usuário
* 
* @precondition: none
* @postcondition: none
*/
int findUserByIdentification(UserListDocumentStructure &userList, string identification) {

    string thisIdentification;

    identification = removeCharacter(identification, ' ');
    identification = removeCharacter(identification, '\n');

	for (int i = 0; i < userList.numberOfUsers; i++) {

        thisIdentification = userList.usersList[i].identification;

		if ( identification == thisIdentification ) {
			return i;
		}
	}
	return -1;
}

/**
* Funtion: busca um usuário pelo seu nome
* @param {UserListDocumentStructure} - lista onde buscar um usuário
* @param {string} - nome do usuário
* @returns {int} - posição do usuário
* 
* @precondition: none
* @postcondition: none
*/
int findUSerByName(UserListDocumentStructure &userList, string name) {
	
    string thisName;

    name = removeEspaces(name);
    name = removeCharacter(name, '\n');

	for (int i = 0; i < userList.numberOfUsers; i++) {

        thisName = userList.usersList[i].name;

		if ( name == thisName ) {
			return i;
		}
	}
	return -1;
}

/**
* Funtion: gera uma identificação automaticamente
* @returns {string} - identificação gerada automaticamente
* 
* @precondition: none
* @postcondition: none
*/
string gerateUserIdentification() {
	
    string newIdentification;
	
    auto timeNow = chrono::system_clock::to_time_t(chrono::system_clock::now());
	
    newIdentification = ctime(&timeNow);
	newIdentification = removeCharacter(newIdentification, ' ');
	newIdentification = removeCharacter(newIdentification, ':');
	newIdentification = removeCharacter(newIdentification, '\n');
	
    return newIdentification;
}

/**
* Funtion: retorna a posição do usuário selecionado
* @param {UserListDocumentStructure} - lista de usuários onde será feit a busca
* @returns {void} - posição do usuário
* 
* @precondition: none
* @postcondition: none
*/
int selectUserByIdentification(UserListDocumentStructure &userList) {

	string identification;
    int position;

    while(true) {

        identification = readStdioUserIdentification();

        position = findUserByIdentification(userList, identification);

        if( position != -1 ){
            return position;
            break;
        }else{
            cout << "Vídeo não encontrado." << endl;
            cout << "Tentar novamente. [y/n] ";

            string response;

            cin >> response;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

            if( response[0] == 'n' ) {
                return position;
            }
        }
    }
}

/**
* Funtion: retorna a posição do usuário selecionado
* @param {UserListDocumentStructure} - lista de usuários onde será feita a busca
* @returns {int} - posição do usuário
* 
* @precondition: none
* @postcondition: none
*/
int selectUserByName(UserListDocumentStructure &userList) {

    string name;
    int position;

    while(true) {

        name = readStdioUserName();

        position = findUSerByName(userList, name);

        if( position != -1 ){
            return position;
            break;
        }else{
            cout << "Vídeo não encontrado." << endl;
            cout << "Tentar novamente. [y/n] ";

            string response;

            cin >> response;
            
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

            if( response[0] == 'n' ) {
                return position;
            }
        }

    }
}

/**
* Funtion: rotina para agregar um usuário
* @param {UserListDocumentStructure} - lista onde será adiconado o novo usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void addUserController(UserListDocumentStructure &userList) {

    UserDocumentStructure user;

    // realizar a leitura dos dados de um novo usuário
    user = readStdioUser();

    user.identification = gerateUserIdentification();


    // realizar a validação dos dados de um usuário
    if( validateUser(user) ) {
        userList.usersList[userList.numberOfUsers++] = user;
    }

    system("echo Usuário adicionado >> logs/log");
    cout << "Usuário adicionado." << endl;

    getChar();

    // retornar o controle ao menu do usuário 
}

/**
* Funtion: rotina para eliminar um usuário
* @param {UserListDocumentStructure} - lista de donde será eliminado o usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void deleteUserController(UserListDocumentStructure &userList) {

    string identification;
    int position;

    // ler a identificação do usuário que vai ser eliminado
    identification = readStdioUserName();

    position = findUSerByName(userList, identification);


    // eliminar o usuário da lista de usuários em memória
    if( position >= 0 ) {
        userList.numberOfUsers--;
        swapUser(userList.usersList[position], userList.usersList[userList.numberOfUsers]);
    }
    system("echo Usuário eliminado >> logs/log");
    cout << "Usuário eliminado." << endl;
    cout << "Aperte ENTER para continuar";
    getChar();

    // retornar o controle ao menu do usuário 
}

/**
* Funtion: rotina para imprimir os dados de um usuário na saída estandar
* @param {UserDocumentStructure} - usuário a ser impresso na tela
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printUserController(UserDocumentStructure user) {

    // imprimir o usuário na saída estandar
    system("echo Usuário impresso >> logs/log");
    printStdioUser(user);
    cout << "Aperte ENTER para continuar";
    getChar();

    // retornar o controle ao menu do usuário logado
}

/**
* Funtion: rotina para combiar name do usuário
* @returns {string} - novo nome do usuário
* 
* @precondition: none
* @postcondition: none
*/
string changeUserNameController() {
    
    string name;

    // realizar a leitura do nome do usuário
    name = readStdioUserName();

    // realizar a validação do nome do usuário
    cout << "Aperte ENTER para continuar";
    getChar();

    // adicionar a mudança do nome ao uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return name;
}

/**
* Funtion: rotina para combiar o dia da data de nascimento do usuário
* @returns {int} - novo dia de nascimento do usuário
* 
* @precondition: none
* @postcondition: none
*/
int changeUserDayController() {

    int day;

    // realizar a leitura do dia da data de nascimento do usuário
    day = readStdioUserDay();

    // realizar a validação do dia da data de nascimento do usuário
    cout << "Aperte ENTER para continuar";
    getChar();

    // adicionar a mudança do dia da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return day;
}

/**
* Funtion: rotina para combiar o mes da data de nascimento do usuário
* @returns {int} - novo mes de nascimento do usuário
* 
* @precondition: none
* @postcondition: none
*/
int changeUserMonthController() {

    int month;

    // realizar a leitura do mes da data de nascimento do usuário
    month = readStdioUserMonth();

    // realizar a validação do mes da data de nascimento do usuário
    cout << "Aperte ENTER para continuar";
    getChar();

    // adicionar a mudança do mes da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return month;
}

/**
* Funtion: rotina para combiar o ano da data de nascimento do usuário
* @returns {int} - novo ano de nascimento do usuário
* 
* @precondition: none
* @postcondition: none
*/
int changeUserYearController() {

    int year;

    // realizar a leitura do ano da data de nascimento do usuário
    year = readStdioUserYear();

    // realizar a validação do ano da data de nascimento do usuário
    cout << "Aperte ENTER para continuar";
    getChar();

    // adicionar a mudança do ano da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return year;
}

/**
* Funtion: rotina para combiar data de nascimento do usuário
* @returns {DateOfBirthStructure} - nova data de aniversário do usuário
* 
* @precondition: none
* @postcondition: none
*/
DateOfBirthStructure changeUserDateController() {

    DateOfBirthStructure date;

    // realizar a leitura da data de nascimento do usuário
    date = readStdioUserDateOfBirth();

    // realizar a validação da data de nascimento do usuário
    cout << "Aperte ENTER para continuar";
    getChar();

    // adicionar a mudança da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return date;
}

/**
* Funtion: rotina para adicionar historico ao usuário
* @param {HistoryStructure} - historial atual do usuário
* @returns {HistoryStructure} - historial atualizado do usuário
* 
* @precondition: none
* @postcondition: none
*/
HistoryStructure addVideoToHistoryUserController(HistoryStructure history) {
    
    HistoryStructure auxiliaryHistory;
    int historyLength;

    // realizar a leitura dos videos visto pelo usuário
    auxiliaryHistory = readStdioUserVideosIdentifications();
    historyLength = history.historyLenght;

    // realizar a validação do video visto pelo usuário


    // adicionar o vídeo do uauário na lista de usuários em memória
    for(int i = 0; i < auxiliaryHistory.historyLenght; i++) {
        history.videoIdentifications[historyLength + i] = auxiliaryHistory.videoIdentifications[i];
    }


    history.historyLenght = historyLength + auxiliaryHistory.historyLenght;

    cout << "" << endl;
    cout << "Aperte ENTER para continuar";
    getChar();

    // retornar o controle ao menu do usuário logado
    return history;
}
