#include "menu_controller.hpp"

#include "../user_controller/user_controller.hpp"
#include "../video_controller/video_controller.hpp"

// menu principal
void menuPrincipal() {
    // acessar menu de usuários
    UsersMenu();
    // acessar menu de vídeo
    videosMenu();
    // rotina para finalizar o programa
}

// menu de usuários
void UsersMenu() {
    // adiciona um novo usuário
    addUserController();
    // acessar menu de usuário
    UserMenu();
    // eliminar um usuário
    deleteUserController();
    // retornar o controle para o menu principal
}

// menu de usuário
void UserMenu() {
    // imprimir todos os dados de um usuário
    printUserController();
    // acessar menu de dados do usuário
    dataUserMenu();
    // retornar o controle para o menu de usuários
}

// menu de dados do usuário
void dataUserMenu() {
    // mudar nome do usuário
    changeUserNameController();
    // mudar data de nascimento do usuário
    changeUserDateController();
    // mudar o dia da data de nascimento do usuário
    changeUserDayController();
    // mudar o mes da data de nascimento do usuário
    changeUserMonthController();
    // mudar o ano da data de nascimento do usuário
    changeUserYearController();
    // adicionar um novo vídeo ao historico de vídeos do usuário
    addVideoToHistoryUserController();
    // retornar o controle para o menu de usuário
}

// menu de vídeos
void videosMenu() {
    // adiciona um novo vídeo
    addVideoController();
    // acessar menu de vídeo
    videoMenu();
    // eliminar um vídeo
    deleteVideoController();
    // retornar o controle para o menu principal
}

// menu de vídeo
void videoMenu() {
    // imprimir todos os dados de um vídeo
    printVideoController();
    // acessar menu de dados do vídeo
    dataVideoMenu();
    // retornar o controle para o menu de vídeos
}

// menu de dados do vídeo
void dataVideoMenu() {
    // mudar tipo do vídeo
    changeKindOfVideoController();
    // mudar nome do vídeo
    changeVideoNameController();
    // mudar nome do diretor do vídeo
    changeVideoDirectorNameController();
    // mudar as horas de duração do vídeo
    changeVideoDurationHoursController();
    // mudar as minutos de duração do vídeo
    changeVideoDurationMinutesController();
    // mudar as segundos de duração do vídeo
    changeVideoDurationSecondsController();
    // mudar a duração do vídeo
    changeVideoDurationController();
    // mudar o número de temporadas do vídeo
    changeVideoNumberOfSeasonsController();
    // mudar o ano de lançamento do vídeo
    changeVideoReleaseYearController();
    // adicionar um novo genero aos generos do vídeo
    addVideoGenreController();
    // retornar o controle para o menu de vídeo
}