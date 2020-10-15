#include "video_validator.hpp"

/**
* Funtion: imprime mensagens de erro
* @param {int} - número do erro
* @param {string} - messagem complementar do erro
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void errorMessagesCodeVideo(int code, string message) {

    switch(code) {
        case 0:
            cout << "" << endl;
            break;
        case 1:
            cout << "" << endl;
            break;
		}
}

/**
* Funtion: valida uma identificação do usuário
* @param {string} - identificação
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateVideoIdentification(string identification) {

    /*if ( identification.size() != 20 ) {
        errorMessagesCodeVideo(0, "");
        return 0;
    }

    if ( !stringIsAlNum(identification) ) {
        errorMessagesCodeVideo(1, "");
        return 0;
    }*/

    return 1;
}

/**
* Funtion: valida um tipo de vídeo
* @param {string} - tipo de vídeo
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateKindOfVideo(string kindOfVideo) {

    // verificar se os tipos de video pertencem á lista dos tipos de videos possiveis

    return 1;
}

/**
* Funtion: valida o nome do usuário
* @param {string} - nome do vídeo
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateName(string name) {

    /*if( name.size() != 0 ) {
        errorMessagesCodeVideo(2, "");
        return 0;
    }

    if( stringIsAlpha(name) ) {
        errorMessagesCodeVideo(3, "");
        return 0;
    }*/

    return 1;
}

/**
* Funtion: valida o nome do diretor 
* @param {string} - diretor do vídeo
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateDirectorName(string directorName) {

    // confirmar se o director existe e se o nome é valido

    return 1;
}

/**
* Funtion: valida a quantidade de horas
* @param {unsigned int} - número de horas do vídeo
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateHours(unsigned int hours) {

    // VERIFICAR SE AS HORAS SAO VALORES COrretos

    return 1;
}

/**
* Funtion: valida a quantidade de minutos
* @param {unsigned int} - número de minutos do vídeo
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateMinutes(unsigned int minutes) {

    // verificar se os minutos s'ao valores corretos

    return 1;
}

/**
* Funtion: valida os segundos de duração
* @param {unsigned int} - 
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateSeconds(unsigned int seconds) {

    // verificar se os segundos s'ao valores corretos

    return 1;
}

/**
* Funtion: valida a duração
* @param {DurationStructure} - duração do vídeo
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateDuration(DurationStructure durartion) {

    // chama todos os anteriores para verificar a dura;'ao

    return 1;
}

/**
* Funtion: valida a quantidade de temporadas
* @param {int} - número de temporadas
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateNumberOfSeasons(int numberOfSeasons) {

    // verificar se o numero d temporadas e maior que 0

    return 1;
}

/**
* Funtion: valida um ano de lanzamento
* @param {int} - ano de lançamento
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateReleaseYear(int releaseYear) {

    // validar o ano de lançamento

    return 1;
}

/**
* Funtion: valida um genero
* @param {string} - genre
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateGenre(string genre) {

    // validar o genero, se existe na lista de generos

    return 1;
}

/**
* Funtion: valida uma lista de generos
* @param {GenresStructure} - lista de genres
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateGenres(GenresStructure genres) {

    // validar o genero

    return 1;
}

/**
* Funtion: valida um vídeo
* @param {VideoDocumentStructure} - vídeo 
* @returns {bool} - retorna true se é válido e false se não é válido
* 
* @precondition: none
* @postcondition: none
*/
bool validateVideo(VideoDocumentStructure video) {

    // fun;'ao que chama todas as anteriores para validar o video

    return 1;
}
