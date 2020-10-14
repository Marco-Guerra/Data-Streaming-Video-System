#include "menu_controller.hpp"

// controlador de opções do menu principal
/**
* Funtion: 
* @param {} - 
* @param {} - 
* @returns {} - 
* 
* @precondition: 
* @postcondition: 
*/
void menuPrincipalController(UserListDocumentStructure &userList, VideoListDocumentStructure &videoList) {

    int option = 0;
    char selected;
    
    system("clear");
    menuPrincipalMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 ) {
            option--;
        }

        if( selected == DOWN_DEFAULT && option < 2 ) {
            option++;
        }

        if( selected == ENTER ) {
            // acessar menu de usuários
            if( option == 0 ) {
                usersMenuController(userList);
            }
            
            // acessar menu de vídeo
            if( option == 1 ) {
                videosMenuController(videoList);
            }

            // rotina para finalizar o programa
            if( option == 2 ) {
                return;
            }
        }

        system("clear");
        menuPrincipalMessage(option);

        selected = getChar();
    }
}

// controlador de opções do menu de usuários
/**
* Funtion: 
* @param {} - 
* @param {} - 
* @returns {} - 
* 
* @precondition: 
* @postcondition: 
*/
void usersMenuController(UserListDocumentStructure &userList) {

    int option = 0;
    char selected;
    
    system("clear");
    usersMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 ) {
            option--;
        }

        if( selected == DOWN_DEFAULT && option < 3 ){
            option++;
        }

        if( selected == ENTER ) {
            // adiciona um novo usuário
            if( option == 0 ) {
                addUserController(userList);
			}

            // acessar menu de usuário
            if( option == 1 ) {
				userMenuController(userList);
			}

            // eliminar um usuário
            if( option == 2 ) {
                deleteUserController(userList);
			}

            // retornar o controle para o menu principal
            if( option == 3 ) {
                return;
			}
        }

        system("clear");
        usersMenuMessage(option);

        selected = getChar();
    }
}

// controlador de opções do menu de usuário
/**
* Funtion: 
* @param {} - 
* @param {} - 
* @returns {} - 
* 
* @precondition: 
* @postcondition: 
*/
void userMenuController(UserListDocumentStructure &userList) {
    UserDocumentStructure user;

    string identification;
    int position;

    position = selectUserByName(userList);

    if( position != -1 ) {
        user = userList.usersList[position];
    }else{
        return;
    }
        
    int option = 0;
    char selected;
    
    system("clear");
    userMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 ) {
            option--;
        }

        if( selected == DOWN_DEFAULT && option < 2 ) {
            option++;
        }

        if( selected == ENTER ) {
            // imprimir todos os dados de um usuário
            if( option == 0 ) {
                printUserController(user);
            }

            // acessar menu de dados do usuário
            if( option == 1 ) {
                user = dataUserMenuController(user);
            }

            // retornar o controle para o menu de usuários
            if( option == 2 ) {
                userList.usersList[position] = user;
                return;
            }
        }

        system("clear");
        userMenuMessage(option);

        selected = getChar();
    }
}

// controlador de opções do menu de dados do usuário
/**
* Funtion: 
* @param {} - 
* @param {} - 
* @returns {} - 
* 
* @precondition: 
* @postcondition: 
*/
UserDocumentStructure dataUserMenuController(UserDocumentStructure user) {

    int option = 0;
    char selected;
    
    system("clear");
    dataUserMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 ) {
            option--;
        }
        
        if( selected == DOWN_DEFAULT && option < 6 ) {
            option++;
        }

        if( selected == ENTER ) {
            // mudar nome do usuário
            if( option == 0 ) {
                user.name = changeUserNameController();
            }

            // mudar data de nascimento do usuário
            if( option == 1 ) {
                user.date = changeUserDateController();
            }

            // mudar o dia da data de nascimento do usuário
            if( option == 2 ) {
                user.date.day = changeUserDayController();
            }

            // mudar o mês da data de nascimento do usuário
            if( option == 3 ) {
                user.date.month = changeUserMonthController();
            }

            // mudar o ano da data de nascimento do usuário
            if( option == 4 ) {
                user.date.year = changeUserYearController();
            }

            // adicionar um novo vídeo ao histórico de vídeos do usuário
            if( option == 5 ) {
                user.history = addVideoToHistoryUserController(user.history);
            }

            // retornar o controle para o menu de usuário
            if( option == 6 ) {
                return user;
			}
        }

        system("clear");
        dataUserMenuMessage(option);

        selected = getChar();
    }
}

