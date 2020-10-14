#include "read_stdio_user.hpp"

// função que faz a leitura da saída estandar a identificação de um usuário
string readStdioUserIdentification() {

    string name;

    cout << endl
		 << "----------------------------------------" << endl << endl;

    cout << "   Entre com a identificação do usuário: ";
    getline(cin, name);
    
    return name;
}

// função que faz a leitura da saída estandar o nome de um usuário
string readStdioUserName() {

    string name;

    cout << endl
		 << "----------------------------------------" << endl << endl;

    cout << "   Entre com o nome do usuário: ";
    getline(cin, name);
    
    return name;
}

// função que faz a leitura da saída estandar o dia da data de aniversario de um usuário
int readStdioUserDay() {

    int day;

    cout << endl
		 << "----------------------------------------" << endl << endl;

    cout << "   Entre com o dia de nascimento do usuário: ";
    cin >> day;
    
    return day;
}

// função que faz a leitura da saída estandar o mes da data de aniversario de um usuário
int readStdioUserMonth() {

    int month;

    cout << endl
		 << "----------------------------------------" << endl << endl;

    cout << "   Entre com o mes de nascimento do usuário: ";
    cin >> month;
    
    return month;
}

// função que faz a leitura da saída estandar o ano da data de aniversario de um usuário
int readStdioUserYear() {

    int year;

    cout << endl
		 << "----------------------------------------" << endl << endl;

    cout << "   Entre com o ano de nascimento do usuário: ";
    cin >> year;
    
    return year;
}

// função que faz a leitura da saída estandar a data de aniversario de um usuário
DateOfBirthStructure readStdioUserDateOfBirth() {

    DateOfBirthStructure dateOfBirth;

    dateOfBirth.day = readStdioUserDay();
    dateOfBirth.month = readStdioUserMonth();
    dateOfBirth.year = readStdioUserYear();

    return dateOfBirth;
}

// função que faz a leitura da saída estandar a identificação de um vídeo visto por um usuário
string readStdioUserVideoIdentification(int videoNmeber) {

    string videoIdentification;

    cout << endl << endl 
         << "       Entre com a identificação do vídeo " << videoNmeber 
         << " visto pelo usuário: ";
    
    getline(cin, videoIdentification);
    
    return videoIdentification;
}

// função que faz a leitura da saída estandar a identificação dos vídeos visto por um usuário
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

// função que faz a leitura da saída estandar um usuário
UserDocumentStructure readStdioUser() {

    UserDocumentStructure user;

    user.name = readStdioUserName();
    user.date = readStdioUserDateOfBirth();
    user.history = readStdioUserVideosIdentifications();

    return user;
}