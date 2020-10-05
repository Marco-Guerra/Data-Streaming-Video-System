#include "read_file_video.hpp"

string readVideoIdentification(ifstream &fn) {
	string aux;
	getline(fn, aux);
	aux = removeStringDelimitator(aux);
	aux = processInput(aux);
	cout << "Então ficou = " << aux << endl;
	return aux;
}

string readKindOfVideo(ifstream &fn) {
	string aux;
	getline(fn, aux);
	aux = processInput(aux);
	aux = removeEspaces(aux);
	cout << "li o kindOfVideo [" << aux << "]\n";
	return aux;
}

string readName(ifstream &fn) {
	string aux;
	getline(fn, aux);
	//aux = removeStringDelimitator(aux);
	aux = processInput(aux);
	aux = removeEspaces(aux);
	cout << "li o nome [" << aux << "]\n";
	return aux;
}

string readDirectorName(ifstream &fn) {
	string aux;
	getline(fn, aux);
	//aux = removeStringDelimitator(aux);
	aux = processInput(aux);
	aux = removeEspaces(aux);
	cout << "li o diretor [" << aux << "]\n";
	return aux;
}

DurationStructure readDuration(ifstream &fn) {
	string aux;
	char delimitator;
	DurationStructure duration;

	// le duration
	fn >> aux;
	// le =
	fn >> aux;


	fn >> duration.hours;

	fn >> delimitator;
	fn >> duration.minutes;


	fn >> delimitator;
	fn >> duration.seconds;
	while( delimitator != '\n') fn.get(delimitator);

	cout << "li a hora " << duration.hours << endl;
	cout << "li o minuto " << duration.minutes << endl;
	cout << "li o segundo " << duration.seconds << endl;
	return duration;
}

int readNumberOfSeasons(ifstream &fn) {
	int numberOfSeasons;
	string aux;
	char acha_fim_linha = 1;
	fn >> aux;
	fn >> aux;
	fn >> numberOfSeasons;

	while( acha_fim_linha != '\n') fn.get(acha_fim_linha);
	cout << "li o numberOfSeasons " << numberOfSeasons << endl;
	return numberOfSeasons;
}

int readReleaseYear(ifstream &fn) {
	string aux;
	int releaseYear;
	char acha_fim_linha = 1;

	fn >> aux;
	fn >> aux;
	fn >> releaseYear;
	while( acha_fim_linha != '\n') fn.get(acha_fim_linha);
	cout << "li o ReleaseYear " << releaseYear << endl;
	return releaseYear;
}

string processGenre(string s) {
	return s.substr( 0 , s.find(","));
}

bool readGenre(ifstream &fn, string &genre) {
	string aux;
	getline(fn, aux);
	if (aux == "}") {
		return false;
	}
	genre = aux;
	return true;
}

GenresStructure readGenres(ifstream &fn) {
	string aux;
	GenresStructure genres;
	int i;
	getline(fn, aux);
	if (aux != "genres = {") {
		cout << "Não achei o inicio de genre bora mata isso\n";
		cout << "So achei:" << aux << endl;
		return genres;
	}

	for (i = 0; readGenre(fn, aux); i++) {
		genres.genres[i] = processGenre(aux);
		cout << "li o genero numero " << i << " = [" << genres.genres[i] << "]\n";
	}
	genres.numberOfGenre = i;
	cout << "Acabei com os generos\n";
	return genres;
}

void readVideo(ifstream &fn) {
}

bool findBeginOfStructureVideo(ifstream &fn) {
	string aux;

	while(!fn.eof()) {
		getline(fn, aux);
		if (aux == "{") {
			return true;
		}
	}
	return false;
}

void findEndOfStructureVideo(ifstream &fn) {
	string aux;
	getline(fn, aux);
	while(aux != "}") {
		getline(fn, aux);
	}
	cout << "Achei o fim da structure\n";
	return;
}

VideoDocumentStructure readStructure(ifstream &fn) {

	VideoDocumentStructure aux;

	aux.identification = readVideoIdentification(fn);
	aux.kindOfVideo = readKindOfVideo(fn);
	aux.name = readName(fn);
	aux.directorName = readDirectorName(fn);
	aux.durartion = readDuration(fn);
	aux.numberOfSeasons = readNumberOfSeasons(fn);
	aux.releaseYear = readReleaseYear(fn);
	aux.genres = readGenres(fn);
	findEndOfStructureVideo(fn);

	return aux;
}

bool readFile(string file_name, VetorOfVideos &vetor) {
	ifstream inputFile;
	string aux;

	inputFile.open(file_name);

	if( !inputFile.is_open() ) {
		errorMessagesRead(7);
		return false;
	}

	int i;
	for (i = 0; findBeginOfStructureVideo(inputFile); i++) {
		vetor.vet[i] = readStructure(inputFile);
	}
	vetor.tam = i;
	return true;
}