// controlador de opções do menu de vídeos
/**
* Funtion: 
* @param {} - 
* @param {} - 
* @returns {} - 
* 
* @precondition: 
* @postcondition: 
*/
void videosMenuController(VideoListDocumentStructure &videoList) {

    int option = 0;
    char selected;
    
    system("clear");
    videosMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 ){
            option--;
        }
        
        if( selected == DOWN_DEFAULT && option < 3 ){
            option++;
        }

        if( selected == ENTER ) {
            // adiciona um novo vídeo
            if( option == 0 ){
                addVideoController(videoList);
            }

            // acessar menu de vídeo
            if( option == 1 ){
                videoMenuController(videoList);
            }

            // eliminar um vídeo
            if( option == 2 ){
                deleteVideoController(videoList);
            }

            // retornar o controle para o menu principal
            if( option == 3 ){
                return;
            }
        }

        system("clear");
        videosMenuMessage(option);

        selected = getChar();
    }
}

// controlador de opções do menu de vídeo
/**
* Funtion: 
* @param {} - 
* @param {} - 
* @returns {} - 
* 
* @precondition: 
* @postcondition: 
*/
void videoMenuController(VideoListDocumentStructure &videoList) {

	VideoDocumentStructure video;
    int position;

    position = selectVideoByName(videoList);

    if( position != -1 ) {
        video = videoList.videosList[position];
    }else{
        return;
    }
      
    int option = 0;
    char selected;
    
    system("clear");
    videoMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 ) {
            option--;
        }
        
        if( selected == DOWN_DEFAULT && option < 2 ) {
            option++;
        }

        if( selected == ENTER ) {
            // imprimir todos os dados de um vídeo
            if( option == 0 ) {
                printVideoController(video);
            }

            // acessar menu de dados do vídeo
            if( option == 1 ) {
                video = dataVideoMenuController(video);
            }

            // retornar o controle para o menu de vídeos
            if( option == 2 ) {
                videoList.videosList[position] = video;
                return;
            }
        }

        system("clear");
        videoMenuMessage(option);

        selected = getChar();
    }
}

// controlador de opções do menu de dados do vídeo
/**
* Funtion: 
* @param {} - 
* @param {} - 
* @returns {} - 
* 
* @precondition: 
* @postcondition: 
*/
VideoDocumentStructure dataVideoMenuController(VideoDocumentStructure video) {

    int option = 0;
    char selected;
    
    system("clear");
    dataVideoMenuMessage(option);

    selected = getChar();

    while( true ) {
        
        if( selected == UP_DEFAULT && option > 0 ) {
            option--;
        }
        
        if( selected == DOWN_DEFAULT && option < 10 ) {
            option++;
        }

        if( selected == ENTER ) {
            // mudar tipo do vídeo
            if( option == 0 ) {
                video.kindOfVideo = changeKindOfVideoController();
            }

            // mudar nome do vídeo
            if( option == 1 ) {
                video.name = changeVideoNameController();
            }

            // mudar nome do diretor do vídeo
            if( option == 2 ) {
                video.directorName = changeVideoDirectorNameController();
            }

            // mudar as horas de duração do vídeo
            if( option == 3 ) {
                video.durartion.hours = changeVideoDurationHoursController();
            }

            // mudar as minutos de duração do vídeo
            if( option == 4 ) {
                video.durartion.minutes = changeVideoDurationMinutesController();
            }

            // mudar as segundos de duração do vídeo
            if( option == 5 ) {
                video.durartion.seconds = changeVideoDurationSecondsController();
            }

            // mudar a duração do vídeo
            if( option == 6 ) {
                video.durartion = changeVideoDurationController();}
            // mudar o número de temporadas do vídeo
            if( option == 7 ) {
                video.numberOfSeasons = changeVideoNumberOfSeasonsController();
            }

            // mudar o ano de lançamento do vídeo
            if( option == 8 ) {
                video.releaseYear = changeVideoReleaseYearController();
            }

            // adicionar um novo gênero aos gêneros do vídeo
            if( option == 9 ) {
                video.genres = addVideoGenreController(video.genres);
            }

            // retornar o controle para o menu de vídeo
            if( option == 10 ) {
                return video;
			}
        }

        system("clear");
        dataVideoMenuMessage(option);

        selected = getChar();
    }
}
