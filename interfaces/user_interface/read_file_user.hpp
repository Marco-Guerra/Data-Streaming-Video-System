#ifndef READ_FILE_USER
#define READ_FILE_USER

#include "../../structures/user_structure.hpp"

#define INPUT_FILE_USER "storage/user_storage"

#include <string>

using namespace std;

// função que faz a leitura do arquivo de usuários da identificação de um usuário
string readFileUserIdentificatio();

// função que faz a leitura do arquivo de usuários do nome de um usuário
string readFileUserName();

// função que faz a leitura do arquivo de usuários do dia da data de aniversario de um usuário
int readFileUserDay();

// função que faz a leitura do arquivo de usuários do mes da data de aniversario de um usuário
int readFileUserMonth();

// função que faz a leitura do arquivo de usuários do ano da data de aniversario de um usuário
int readFileUserYear();

// função que faz a leitura do arquivo de usuários da data de aniversario de um usuário
DateOfBirthStructure readFileUserDateOfBirth();

// função que faz a leitura do arquivo de usuários da identificação dos vídeos visto por um usuário
string readFileUserVideosIdentifications();

// função que faz a leitura do arquivo de usuários do tamanho do histórico de vídeos de um usuário
int readFileUserHistoryLenght();

// função que faz a leitura do arquivo de usuários de um usuário
UserDocumentStructure readFileUser();

// função que faz a leitura do arquivo de usuários de todos os usuário
UserDocumentStructure readFileUserList();

#endif