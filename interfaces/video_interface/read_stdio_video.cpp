#include "read_stdio_video.hpp"

void readVideoIdentification(ifstream &fn, string &identificator) {
	//testar, pois
	string aux;
	//guarda[2];
	getline(fn, aux);
	aux = removeStringDelimitator(aux);
	identificator = processInput(aux);
	cout << "li o identificador " << identificator << endl;
}

void readKindOfVideo(ifstream &fn,  string &kindOfVideo) {
	string aux;
	getline(fn, aux);
	aux = removeStringDelimitator(aux);
	kindOfVideo = processInput(aux);
	cout << "li o kindOfVideo " << kindOfVideo << endl;
}

void readName(ifstream &fn,  string &name) {
	string aux;
	getline(fn, aux);
	aux = removeStringDelimitator(aux);
	name = processInput(aux);
	cout << "li o nome " << name << endl;
}

void readDirectorName(ifstream &fn, string &directorName) {
	string aux;
	getline(fn, aux);
	aux = removeStringDelimitator(aux);
	directorName = processInput(aux);
	cout << "li o diretor " << directorName << endl;
}

//void readHours(ifstream &fn,  unsigned int &hours) {
//}

//void readMinutes(ifstream &fn, unsigned int &minutes) {
//}

//void readSeconds(ifstream &fn, unsigned int &seconds) {
//}

void readDuration(ifstream &fn, DurationStructure &duration) {
	string aux;
	char delimitator;
	//getline(fn, aux);
	//aux = removeStringDelimitator(aux);
	//aux = processInput(aux);
	//aux = removeStringDelimitator(aux, ':');
	//duration.hours = 
	//duration.minutes = 
	//duration.seconds = 

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
}

void readNumberOfSeasons(ifstream &fn, int &numberOfSeasons) {
	string aux;
	char acha_fim_linha = 'v';
	fn >> aux;
	fn >> aux;
	fn >> numberOfSeasons;


	while( acha_fim_linha != '\n') fn.get(acha_fim_linha);
	cout << "li o numberOfSeasons " << numberOfSeasons << endl;

}

void readReleaseYear(ifstream &fn, int &releaseYear) {
	string aux;
	char acha_fim_linha = 'v';

	fn >> aux;
	fn >> aux;
	fn >> releaseYear;
	while( acha_fim_linha != '\n') fn.get(acha_fim_linha);
	cout << "li o ReleaseYear " << releaseYear << endl;
}

string processGenre(string s) {
	return s.substr( ((s.find("=")) + 1) , s.find(","));
}

bool readGenre(ifstream &fn, string &genre) {
	string aux;
	getline(fn, aux);
	if (aux == "}") {
		return false;
	}
	return true;
}

void readGenres(ifstream &fn, GenresStructure &genres) {
	string aux;
	int i;
	getline(fn, aux);
	if (aux != "genres = {") {
		cout << "Não achei o inicio de genre bora mata isso\n";
		cout << "So achei:" << aux << endl;
		return;
	}

	for (i = 0; readGenre(fn, aux); i++) {
		genres.genres[i] = processGenre(aux);
		cout << "li o genero numero " << i << endl;
	}
	genres.numberOfGenre = i;
	cout << "Acabei com os generos\n";
}

void readVideo(ifstream &fn, VideoDocumentStructure &video) {
}

void findBeginOfStructureVideo(ifstream &fn) {
	string aux;
	getline(fn, aux);
	while(aux != "{") {
		getline(fn, aux);
	}
	return;
}

void findEndOfStructureVideo(ifstream &fn) {
	string aux;
	getline(fn, aux);
	while(aux != "}") {
		getline(fn, aux);
	}
	return;
}

VideoDocumentStructure readStructure(ifstream &fn, VideoDocumentStructure &aux) {

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

	for (int i = 0; !((inputFile).eof()); i++) {
		findBeginOfStructureVideo(inputFile);
		readVideoIdentification(inputFile, vetor.vet[i].identification);
		readKindOfVideo(inputFile, vetor.vet[i].kindOfVideo);
		readName(inputFile, vetor.vet[i].name);
		readDirectorName(inputFile, vetor.vet[i].directorName);
		readDuration(inputFile, vetor.vet[i].durartion);
		readNumberOfSeasons(inputFile, vetor.vet[i].numberOfSeasons);
		readReleaseYear(inputFile, vetor.vet[i].releaseYear);
		readGenres(inputFile, vetor.vet[i].genres);
		findEndOfStructureVideo(inputFile);
	}
	return true;
}
