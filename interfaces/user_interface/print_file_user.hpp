#ifndef PRINT_FILE_USER
#define PRINT_FILE_USER

#include "../../structures/user_structure.hpp"

#include <string>
#include <fstream>

using namespace std;

#define INPUT_FILE_VIDEO "storage/user_storage"

// função que imprime no arquivo de usuários a identificação de um usuário
void printFileUserIdentificatio(string identification, ofstream &file);

// função que imprime no arquivo de usuários o nome de um usuário
void printFileUserName(string name, ofstream &file);

// função que imprime no arquivo de usuários o dia da data de aniversario de um usuário
void printFileUserDay(int day, ofstream &file);

// função que imprime no arquivo de usuários o mês da data de aniversario de um usuário
void printFileUserMonth(int month, ofstream &file);

// função que imprime no arquivo de usuários o ano da data de aniversario de um usuário
void printFileUserYear(int year, ofstream &file);

// função que imprime no arquivo de usuários a data de aniversario de um usuário
void printFileUserDateOfBirth(DateOfBirthStructure date, ofstream &file);

// função que imprime no arquivo de usuários a identificação dos vídeos visto por um usuário
void printFileUserVideosIdentifications(string identification, ofstream &file);

// função que imprime no arquivo de usuários o tamanho do histórico de vídeos de um usuário
void printFileUserHistoryLenght(int historyLenght, ofstream &file);

// função que imprime no arquivo de usuários um usuário
void printFileUser(UserDocumentStructure user, ofstream &file);

// função que imprime no arquivo de usuários todos os usuário
void printFileUserList(UserListDocumentStructure vet, string file_path);

#endif
