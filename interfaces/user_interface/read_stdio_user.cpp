#include "read_stdio_user.hpp"

/**
* Funtion: que faz a leitura da saída estandar a identificação de um usuário
* @returns {string} - retorna a identificação do usuário
* 
* @precondition: none
* @postcondition: none
*/
string readStdioUserIdentification() {

    string name;

    cout << endl
		 << "----------------------------------------" << endl << endl;

    cout << "   Entre com a identificação do usuário: ";
    getline(cin, name);
    
    return name;
}

/**
* Funtion: que faz a leitura da saída estandar o nome de um usuário
* @returns {string} - retorna o nome do usuário
* 
* @precondition: none
* @postcondition: none
*/
string readStdioUserName() {

    string name;

    cout << endl
		 << "----------------------------------------" << endl << endl;

    cout << "   Entre com o nome do usuário: ";
    getline(cin, name);
    
    return name;
}

/**
* Funtion: que faz a leitura da saída estandar do dia da data de aniversario de um usuário
* @returns {int} - retorna um valor inteiro que representa o dia de nascimento do usuário
* 
* @precondition: none
* @postcondition: none
*/
int readStdioUserDay() {

    int day;

    cout << endl
		 << "----------------------------------------" << endl << endl;

    cout << "   Entre com o dia de nascimento do usuário: ";
    cin >> day;
    
    return day;
}

/**
* Funtion: que faz a leitura da saída estandar do mes da data de aniversario de um usuário
* @returns {int} - retorna um valor inteiro que representa o mes de nascimento do usuário
* 
* @precondition: none
* @postcondition: none
*/
int readStdioUserMonth() {

    int month;

    cout << endl
		 << "----------------------------------------" << endl << endl;

    cout << "   Entre com o mes de nascimento do usuário: ";
    cin >> month;
    
    return month;
}

/**
* Funtion: que faz a leitura da saída estandar do ano da data de aniversario de um usuário
* @returns {int} - retorna um valor inteiro que representa o ano de nascimento do usuário
* 
* @precondition: none
* @postcondition: none
*/
int readStdioUserYear() {

    int year;

    cout << endl
		 << "----------------------------------------" << endl << endl;

    cout << "   Entre com o ano de nascimento do usuário: ";
    cin >> year;
    
    return year;
}

/**
* Funtion: que faz a leitura da saída estandar a data de aniversario de um usuário
* @returns {DateOfBirthStructure} - retorna todos os dados da data de nascimento de um usuário
* 
* @precondition: none
* @postcondition: none
*/
DateOfBirthStructure readStdioUserDateOfBirth() {

    DateOfBirthStructure dateOfBirth;

    dateOfBirth.day = readStdioUserDay();
    dateOfBirth.month = readStdioUserMonth();
    dateOfBirth.year = readStdioUserYear();

    return dateOfBirth;
}

/**
* Funtion: que faz a leitura da saída estandar a identificação de um vídeo visto por um usuário
* @param {int} - numéro de identificação do vídeo visto
* @returns {string} - retorna a identificação do vídeo
* 
* @precondition: none
* @postcondition: none
*/
string readStdioUserVideoIdentification(int videoNmeber) {

    string videoIdentification;

    cout << endl << endl 
         << "       Entre com o nome do vídeo " << videoNmeber 
         << " visto pelo usuário: ";
    
    getline(cin, videoIdentification);
    
    return videoIdentification;
}

/**
* Funtion: que faz a leitura da saída estandar a identificação dos vídeos visto por um usuário
* @returns {HistoryStructure} - retorna histórico de vídeos assistidos pelo usuário
* 
* @precondition: none
* @postcondition: none
*/
HistoryStructure readStdioUserVideosIdentifications() {

    HistoryStructure videoIdentifications;

    cout << endl
		 << "----------------------------------------" << endl << endl;

    cout << "   Entre com quantidade de videos assistidos: ";
	cin >> videoIdentifications.historyLenght;

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

	for(int i = 0; i < videoIdentifications.historyLenght; i++) {
		videoIdentifications.videoIdentifications[i] = readStdioUserVideoIdentification(i + 1); 
	}

    cout << endl
		 << "----------------------------------------"
         << endl << endl;

    return videoIdentifications;
}

/**
* Funtion: que faz a leitura da saída estandar um usuário
* @returns {UserDocumentStructure} - retorna os dados completos de um usuário
* 
* @precondition: none
* @postcondition: none
*/
UserDocumentStructure readStdioUser() {

    UserDocumentStructure user;

    user.name = readStdioUserName();
    user.date = readStdioUserDateOfBirth();
    user.history = readStdioUserVideosIdentifications();

    system("echo li do stdio um user >> logs/log");

    return user;
}
