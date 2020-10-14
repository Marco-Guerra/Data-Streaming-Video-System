#include "print_stdio_video.hpp"

// função que imprime na saída estândar a identificação de um vídeo
void printStdioVideoIdentification(string identification) {

    cout << "	Identificação do vídeo: " << identification << endl << endl;

}

// função que imprime na saída estândar o tipo de vídeo
void printStdioVideoKindOfVideo(string kindOfVideo) {

    cout << "	Tipo de vídeo: " << kindOfVideo << endl << endl;

}

// função que imprime na saída estândar o nome do vídeo
void printStdioVideoName(string name) {

    cout << "	Nome do vídeo: " << name << endl << endl;

}

// função que imprime na saída estândar o nome do diretor do vídeo
void printStdioVideoDirectorName(string directorName) {

    cout << "	Nome do diretor: " << directorName<< endl << endl;

}

// função que imprime na saída estândar a duração do vídeo
void printStdioVideoDuration(DurationStructure durartion) {

    cout << "	Duração do vídeo: " 
		 << durartion.hours << " horas(s) " 
		 << durartion.minutes << " minutos(s) " 
		 << durartion.seconds << " segundos(s)." << endl << endl;
	
}

// função que imprime na saída estândar o número de temporadas de um vídeo
void printStdioVideoNumberOfSeasons(int numberOfSeasons) {

    cout << "	Número de temporadas: " << numberOfSeasons << endl << endl;

}

// função que imprime na saída estândar o ano de lançamento
void printStdioVideoReleaseYear(int releaseYear) {

    cout << "	Ano de lançamento: " << releaseYear << endl << endl;

}

// função que imprime na saída estândar o número de gêneros do vídeo
void printStdioVideoNumberOfGenres(int numberOfGenre) {

    cout << "	Número de gêneros: " << numberOfGenre << endl << endl;

}

// função que imprime na saída estândar os gêneros aos quais o vídeo pertence
void printStdioVideoGenre(string genre, int genreNumber) {

	cout << "		Gênero do vídeo " << genreNumber << ": " << genre << endl << endl;

}

// função que imprime na saída estândar os gêneros aos quais o vídeo pertence
void printStdioVideoGenres(GenresStructure genres) {

	printStdioVideoNumberOfGenres(genres.numberOfGenre);

	for (int i = 0; i < genres.numberOfGenre; i++) {
		printStdioVideoGenre(genres.genres[i], i + 1);
	}
}

// função que imprime na saída estândar um vídeo
void printStdioVideo(VideoDocumentStructure video) {

	cout << endl
		 << "----------------------------------------" << endl << endl;

	printStdioVideoIdentification(video.identification);
	printStdioVideoKindOfVideo(video.kindOfVideo);
	printStdioVideoName(video.name);
	printStdioVideoDirectorName(video.directorName);
	printStdioVideoDuration(video.durartion);
	printStdioVideoNumberOfSeasons(video.numberOfSeasons);
	printStdioVideoReleaseYear(video.releaseYear);
	printStdioVideoGenres(video.genres);

	cout << endl
		 << "----------------------------------------" << endl << endl;
}

// função que imprime na saída estândar todos os vídeos
void printStdioVideoList(VideoListDocumentStructure videoList) {

    for (int i = 0; i < videoList.numberOfVideos; i++) {

		cout << "Video número: " << i + 1 << endl;

    	printStdioVideo(videoList.videosList[i]);
    }
}
