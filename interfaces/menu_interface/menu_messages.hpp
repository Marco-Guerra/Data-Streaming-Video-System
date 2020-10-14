#ifndef MENU_MESSAGES
#define MENU_MESSAGES

//#include "menu_utilities.hpp"
#include"../../controllers/menu_controller/menu_utilities.hpp"

#include "../../controllers/user_controller/user_controller.hpp"
#include "../../controllers/video_controller/video_controller.hpp"

// mensagem de inicio do programa
void initMessage();

// menu principal
void menuPrincipalMessage(int option);

// menu de usuários
void usersMenuMessage(int option);

// menu de usuário
void userMenuMessage(int option);

// menu de dados do usuário
void dataUserMenuMessage(int option);

// menu de vídeos
void videosMenuMessage(int option);

// menu de vídeo
void videoMenuMessage(int option);

// menu de dados do vídeo
void dataVideoMenuMessage(int option);

// mensagem final do programa
void endMessage();

#endif
