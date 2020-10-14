#ifndef PRINT_STDIO_USER
#define PRINT_STDIO_USER

#include <istream>
#include <string>

#include "../../structures/user_structure.hpp"

using namespace std;

// função que imprime na saída estândar a identificação de um usuário
void printStdioUserIdentification(string identification);

// função que imprime na saída estândar o nome de um usuário
void printStdioUserName(string name);

// função que imprime na saída estândar o dia da data de aniversario de um usuário
void printStdioUserDay(int day);

// função que imprime na saída estândar o mês da data de aniversario de um usuário
void printStdioUserMonth(int month);

// função que imprime na saída estândar o ano da data de aniversario de um usuário
void printStdioUserYear(int year);

// função que imprime na saída estândar a data de aniversario de um usuário
void printStdioUserDateOfBirth(DateOfBirthStructure dateOfBirth);

// função que imprime na saída estândar a identificação de um vídeo visto por um usuário
void printStdioUserVideosIdentification(string videoIdentification, int videoNumber);


// função que imprime na saída estândar a identificação dos vídeos visto por um usuário
void printStdioUserVideosIdentifications(HistoryStructure history);

// função que imprime na saída estândar o tamanho do histórico de vídeos de um usuário
void printStdioUserHistoryLenght(int historyLenght);

// função que imprime na saída estândar um usuário
void printStdioUser(UserDocumentStructure user);

// função que imprime na saída estândar todos os usuário
void printStdioUserList(UserListDocumentStructure userList);

#endif
