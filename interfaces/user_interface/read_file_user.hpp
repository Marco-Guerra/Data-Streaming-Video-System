#ifndef READ_FILE_USER
#define READ_FILE_USER


#include <iostream>
#include <string>
#include <fstream>
#include "../../utilities/utilities.hpp"
#include "../../structures/user_structure.hpp"

#define INPUT_FILE_USER "storage/user_storage"

#include <string>
#include <time.h> 
#include <chrono> 
#include <ctime>

using namespace std;

// função que faz a leitura do arquivo de usuários da identificação de um usuário
string readFileUserIdentificatio(ifstream &fn);

int readFileUserYear(string line);

// função que faz a leitura do arquivo de usuários da data de aniversario de um usuário
DateOfBirthStructure readFileUserDateOfBirth(ifstream &fn);

// função que retorna apenas o ID, sem caracteres desnecessários
string processHistory (string s);

// acha um ID no histórico, caso contrario retorna falso
bool readFileUserHistory(ifstream &fn, string &id);

// função que faz a leitura do arquivo de usuários da identificação dos vídeos visto por um usuário
HistoryStructure readFileUserVideosIdentifications(ifstream &fn);

// encontrar o ultimo fechamento de chaves
void findEndOfStructureUser (ifstream &fn);

// função que faz a leitura do arquivo de usuários de um usuário
UserDocumentStructure readFileUser(ifstream &fn);

// acha o fim da struct
// true caso ache
// false caso ache o fim do arquivo
bool findBeginOfStructureUser(ifstream &fn);

// função que faz a leitura do arquivo de usuários de todos os usuário
UserListDocumentStructure readFileUserList(string file_name);

#endif
