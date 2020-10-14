#include "user_controller.hpp"

// função que gera um ID automaticamente
string gerateUserIdentification() {
	string aux;
	auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());
	aux = ctime(&timenow);
	aux = removeCharacter(aux, ' ');
	aux = removeCharacter(aux, ':');
	aux = removeCharacter(aux, '\n');
	return aux;
}

int findUserById(UserListDocumentStructure vet, string id) {

    string thisIdentification;

    id = removeCharacter(id, ' ');
    id = removeCharacter(id, '\n');

	for (int i = 0; i < vet.numberOfUsers; i++) {

        thisIdentification = vet.usersList[i].identification;

		if ( id == thisIdentification ) {
			return i;
		}
	}
	return -1;
}

void swapUser (UserDocumentStructure &a, UserDocumentStructure &b) {
	UserDocumentStructure aux = a;
	a = b;
	b = aux;
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
    system("sleep 2");

    // retornar o controle ao menu do usuário 
}

// rotina para acessar um usuário
void accessUserController() {
    cout << "rotina para acessar um usuário" << endl;
    system("sleep 2");
    // ler a identificação do usuário
    // acessar todos os dados do usuário
    // passar o controle para o menu do usuário logado
}

// rotina para eliminar um usuário
void deleteUserController(UserListDocumentStructure &userList) {

    string identification;
    int position;

    identification = readStdioUserIdentification();

    position = findUserById(userList, identification);

    cout << position << endl;

    if( position >= 0 ) {
        userList.numberOfUsers--;
        swapUser(userList.usersList[position], userList.usersList[userList.numberOfUsers]);
    }

    cout << "Usuário eliminado." << endl;
    system("sleep 2");
    // ler a identificação do usuário que vai ser eliminado
    // eliminar o usuário da lista de usuários em memória
    // retornar o controle ao menu do usuário 
}

// rotina para imprimir os dados de um usuário na saída estandar
void printUserController(UserDocumentStructure user) {

    printStdioUser(user);

    system("sleep 5");
    // imprimir o usuário na saída estandar
    // retornar o controle ao menu do usuário logado
}

// rotina para combiar name do usuário
string changeUserNameController() {
    cout << "rotina para combiar name do usuário" << endl;
    string name;

    name = readStdioUserName();
    system("sleep 1");
    // realizar a leitura do nome do usuário
    // realizar a validação do nome do usuário
    // adicionar a mudança do nome ao uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return name;
}

// rotina para combiar o dia da data de nascimento do usuário
int changeUserDayController() {
    cout << "rotina para combiar o dia da data de nascimento do usuário" << endl;
    system("sleep 1");
    // realizar a leitura do dia da data de nascimento do usuário
    // realizar a validação do dia da data de nascimento do usuário
    // adicionar a mudança do dia da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado

    return readStdioUserDay();
}

// rotina para combiar o mes da data de nascimento do usuário
int changeUserMonthController() {
    cout << "rotina para combiar o mes da data de nascimento do usuário" << endl;
    system("sleep 1");
    // realizar a leitura do mes da data de nascimento do usuário
    // realizar a validação do mes da data de nascimento do usuário
    // adicionar a mudança do mes da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return readStdioUserMonth();
}

// rotina para combiar o ano da data de nascimento do usuário
int changeUserYearController() {
    cout << "rotina para combiar o ano da data de nascimento do usuário" << endl;
    system("sleep 1");
    // realizar a leitura do ano da data de nascimento do usuário
    // realizar a validação do ano da data de nascimento do usuário
    // adicionar a mudança do ano da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return readStdioUserYear();
}

// rotina para combiar data de nascimento do usuário
DateOfBirthStructure changeUserDateController() {
    cout << "rotina para combiar data de nascimento do usuário" << endl;
    system("sleep 1");
    // realizar a leitura da data de nascimento do usuário
    // realizar a validação da data de nascimento do usuário
    // adicionar a mudança da data de nascimento do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return readStdioUserDateOfBirth();
}

// rotina para adicionar historico ao usuário
string addVideoToHistoryUserController() {
    cout << "rotina para adicionar historico ao usuário" << endl;
    system("sleep 1");
    // realizar a leitura do video visto pelo usuário
    // realizar a validação do video visto pelo usuário
    // adicionar o vídeo do uauário na lista de usuários em memória
    // retornar o controle ao menu do usuário logado
    return readStdioUserVideosIdentification();
}
