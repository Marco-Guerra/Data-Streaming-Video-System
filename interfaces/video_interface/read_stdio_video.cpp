#include "read_stdio_video.hpp"
#include <boost/algorithm/string/split.hpp>

void readVideoIdentification(ifstream *fn, string identificator) {
	//testar, pois
	string aux, guarda[2];
	getline(*fn, aux);
	aux = removeStringSpaces(aux);
	boost::split(guarda, aux, boost::is_any_of("="));
	aux = guarda[1];
}

void readKindOfVideo(ifstream *fn,  string kindOfVideo) {
}

void readName(ifstream *fn,  string name) {
}

void readDirectorName(ifstream *fn, string directorName) {
}

void readHours(ifstream *fn,  unsigned inthours) {
}

void readMinutes(ifstream *fn, unsigned int minutes) {
}

void readSeconds(ifstream *fn, unsigned int seconds) {
}

void readDuration(ifstream *fn, DurationStructure durartion) {
}

void readNumberOfSeasons(ifstream *fn, int numberOfSeasons) {
}

void readReleaseYear(ifstream *fn, int releaseYear) {
}

void readGenre(ifstream *fn, string genre) {
}

void readGenres(ifstream *fn, GenresStructure genres) {
}

void readVideo(ifstream *fn, VideoDocumentStructure video) {
}

void findBeginOfStructureVideo(ifstream *fn) {
	string aux;
	while(aux != "{") {
		getline(*fn, aux);
	}
	return;
}

VideoDocumentStructure readStructure(ifstream *fn, VideoDocumentStructure aux) {

	return aux;
}

void readFile(string file_name, VetorOfVideos vetor) {
	ifstream inputFile;

    inputFile.open(file_name);

    if( !inputFile.is_open() ) {
		errorMessagesRead( 7,  "");
    }

	for (int i = 0; !((inputFile).eof()); i++) {
		findBeginOfStructureVideo(&inputFile);
		readVideoIdentification(&inputFile, vetor.vet[i].identification);
		readKindOfVideo(&inputFile, vetor.vet[i].kindOfVideo);
		readName(&inputFile, vetor.vet[i].name);
		readDirectorName(&inputFile, vetor.vet[i].directorName);
		readDuration(&inputFile, vetor.vet[i].durartion);
		readNumberOfSeasons(&inputFile, vetor.vet[i].numberOfSeasons);
		readReleaseYear(&inputFile, vetor.vet[i].releaseYear);
		readGenres(&inputFile, vetor.vet[i].genres);
	}
}
