#include "print_file_video.hpp"

// função que imprime no arquivo do vídeo a identificação de um vídeo
void printFileVideoIdentification(string identification, ofstream &storageVideoFile) {

    storageVideoFile << "identification = " << identification << ";" << endl;

}

// função que imprime no arquivo do vídeo o tipo de vídeo
void printFileVideoKindOfVideo(string kindOfVideo, ofstream &storageVideoFile) {

    storageVideoFile << "kindOfVideo = " << kindOfVideo << ";" << endl;

}

// função que imprime no arquivo do vídeo o nome do vídeo
void printFileVideoName(string name, ofstream &storageVideoFile) {

    storageVideoFile << "name = " << name << ";" << endl;

}

// função que imprime no arquivo do vídeo o nome do diretor do vídeo
void printFileVideoDirectorName(string directorName, ofstream &storageVideoFile) {

    storageVideoFile << "directorName = " << directorName<< ";" << endl;

}

// função que imprime no arquivo do vídeo a duração do vídeo
void printFileVideoDuration(DurationStructure durartion, ofstream &storageVideoFile) {

    storageVideoFile << "duration = " << durartion.hours << ":" << durartion.minutes << ":" << durartion.seconds << ";" << endl;

}

// função que imprime no arquivo do vídeo o número de temporadas de um vídeo
void printFileVideoNumberOfSeasons(int numberOfSeasons, ofstream &storageVideoFile) {

    storageVideoFile << "numberOfSeasons = " << numberOfSeasons << ";" << endl;

}

// função que imprime no arquivo do vídeo o ano de lançamento
void printFileVideoReleaseYear(int releaseYear, ofstream &storageVideoFile) {

    storageVideoFile << "releaseYear = " << releaseYear << ";" << endl;

}

// função que imprime no arquivo do vídeo os gêneros aos quais o vídeo pertence
void printFileVideoGenres(GenresStructure genres, ofstream &storageVideoFile) {

	storageVideoFile << "genres = {\n";

	for (int i = 0; i < genres.numberOfGenre; i++) {
		storageVideoFile << "genero " << genres.genres[i] << "," << endl;
	}

	storageVideoFile << "}" << endl;
}

// função que imprime no arquivo do vídeo um vídeo
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

// função que imprime no arquivo do vídeo todos os vídeos
void printFileVideoList(VideoListDocumentStructure vet, string storageVideoFileName) {
	
	ofstream storageVideoFile;
	storageVideoFile.open(storageVideoFileName);

	for (int i = 0; i < vet.numberOfVideos; i++) {
		storageVideoFile << "{" << endl;

		printFileVideo(vet.videosList[i] , storageVideoFile);

		storageVideoFile << "}" << endl;
	}

	storageVideoFile.close();
}
