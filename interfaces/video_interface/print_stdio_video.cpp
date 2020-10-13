#include "print_stdio_video.hpp"

// função que imprime na saída estândar a identificação de um vídeo
void printStdioVideoIdentification(string identification) {
    cout << "Vídeo ID: " << identification << endl;
}

// função que imprime na saída estândar o tipo de vídeo
void printStdioVideoKindOfVideo(string kindOfVideo) {
    cout << "Tipo de vídeo: " << kindOfVideo << endl;
}

// função que imprime na saída estândar o nome do vídeo
void printStdioVideoName(string name) {
    cout << "Nome do vídeo: " << name << endl;
}

// função que imprime na saída estândar o nome do diretor do vídeo
void printStdioVideoDirectorName(string directorName) {
    cout << "Nome do diretor: " << directorName<< endl;
}

// função que imprime na saída estândar a duração do vídeo
void printStdioVideoDuration(DurationStructure durartion) {
    cout << "Duração do vídeo: " << durartion.hours << " horas " << durartion.minutes << " minutos " << durartion.seconds << " segundos." << endl;
	
}

// função que imprime na saída estândar o número de temporadas de um vídeo
void printStdioVideoNumberOfSeasons(int numberOfSeasons) {
    cout << "Número de temporadas: " << numberOfSeasons << endl;
}

// função que imprime na saída estândar o ano de lançamento
void printStdioVideoReleaseYear(int releaseYear) {
    cout << "Ano de lançamento: " << releaseYear << endl;
}

// função que imprime na saída estândar o número de gêneros do vídeo
void printStdioVideoNumberOfGenres(int numberOfGenre) {
    cout << "Número de gêneros: " << numberOfGenre << endl;
}

// função que imprime na saída estândar os gêneros aos quais o vídeo pertence
void printStdioVideoGenres(GenresStructure genres) {
	printStdioVideoNumberOfGenres(genres.numberOfGenre);
	for (int i = 0; i < genres.numberOfGenre; i++) {
		cout << "Gênero " << i + 1 << ": " << genres.genres[i] << endl;
	}
}

// função que imprime na saída estândar um vídeo
void printStdioVideo(VideoDocumentStructure video) {
	printStdioVideoIdentification(video.identification);
	printStdioVideoKindOfVideo(video.kindOfVideo);
	printStdioVideoName(video.name);
	printStdioVideoDuration(video.durartion);
	printStdioVideoNumberOfSeasons(video.numberOfSeasons);
	printStdioVideoReleaseYear(video.releaseYear);
	printStdioVideoGenres(video.genres);
}

// função que imprime na saída estandar todos os vídeos
/*void printStdioVideoList(VetorOfVideos vet) {
    
}*/
// função que imprime na saída estândar todos os vídeos
void printStdioVideoList(VetorOfVideos vet) {
    for (int i = 0; i < vet.tam; i++) {
		cout << "Video num: " << i + 1 << endl;
		cout << "==============================================\n";
    	printStdioVideo(vet.vet[i]);
		cout << "==============================================\n";
    }
}