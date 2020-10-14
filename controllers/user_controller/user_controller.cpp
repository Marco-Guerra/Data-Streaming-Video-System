#include "user_controller.hpp"

// 
void swapUser (UserDocumentStructure &userA, UserDocumentStructure &userB) {

	UserDocumentStructure auxiliaryUser = userA;

	userA = userB;
	userB = auxiliaryUser;
}

// 
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

// 
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

// função que gera um ID automaticamente
string gerateUserIdentification() {
	
    string newIdentification;
	
    auto timeNow = chrono::system_clock::to_time_t(chrono::system_clock::now());
	
    newIdentification = ctime(&timeNow);
	newIdentification = removeCharacter(newIdentification, ' ');
	newIdentification = removeCharacter(newIdentification, ':');
	newIdentification = removeCharacter(newIdentification, '\n');
	
    return newIdentification;
}

// 
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

// rotina para agregar um usuário
void addUserController(UserListDocumentStructure &userList) {

    UserDocumentStructure user;

    // realizar a leitura dos dados de um novo usuário
    user = readStdioUser();

    user.identification = gerateUserIdentification();


    // realizar a validação dos dados de um usuário
    if( validateUser(user) ) {
        userList.usersList[userList.numberOfUsers++] = user;
    }

    cout << "Usuário adicionado." << endl;
    getChar();

    // retornar o controle ao menu do usuário 
}

// rotina para eliminar um usuário
void deleteUserController(UserListDocumentStructure &userList) {

    string identification;
    int position;

    identification = readStdioUserIdentification();

    position = findUserByIdentification(userList, identification);

    if( position >= 0 ) {
        userList.numberOfUsers--;
        swapUser(userList.usersList[position], userList.usersList[userList.numberOfUsers]);
    }

    cout << "Usuário eliminado." << endl;
    getChar();
    // ler a identificação do usuário que vai ser eliminado
    // eliminar o usuário da lista de usuários em memória
    // retornar o controle ao menu do usuário 
}

// rotina para imprimir os dados de um usuário na saída estandar
void printUserController(UserDocumentStructure user) {

    printStdioUser(user);

    getChar();
    // imprimir o usuário na saída estandar
    // retornar o controle ao menu do usuário logado
}

// rotina para combiar name do usuário
string changeUserNameController() {
    
    string name;

    name = readStdioUserName();

    cout << "" << endl;
    getChar();
    // realizar a leitura do nome do usuário
    // realizar a validação do nome do usuário
    // adicionar a mudança do nome ao uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return name;
}

// rotina para combiar o dia da data de nascimento do usuário
int changeUserDayController() {

    int day;

    day = readStdioUserDay();

    cout << "" << endl;
    getChar();
    // realizar a leitura do dia da data de nascimento do usuário
    // realizar a validação do dia da data de nascimento do usuário
    // adicionar a mudança do dia da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado

    return day;
}

// rotina para combiar o mes da data de nascimento do usuário
int changeUserMonthController() {

    int month;

    month = readStdioUserMonth();

    cout << "" << endl;
    getChar();
    // realizar a leitura do mes da data de nascimento do usuário
    // realizar a validação do mes da data de nascimento do usuário
    // adicionar a mudança do mes da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return month;
}

// rotina para combiar o ano da data de nascimento do usuário
int changeUserYearController() {

    int year;

    year = readStdioUserYear();

    cout << "" << endl;
    getChar();
    // realizar a leitura do ano da data de nascimento do usuário
    // realizar a validação do ano da data de nascimento do usuário
    // adicionar a mudança do ano da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return year;
}

// rotina para combiar data de nascimento do usuário
DateOfBirthStructure changeUserDateController() {

    DateOfBirthStructure date;

    date = readStdioUserDateOfBirth();

    cout << "" << endl;
    getChar();
    // realizar a leitura da data de nascimento do usuário
    // realizar a validação da data de nascimento do usuário
    // adicionar a mudança da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return date;
}

// rotina para adicionar historico ao usuário
HistoryStructure addVideoToHistoryUserController(HistoryStructure history) {
    
    HistoryStructure auxiliaryHistory;
    int historyLength;

    auxiliaryHistory = readStdioUserVideosIdentifications();
    historyLength = history.historyLenght;

    for(int i = 0; i < auxiliaryHistory.historyLenght; i++) {
        history.videoIdentifications[historyLength + i] = auxiliaryHistory.videoIdentifications[i];
    }

    history.historyLenght = historyLength + auxiliaryHistory.historyLenght;

    cout << "" << endl;
    getChar();
    // realizar a leitura do video visto pelo usuário
    // realizar a validação do video visto pelo usuário
    // adicionar o vídeo do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return history;
}
