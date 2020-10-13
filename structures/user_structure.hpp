#ifndef USER_STRUCTURES
#define USER_STRUCTURES

#define MAX_USERS 20
#define MAX_HISTORY 100

#include <iostream>

using namespace std;

// definição da estrutura para armazenar a data de nascimento de um usuário
struct DateOfBirthStructure{
    int day;
    int month;
    int year;
};

// definição da estrutura para armazenar o.hppistórico des vídeos vistos por um usuário
struct HistoryStructure{
    string videoIdentifications[MAX_HISTORY];
    int historyLenght;
};

// definição da estrutura para armazenar todos os datos de um usuário
struct UserDocumentStructure{
    string identification;
    string name;
    DateOfBirthStructure date;
    HistoryStructure history;
};

// definição da estrutura para armazenar todos os usuários
struct UserListDocumentStructure{
    UserDocumentStructure usersList[MAX_USERS];
    int numberOfUsers;
};

#endif
