#ifndef PRINT_FILE_USER
#define PRINT_FILE_USER

#include "../../structures/user_structure.hpp"

#include <string>

using namespace std;

// função que imprime no arquivo de usuários a identificação de um usuário
void printFileUserIdentificatio(string identification);

// função que imprime no arquivo de usuários o nome de um usuário
void printFileUserName(string name);

// função que imprime no arquivo de usuários o dia da data de aniversario de um usuário
void printFileUserDay(int day);

// função que imprime no arquivo de usuários o mes da data de aniversario de um usuário
void printFileUserMonth(int month);

// função que imprime no arquivo de usuários o ano da data de aniversario de um usuário
void printFileUserYear(int year);

// função que imprime no arquivo de usuários a data de aniversario de um usuário
void printFileUserDateOfBirth(DateOfBirthStructure date);

// função que imprime no arquivo de usuários a identificação dos vídeos visto por um usuário
void printFileUserVideosIdentifications(string identification);

// função que imprime no arquivo de usuários o tamanho do histórico de vídeos de um usuário
void printFileUserHistoryLenght(int historyLenght);

// função que imprime no arquivo de usuários um usuário
void printFileUser(UserDocumentStructure user);

// função que imprime no arquivo de usuários todos os usuário
void printFileUserList(UserDocumentStructure userList[]);

#endif