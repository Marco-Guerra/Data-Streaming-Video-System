#include "print_file_video.hpp"

/**
* Funtion: que imprime no arquivo do vídeo a identificação de um vídeo
* @param {string} - identificação do vídeo
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileVideoIdentification(string identification, ofstream &storageVideoFile) {

    storageVideoFile << "identification = " << identification << ";" << endl;

}

/**
* Funtion: que imprime no arquivo do vídeo o tipo de vídeo
* @param {string} - tipo de vídeo
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileVideoKindOfVideo(string kindOfVideo, ofstream &storageVideoFile) {

    storageVideoFile << "kindOfVideo = " << kindOfVideo << ";" << endl;

}

/**
* Funtion: que imprime no arquivo do vídeo o nome do vídeo
* @param {string} - nome do vídeo
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileVideoName(string name, ofstream &storageVideoFile) {

    storageVideoFile << "name = " << name << ";" << endl;

}

/**
* Funtion: que imprime no arquivo do vídeo o nome do diretor do vídeo
* @param {string} - nome do diretor do vídeo
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileVideoDirectorName(string directorName, ofstream &storageVideoFile) {

    storageVideoFile << "directorName = " << directorName<< ";" << endl;

}

/**
* Funtion: que imprime no arquivo do vídeo a duração do vídeo
* @param {DurationStructure} - duração do vídeo
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileVideoDuration(DurationStructure durartion, ofstream &storageVideoFile) {

    storageVideoFile << "duration = " << durartion.hours << ":" << durartion.minutes << ":" << durartion.seconds << ";" << endl;

}

/**
* Funtion: que imprime no arquivo do vídeo o número de temporadas de um vídeo
* @param {int} - valor inteiro que representa a quantidade de temporadas de um vídeo
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileVideoNumberOfSeasons(int numberOfSeasons, ofstream &storageVideoFile) {

    storageVideoFile << "numberOfSeasons = " << numberOfSeasons << ";" << endl;

}

/**
* Funtion: que imprime no arquivo do vídeo o ano de lançamento
* @param {int} - valor inteiro que representa a data de lançamento de um vídeo
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileVideoReleaseYear(int releaseYear, ofstream &storageVideoFile) {

    storageVideoFile << "releaseYear = " << releaseYear << ";" << endl;

}

/**
* Funtion: que imprime no arquivo do vídeo os gêneros aos quais o vídeo pertence
* @param {GenresStructure} - Generos que o vídeo possuí
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileVideoGenres(GenresStructure genres, ofstream &storageVideoFile) {

	storageVideoFile << "genres = {\n";

	for (int i = 0; i < genres.numberOfGenre; i++) {
		storageVideoFile << "genero " << genres.genres[i] << "," << endl;
	}

	storageVideoFile << "}" << endl;
}

/**
* Funtion: que imprime no arquivo do vídeo um vídeo
* @param {VideoDocumentStructure} - Todos os dados de um vídeo
* @param {ofstream} - ponteiro para arquivo de saída
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileVideo(VideoDocumentStructure video, ofstream &storageVideoFile) {

	printFileVideoIdentification(video.identification, storageVideoFile);

	printFileVideoKindOfVideo(video.kindOfVideo, storageVideoFile);

	printFileVideoName(video.name, storageVideoFile);

	printFileVideoDirectorName(video.directorName, storageVideoFile);

	printFileVideoDuration(video.durartion, storageVideoFile);

	printFileVideoNumberOfSeasons(video.numberOfSeasons, storageVideoFile);

	printFileVideoReleaseYear(video.releaseYear, storageVideoFile);

	printFileVideoGenres(video.genres, storageVideoFile);
}

/**
* Funtion: que imprime no arquivo do vídeo todos os vídeos
* @param {VideolistDocumentStructure} - quantidade existente de vídeos
* @param {string} - nome do arquivo
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printFileVideoList(VideoListDocumentStructure vet, string storageVideoFileName) {
	
	ofstream storageVideoFile;
	storageVideoFile.open(storageVideoFileName);

	for (int i = 0; i < vet.numberOfVideos; i++) {
		storageVideoFile << "{" << endl;
		system("echo imprimi no arquivo um video >> logs/log");
		printFileVideo(vet.videosList[i] , storageVideoFile);

		storageVideoFile << "}" << endl;
	}

	storageVideoFile.close();
}
