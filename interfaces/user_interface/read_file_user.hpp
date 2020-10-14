#ifndef READ_FILE_USER
#define READ_FILE_USER


#include <iostream>
#include <string>
#include <fstream>

#include "../../structures/user_structure.hpp"

#include "../../utilities/utilities.hpp"

#define INPUT_FILE_USER "storage/user_storage"

#include <string>

using namespace std;

// função que faz a leitura do arquivo de usuários da identificação de um usuário
string readFileUserIdentification(ifstream &storageUserFile);

// função que faz a leitura do arquivo de usuários do nome de um usuário
string readFileUserName(ifstream &storageUserFile);

// função que faz a leitura do arquivo de usuários do dia da data de aniversario de um usuário
int readFileUserDay(string line);

// função que faz a leitura do arquivo de usuários do mes da data de aniversario de um usuário
int readFileUserMonth(string line);

// função que faz a leitura do arquivo de usuários do ano da data de aniversario de um usuário
int readFileUserYear(string line);

// função que faz a leitura do arquivo de usuários da data de aniversario de um usuário
DateOfBirthStructure readFileUserDateOfBirth(ifstream &storageUserFile);

// função que retorna apenas o ID, sem caracteres desnecessários
string processHistory (string line);

// acha um ID no histórico, caso contrario retorna falso
bool readFileUserHistory(ifstream &storageUserFile, string &line);

// função que faz a leitura do arquivo de usuários da identificação dos vídeos visto por um usuário
HistoryStructure readFileUserVideosIdentifications(ifstream &storageUserFile);

// encontrar o ultimo fechamento de chaves
void findEndOfStructureUser (ifstream &storageUserFile);

// função que faz a leitura do arquivo de usuários de um usuário
UserDocumentStructure readFileUser(ifstream &storageUserFile);

// acha o fim da struct
// true caso ache
// false caso ache o fim do arquivo
bool findBeginOfStructureUser(ifstream &storageUserFile);

// função que faz a leitura do arquivo de usuários de todos os usuário
UserListDocumentStructure readFileUserList(string storageUserFileName);

#endif
