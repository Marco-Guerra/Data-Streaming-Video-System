#ifndef MENU_CONTROLLER
#define MENU_CONTROLLER

#include "../../interfaces/menu_interface/menu_messages.hpp"

#include "../../structures/user_structure.hpp"
#include "../../structures/video_structure.hpp"

#include "../user_controller/user_controller.hpp"
#include "../video_controller/video_controller.hpp"

#include "../../interfaces/video_interface/read_stdio_video.hpp"
#include "../../interfaces/user_interface/read_stdio_user.hpp"

// controlador de opções do menu principal
void menuPrincipalController(UserListDocumentStructure &userList, VideoListDocumentStructure &videoList);

// controlador de opções do menu de usuários
void usersMenuController(UserListDocumentStructure &userList);

// controlador de opções do menu de usuário
void userMenuController(UserListDocumentStructure &userList);

// controlador de opções do menu de dados do usuário
UserDocumentStructure dataUserMenuController(UserDocumentStructure user);

// controlador de opções do menu de vídeos
void videosMenuController(VideoListDocumentStructure &videoList);

// controlador de opções do menu de vídeo
void videoMenuController();

// controlador de opções do menu de dados do vídeo
void dataVideoMenuController();

#endif
