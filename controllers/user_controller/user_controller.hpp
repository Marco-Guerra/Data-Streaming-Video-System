#ifndef USER_CONTROLLER
#define USER_CONTROLLER

#include "user_controller.hpp"

// rotina para agregar um usuário
void addUserController();

// rotina para acessar um usuário
void accessUserController();

// rotina para eliminar um usuário
void deleteUserController();

// rotina para imprimir um usuário na tela
void printUserController();

// rotina para combiar todos os dados não sensiveis do usuário
void changeUserDataController();

// rotina para combiar name do usuário
void changeUserNameController();

// rotina para combiar o dia da data de nascimento do usuário
void changeUserDayController();

// rotina para combiar o mes da data de nascimento do usuário
void changeUserMonthController();

// rotina para combiar o ano da data de nascimento do usuário
void changeUserYearController();

// rotina para combiar data de nascimento do usuário
void changeUserDateController();

// rotina para adicionar historico ao usuário
void addVideoToHistoryUserController();

#endif