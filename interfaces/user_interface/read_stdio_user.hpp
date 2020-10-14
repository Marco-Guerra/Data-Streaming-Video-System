#ifndef READ_STDIO_USER
#define READ_STDIO_USER

#include <time.h> 
#include <chrono> 
#include <ctime>
#include <string>

#include "../../structures/user_structure.hpp"

#include "../../utilities/utilities.hpp"

using namespace std;

// função que faz a leitura da saída estandar a identificação de um usuário
string readStdioUserIdentification();

// função que faz a leitura da saída estandar o nome de um usuário
string readStdioUserName();

// função que faz a leitura da saída estandar o dia da data de aniversario de um usuário
int readStdioUserDay();

// função que faz a leitura da saída estandar o mes da data de aniversario de um usuário
int readStdioUserMonth();

// função que faz a leitura da saída estandar o ano da data de aniversario de um usuário
int readStdioUserYear();

// função que faz a leitura da saída estandar a data de aniversario de um usuário
DateOfBirthStructure readStdioUserDateOfBirth();

// função que faz a leitura da saída estandar a identificação de um vídeo visto por um usuário
string readStdioUserVideoIdentification(int videoNmeber);

// função que faz a leitura da saída estandar a identificação dos vídeos visto por um usuário
HistoryStructure readStdioUserVideosIdentifications();

// função que faz a leitura da saída estandar um usuário
UserDocumentStructure readStdioUser();

#endif