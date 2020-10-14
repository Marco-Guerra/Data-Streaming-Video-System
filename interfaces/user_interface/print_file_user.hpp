#ifndef PRINT_FILE_USER
#define PRINT_FILE_USER

#include "../../structures/user_structure.hpp"

#include <string>
#include <fstream>

using namespace std;

#define OUTPUT_FILE_USER "storage/user_storage"

// função que imprime no arquivo de usuários a identificação de um usuário
void printFileUserIdentificatio(string identification, ofstream &file);

// função que imprime no arquivo de usuários o nome de um usuário
void printFileUserName(string name, ofstream &file);

// função que imprime no arquivo de usuários a data de aniversario de um usuário
void printFileUserDateOfBirth(DateOfBirthStructure date, ofstream &file);

// função que imprime no arquivo de usuários a identificação dos vídeos visto por um usuário
void printFileUserVideosIdentifications(HistoryStructure history, ofstream &file);

// função que imprime no arquivo de usuários um usuário
void printFileUser(UserDocumentStructure user, ofstream &file);

// função que imprime no arquivo de usuários todos os usuário
void printFileUserList(UserListDocumentStructure vet, string file_path);

#endif
