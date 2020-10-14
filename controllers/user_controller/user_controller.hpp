#ifndef USER_CONTROLLER
#define USER_CONTROLLER

#include "user_validator.hpp"

#include "../../structures/user_structure.hpp"

#include "../menu_controller/menu_utilities.hpp"

#include "../../interfaces/user_interface/print_stdio_user.hpp"
#include "../../interfaces/user_interface/read_stdio_user.hpp"

//
void swapUser (UserDocumentStructure &userA, UserDocumentStructure &userB);

//
int findUserByIdentification(UserListDocumentStructure &userList, string identification);

//
int findUSerByName(UserListDocumentStructure &userList, string name);

// função que gera um ID automaticamente
string gerateUserIdentification();

//
int selectUserByIdentification(UserListDocumentStructure &userList);

//
int selectUserByName(UserListDocumentStructure &userList);

// rotina para agregar um usuário
void addUserController(UserListDocumentStructure &userList);

// rotina para eliminar um usuário
void deleteUserController(UserListDocumentStructure &userList);

// rotina para imprimir um usuário na tela
void printUserController(UserDocumentStructure user);

// rotina para combiar name do usuário
string changeUserNameController();

// rotina para combiar o dia da data de nascimento do usuário
int changeUserDayController();

// rotina para combiar o mes da data de nascimento do usuário
int changeUserMonthController();

// rotina para combiar o ano da data de nascimento do usuário
int changeUserYearController();

// rotina para combiar data de nascimento do usuário
DateOfBirthStructure changeUserDateController();

// rotina para adicionar historico ao usuário
HistoryStructure addVideoToHistoryUserController(HistoryStructure history);

#endif