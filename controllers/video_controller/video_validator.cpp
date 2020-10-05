#include "video_validator.hpp"

// Imprime as mensagens que encerram o arquivo
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

bool validateVideoIdentification(string identification) {

    if ( identification.size() != 20 ) {
        errorMessagesCodeVideo(0, "");
        return 0;
    }

    if ( !stringIsAlNum(identification) ) {
        errorMessagesCodeVideo(1, "");
        return 0;
    }

    return 1;
}

bool validateKindOfVideo(string kindOfVideo) {

    // verificar se os tipos de video pertencem á lista dos tipos de videos possiveis

    return 1;
}

bool validateName(string name) {

    if( name.size() != 0 ) {
        errorMessagesCodeVideo(2, "");
        return 0;
    }

    if( stringIsAlpha(name) ) {
        errorMessagesCodeVideo(3, "");
        return 0;
    }

    return 1;
}

bool validateDirectorName(string directorName) {

    // confirmar se o director existe e se o nome é valido

    return 1;
}

bool validateHours(unsigned inthours) {

    // VERIFICAR SE AS HORAS SAO VALORES COrretos

    return 1;
}

bool validateMinutes(unsigned int minutes) {

    // verificar se os minutos s'ao valores corretos

    return 1;
}

bool validateSeconds(unsigned int seconds) {

    // verificar se os segundos s'ao valores corretos

    return 1;
}

bool validateDuration(DurationStructure durartion) {

    // chama todos os anteriores para verificar a dura;'ao

    return 1;
}

bool validateNumberOfSeasons(int numberOfSeasons) {

    // verificar se o numero d temporadas e maior que 0

    return 1;
}

bool validateReleaseYear(int releaseYear) {

    // validar o ano de lançamento

    return 1;
}

bool validateGenre(string genre) {

    // validar o genero, se existe na lista de generos

    return 1;
}

bool validateGenres(GenresStructure genres) {

    // validar o genero

    return 1;
}

bool validateVideo(VideoDocumentStructure video) {

    // fun;'ao que chama todas as anteriores para validar o video

    return 1;
}
