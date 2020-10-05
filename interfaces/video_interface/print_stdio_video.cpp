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

void printDuration(DurationStructure duration) {

    //cout << "Duração do vídeo: " << durartion.hours << "horas " << durartion.minutes << "minutos" << durartion.seconds << "segundos." << endl;
	cout << "Duração do vídeo:\n";
	printHours(duration.hours);
	printMinutes(duration.minutes);
	printSeconds(duration.seconds);
}

void printNumberOfSeasons(int numberOfSeasons) {

    cout << "Numero de temporadas: " << numberOfSeasons << endl;

}

void printReleaseYear(int releaseYear) {

    cout << "Ano de lançamento: " << releaseYear << endl;

}

void printNumberOfVideoGenre(int numberOfGenre) {

    cout << "Numero de gêneros: " << numberOfGenre << endl;

}

void printGenre(string genre, int number) {

    cout << "Gênero numero " << number << ": " << genre << endl;

}

void printGenres(GenresStructure genres) {

    printNumberOfVideoGenre(genres.numberOfGenre);

    for (int i = 0; i < genres.numberOfGenre; i++) {
        printGenre( genres.genres[i], i + 1 );
    }
}

void printVideo(VideoDocumentStructure video) {

	printVideoIdentification(video.identification);
	printKindOfVideo(video.kindOfVideo);
	printName(video.name);
	printDirectorName(video.directorName);
	printDuration(video.durartion);
	printNumberOfSeasons(video.numberOfSeasons);
	printGenres(video.genres);
}

void printAllVideos (VetorOfVideos v) {
	for (int i = 0; i < v.tam; i++) {
		cout << "=================================\n";
		cout << "| Video numero: " << i + 1 << " |\n";
		cout << "=================================\n";
		printVideo(v.vet[i]);
		cout << "=================================\n";
	}
}
