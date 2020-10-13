#include "menu_controller.hpp"
#include "menu_utilities.hpp"

#include "../../interfaces/menu_interface/menu_messages.hpp"

#include "../user_controller/user_controller.hpp"
#include "../video_controller/video_controller.hpp"

// controlador de opções do menu principal
void menuPrincipalController(UserListDocumentStructure &userList, VideoListDocumentStructure &videoList) {

    int option = 0;
    char selected;
    
    system("clear");
    menuPrincipalMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 )
            option--;
        
        if( selected == DOWN_DEFAULT && option < 2 )
            option++;

        if( selected == ENTER ) {
            // acessar menu de usuários
            if( option == 0 )
                usersMenuController();
            
            // acessar menu de vídeo
            if( option == 1 )
                videosMenuController();
            
            // rotina para finalizar o programa
            if( option == 2 )
                return;
        }

        system("clear");
        menuPrincipalMessage(option);

        selected = getChar();
    }
}

// controlador de opções do menu de usuários
void usersMenuController() {

    int option = 0;
    char selected;
    
    system("clear");
    usersMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 )
            option--;
        
        if( selected == DOWN_DEFAULT && option < 3 )
            option++;

        if( selected == ENTER ) {
            // adiciona um novo usuário
            if( option == 0 )
                addUserController();

            // acessar menu de usuário
            if( option == 1 )
                userMenuController();

            // eliminar um usuário
            if( option == 2 )
                deleteUserController();
                
            // retornar o controle para o menu principal
            if( option == 3 )
                return;
        }

        system("clear");
        usersMenuMessage(option);

        selected = getChar();
    }
}

// controlador de opções do menu de usuário
void userMenuController() {

    int option = 0;
    char selected;
    
    system("clear");
    userMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 )
            option--;
        
        if( selected == DOWN_DEFAULT && option < 2 )
            option++;

        if( selected == ENTER ) {
            // imprimir todos os dados de um usuário
            if( option == 0 )
                printUserController();
            // acessar menu de dados do usuário
            if( option == 1 )
                dataUserMenuController();
            // retornar o controle para o menu de usuários
            if( option == 2 )
                return;
        }

        system("clear");
        userMenuMessage(option);

        selected = getChar();
    }
}

// controlador de opções do menu de dados do usuário
void dataUserMenuController() {


    int option = 0;
    char selected;
    
    system("clear");
    dataUserMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 )
            option--;
        
        if( selected == DOWN_DEFAULT && option < 6 )
            option++;

        if( selected == ENTER ) {
            // mudar nome do usuário
            if( option == 0 )
                changeUserNameController();
            // mudar data de nascimento do usuário
            if( option == 1 )
                changeUserDateController();
            // mudar o dia da data de nascimento do usuário
            if( option == 2 )
                changeUserDayController();
            // mudar o mes da data de nascimento do usuário
            if( option == 3 )
                changeUserMonthController();
            // mudar o ano da data de nascimento do usuário
            if( option == 4 )
                changeUserYearController();
            // adicionar um novo vídeo ao historico de vídeos do usuário
            if( option == 5 )
                addVideoToHistoryUserController();
            // retornar o controle para o menu de usuário
            if( option == 6 )
                return;
        }

        system("clear");
        dataUserMenuMessage(option);

        selected = getChar();
    }
}

// controlador de opções do menu de vídeos
void videosMenuController() {

    int option = 0;
    char selected;
    
    system("clear");
    videosMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 )
            option--;
        
        if( selected == DOWN_DEFAULT && option < 3 )
            option++;

        if( selected == ENTER ) {
            // adiciona um novo vídeo
            if( option == 0 )
                //addVideoController();
            // acessar menu de vídeo
            if( option == 1 )
                videoMenuController();
            // eliminar um vídeo
            if( option == 2 )
                //deleteVideoController();
            // retornar o controle para o menu principal
            if( option == 3 )
                return;
        }

        system("clear");
        videosMenuMessage(option);

        selected = getChar();
    }
}

// controlador de opções do menu de vídeo
void videoMenuController() {

    int option = 0;
    char selected;
    
    system("clear");
    videoMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 )
            option--;
        
        if( selected == DOWN_DEFAULT && option < 2 )
            option++;

        if( selected == ENTER ) {
            // imprimir todos os dados de um vídeo
            if( option == 0 )
                //printVideoController();
            // acessar menu de dados do vídeo
            if( option == 1 )
                dataVideoMenuController();
            // retornar o controle para o menu de vídeos
            if( option == 2 )
                return;
        }

        system("clear");
        videoMenuMessage(option);

        selected = getChar();
    }

    
}

// controlador de opções do menu de dados do vídeo
void dataVideoMenuController() {

    int option = 0;
    char selected;
    
    system("clear");
    dataVideoMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 )
            option--;
        
        if( selected == DOWN_DEFAULT && option < 10 )
            option++;

        if( selected == ENTER ) {
            // mudar tipo do vídeo
            if( option == 0 )
                changeKindOfVideoController();
            // mudar nome do vídeo
            if( option == 1 )
                changeVideoNameController();
            // mudar nome do diretor do vídeo
            if( option == 2 )
                changeVideoDirectorNameController();
            // mudar as horas de duração do vídeo
            if( option == 3 )
                changeVideoDurationHoursController();
            // mudar as minutos de duração do vídeo
            if( option == 4 )
                changeVideoDurationMinutesController();
            // mudar as segundos de duração do vídeo
            if( option == 5 )
                changeVideoDurationSecondsController();
            // mudar a duração do vídeo
            if( option == 6 )
                changeVideoDurationController();
            // mudar o número de temporadas do vídeo
            if( option == 7 )
                changeVideoNumberOfSeasonsController();
            // mudar o ano de lançamento do vídeo
            if( option == 8 )
                changeVideoReleaseYearController();
            // adicionar um novo genero aos generos do vídeo
            if( option == 9 )
                addVideoGenreController();
            // retornar o controle para o menu de vídeo
            if( option == 10 )
                return;
        }

        system("clear");
        dataVideoMenuMessage(option);

        selected = getChar();
    }
}