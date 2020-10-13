#include "print_file_video.hpp"

// função que imprime no arquivo do vídeo a identificação de um vídeo
void printFileVideoIdentification(string identification, ofstream &file) {
    file << "identification = " << identification << ";" << endl;
}

// função que imprime no arquivo do vídeo o tipo de vídeo
void printFileVideoKindOfVideo(string kindOfVideo, ofstream &file) {
    file << "kindOfVideo = " << kindOfVideo << ";" << endl;
}

// função que imprime no arquivo do vídeo o nome do vídeo
void printFileVideoName(string name, ofstream &file) {
    file << "name = " << name << ";" << endl;
}

// função que imprime no arquivo do vídeo o nome do diretor do vídeo
void printFileVideoDirectorName(string directorName, ofstream &file) {
    file << "directorName = " << directorName<< ";" << endl;
}

// função que imprime no arquivo do vídeo a duração do vídeo
void printFileVideoDuration(DurationStructure durartion, ofstream &file) {
    file << "duration = " << durartion.hours << ":" << durartion.minutes << ":" << durartion.seconds << ";\n";

}

// função que imprime no arquivo do vídeo o número de temporadas de um vídeo
void printFileVideoNumberOfSeasons(int numberOfSeasons, ofstream &file) {
    file << "numberOfSeasons = " << numberOfSeasons << ";" << endl;
}

// função que imprime no arquivo do vídeo o ano de lançamento
void printFileVideoReleaseYear(int releaseYear, ofstream &file) {
    file << "releaseYear = " << releaseYear << ";" << endl;
}

// função que imprime no arquivo do vídeo os gêneros aos quais o vídeo pertence
void printFileVideoGenres(GenresStructure genres, ofstream &file) {
	file << "genres = {\n";
	for (int i = 0; i < genres.numberOfGenre; i++) {
		file << "genero " << genres.genres[i] << "," << endl;
	}
	file << "}\n";
}

// função que imprime no arquivo do vídeo um vídeo
void printFileVideo(VideoDocumentStructure video, ofstream &file) {
	printFileVideoIdentification(video.identification, file);
	printFileVideoKindOfVideo(video.kindOfVideo, file);
	printFileVideoName(video.name, file);
	printFileVideoDirectorName(video.directorName, file);
	printFileVideoDuration(video.durartion, file);
	printFileVideoNumberOfSeasons(video.numberOfSeasons, file);
	printFileVideoReleaseYear(video.releaseYear, file);
	printFileVideoGenres(video.genres, file);
}

// função que imprime no arquivo do vídeo todos os vídeos
void printFileVideoList(VideoListDocumentStructure vet, string file_path) {
	ofstream output_file;
	output_file.open(file_path);

	for (int i = 0; i < vet.numberOfVideos; i++) {
		output_file << "{\n";
		printFileVideo(vet.videosList[i] , output_file);
		output_file << "}\n";
	}

	output_file.close();
}
