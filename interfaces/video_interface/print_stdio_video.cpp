#include "print_stdio_video.hpp"

void printVideoIdentification(string identification) {

    cout << "Identificação do vídeo: " << identification << endl;

}

void printKindOfVideo(string kindOfVideo) {

    cout << "Tipo de vídeo: " << kindOfVideo << endl;
}

void printName(string name) {

    cout << "Nome do vídeo: " << name << endl;

}

void printDirectorName(string directorName) {

    cout << "Nome do diretor: " << directorName << endl;

}

void printHours(unsigned int hours) {

    cout << "Horas: " << hours << endl;

}

void printMinutes(unsigned int minutes) {

    cout << "Minutos: " << minutes << endl;

}

void printSeconds(unsigned int seconds) {

    cout << "Segundos: " << seconds << endl;

}

void printDuration(DurationStructure durartion) {

    cout << "Duração do vídeo: " << durartion.hours << "horas " << durartion.minutes << "minutos" << durartion.seconds << "segundos." << endl;

}

void printNumberOfSeasons(int numberOfSeasons) {

    cout << "Numero de temporadas: " << numberOfSeasons << endl;

}

void printReleaseYear(int releaseYear) {

    cout << "Ano de lançamento: " << releaseYear << endl;

}

void printNumberOfVideoGenre(string genre) {

    cout << "Gênero: " << genre << endl;

}

void printGenre(string genre) {

    cout << "Gênero: " << genre << endl;

}

/*void printGenres(GenresStructure genres) {

    printNumberOfVideoGenre(genres.numberOfGenre);

    for (int i = 0; i <.hppistory.hppistoryLen.hppt; i++) {
        printGenre( genres[i], i + 1 );
    }

}*/

void printVideo(VideoDocumentStructure video) {
}
