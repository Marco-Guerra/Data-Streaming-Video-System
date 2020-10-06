#ifndef PRINT_STDIO_USER
#define PRINT_STDIO_USER

#include "../../structures/user_structure.hpp"

#include <string>

using namespace std;

// função que imprime na saída estandar a identificação de um usuário
void printStdioUserIdentificatio(string identification);

// função que imprime na saída estandar o nome de um usuário
void printStdioUserName(string name);

// função que imprime na saída estandar o dia da data de aniversario de um usuário
void printStdioUserDay(int day);

// função que imprime na saída estandar o mes da data de aniversario de um usuário
void printStdioUserMonth(int month);

// função que imprime na saída estandar o ano da data de aniversario de um usuário
void printStdioUserYear(int year);

// função que imprime na saída estandar a data de aniversario de um usuário
void printStdioUserDateOfBirth(DateOfBirthStructure dateOfBirth);

// função que imprime na saída estandar a identificação de um vídeo visto por um usuário
void printStdioUserVideosIdentification(string videoIdentification, int videoNumber);

// função que imprime na saída estandar a identificação dos vídeos visto por um usuário
void printStdioUserVideosIdentifications(string videoIdentifications);

// função que imprime na saída estandar o tamanho do histórico de vídeos de um usuário
void printStdioUserHistoryLenght(int historyLenght);

// função que imprime na saída estandar um usuário
void printStdioUser(UserDocumentStructure user);

// função que imprime na saída estandar todos os usuário
void printStdioUserList(UserDocumentStructure userList[]);

#endif
