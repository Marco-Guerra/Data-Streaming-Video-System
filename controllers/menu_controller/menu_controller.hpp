#ifndef MENU_CONTROLLER
#define MENU_CONTROLLER

#include "menu_controller.hpp"

#include "../../structures/user_structure.hpp"
#include "../../structures/video_structure.hpp"

#include "../user_controller/user_controller.hpp"
#include "../video_controller/video_controller.hpp"

// controlador de opções do menu principal
void menuPrincipalController(UserListDocumentStructure &userList, VideoListDocumentStructure &videoList);

// controlador de opções do menu de usuários
void usersMenuController();

// controlador de opções do menu de usuário
void userMenuController();

// controlador de opções do menu de dados do usuário
void dataUserMenuController();

// controlador de opções do menu de vídeos
void videosMenuController();

// controlador de opções do menu de vídeo
void videoMenuController();

// controlador de opções do menu de dados do vídeo
void dataVideoMenuController();

#endif
