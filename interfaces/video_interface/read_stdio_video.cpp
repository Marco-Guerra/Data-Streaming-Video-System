#include "read_stdio_video.hpp"

string processInput(string s) {
	return s.substr( (s.find("=")) + 1);
}

void readVideoIdentification(ifstream &fn, string &identificator) {
	//testar, pois
	string aux;
	//guarda[2];
	getline(fn, aux);
	aux = removeStringSpaces(aux);
	identificator = processInput(aux);
}

void readKindOfVideo(ifstream &fn,  string &kindOfVideo) {
	string aux;
	getline(fn, aux);
	aux = removeStringSpaces(aux);
	kindOfVideo = processInput(aux);
}

void readName(ifstream &fn,  string &name) {
	string aux;
	getline(fn, aux);
	aux = removeStringSpaces(aux);
	name = processInput(aux);
}

void readDirectorName(ifstream &fn, string &directorName) {
	string aux;
	getline(fn, aux);
	aux = removeStringSpaces(aux);
	directorName = processInput(aux);
}

void readHours(ifstream &fn,  unsigned &inthours) {
	string aux;
	getline(fn, aux);
}

void readMinutes(ifstream &fn, unsigned int &minutes) {
	string aux;
	getline(fn, aux);
}

void readSeconds(ifstream &fn, unsigned int &seconds) {
	string aux;
	getline(fn, aux);
}

void readDuration(ifstream &fn, DurationStructure &durartion) {
	string aux;
	getline(fn, aux);
}

void readNumberOfSeasons(ifstream &fn, int &numberOfSeasons) {
	string aux;
	getline(fn, aux);
}

void readReleaseYear(ifstream &fn, int &releaseYear) {
	string aux;
	getline(fn, aux);
}

void readGenre(ifstream &fn, string &genre) {
	string aux;
	getline(fn, aux);
	aux = removeStringSpaces(aux);
	genre = processInput(aux);
}

void readGenres(ifstream &fn, GenresStructure &genres) {
	string aux;
	getline(fn, aux);
}

void readVideo(ifstream &fn, VideoDocumentStructure &video) {
	string aux;
	getline(fn, aux);
}

void findBeginOfStructureVideo(ifstream &fn) {
	string aux;
	while(aux != "{") {
		getline(fn, aux);
	}
	return;
}

VideoDocumentStructure readStructure(ifstream &fn, VideoDocumentStructure &aux) {

	return aux;
}

void readFile(string file_name, VetorOfVideos &vetor) {
	ifstream inputFile;

    inputFile.open(file_name);

    if( !inputFile.is_open() ) {
		errorMessagesRead( 7,  "");
    }

	for (int i = 0; !((inputFile).eof()); i++) {
		findBeginOfStructureVideo(&inputFile);
		readVideoIdentification(inputFile, vetor.vet[i].identification);
		readKindOfVideo(inputFile, vetor.vet[i].kindOfVideo);
		readName(inputFile, vetor.vet[i].name);
		readDirectorName(inputFile, vetor.vet[i].directorName);
		readDuration(inputFile, vetor.vet[i].durartion);
		readNumberOfSeasons(inputFile, vetor.vet[i].numberOfSeasons);
		readReleaseYear(inputFile, vetor.vet[i].releaseYear);
		readGenres(inputFile, vetor.vet[i].genres);
	}
}
