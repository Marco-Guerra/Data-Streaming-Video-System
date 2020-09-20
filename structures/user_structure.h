#ifndef USER_STRUCTURES
#define USER_STRUCTURES

#define MAX_HISTORY 100

#include <iostream>

using namespace std;

// definição da estrutura para armazenar a data de nascimento de um usuário
struct DateOfBirthStructure{
    int day;
    int month;
    int year;
};

// definição da estrutura para armazenar o histórico des vídeos vistos por um usuário
struct HistoryStructure{
    string videoIdentifications[MAX_HISTORY];
    int numberOfVideoIdentification;
};

// definição da estrutura para armazenar todos os datos de um usuário
struct UserDocumentStructure{
    string identification;
    string name;
    DateOfBirthStructure date;
    HistoryStructure history;
};

#endif