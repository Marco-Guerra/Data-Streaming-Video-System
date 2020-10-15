#include "print_stdio_video.hpp"

/**
* Funtion: que imprime na saída estândar a identificação de um vídeo
* @param {string} - identificação do vídeo
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioVideoIdentification(string identification) {

    cout << "	Identificação do vídeo: " << identification << endl << endl;

}

/**
* Funtion: que imprime na saída estândar o tipo de vídeo
* @param {string} - tipo de um vídeo
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioVideoKindOfVideo(string kindOfVideo) {

    cout << "	Tipo de vídeo: " << kindOfVideo << endl << endl;

}

/**
* Funtion: que imprime na saída estândar o nome do vídeo
* @param {string} - nome de um vídeo
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioVideoName(string name) {

    cout << "	Nome do vídeo: " << name << endl << endl;

}

/**
* Funtion: que imprime na saída estândar o nome do diretor do vídeo
* @param {string} - nome do diretor do vídeo
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioVideoDirectorName(string directorName) {

    cout << "	Nome do diretor: " << directorName<< endl << endl;

}

/**
* Funtion: que imprime na saída estândar a duração do vídeo
* @param {DurationStructure} - duração do video como horas, minutos, segundos
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioVideoDuration(DurationStructure durartion) {

    cout << "	Duração do vídeo: " 
		 << durartion.hours << " horas(s) " 
		 << durartion.minutes << " minutos(s) " 
		 << durartion.seconds << " segundos(s)." << endl << endl;
	
}

/**
* Funtion: que imprime na saída estândar o número de temporadas de um vídeo
* @param {int} - valor inteiro que representa o número de temporadas de um vídeo
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioVideoNumberOfSeasons(int numberOfSeasons) {

    cout << "	Número de temporadas: " << numberOfSeasons << endl << endl;

}

/**
* Funtion: que imprime na saída estândar o ano de lançamento
* @param {int} - valor inteiro que representa a ano de lançamento de um vídeo
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioVideoReleaseYear(int releaseYear) {

    cout << "	Ano de lançamento: " << releaseYear << endl << endl;

}

/**
* Funtion: que imprime na saída estândar o número de gêneros do vídeo
* @param {int} - valor inteiro que representa a quantidades de gêneros que um vídeo possuí
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioVideoNumberOfGenres(int numberOfGenre) {

    cout << "	Número de gêneros: " << numberOfGenre << endl << endl;

}

/**
* Funtion: que imprime na saída estândar os gêneros aos quais o vídeo pertence
* @param {string} - nome do gênero que o vídeo pode possuír
* @param {int} - valor inteiro que representa o número do gênero que o vídeo possuí
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioVideoGenre(string genre, int genreNumber) {

	cout << "		Gênero do vídeo " << genreNumber << ": " << genre << endl << endl;

}

/**
* Funtion: que imprime na saída estândar os gêneros aos quais o vídeo pertence
* @param {GenreStructure} - todos os gêneros que o vídeo possuí
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioVideoGenres(GenresStructure genres) {

	printStdioVideoNumberOfGenres(genres.numberOfGenre);

	for (int i = 0; i < genres.numberOfGenre; i++) {
		printStdioVideoGenre(genres.genres[i], i + 1);
	}
}

/**
* Funtion: que imprime na saída estândar um vídeo
* @param {VideoDocumentStructure} - todos os dados de um vídeo
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
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

/**
* Funtion: que imprime na saída estândar todos os vídeos
* @param {VideoListDocumentStructure} - toda a quantidade de vídeos
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printStdioVideoList(VideoListDocumentStructure videoList) {

    for (int i = 0; i < videoList.numberOfVideos; i++) {

		cout << "Video número: " << i + 1 << endl;

    	printStdioVideo(videoList.videosList[i]);
    }
}
