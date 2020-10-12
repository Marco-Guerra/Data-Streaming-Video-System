#include "read_file_video.hpp"

// função que faz a leitura no arquivo do vídeo a identificação de um vídeo
string readFileVideoIdentificatio(ifstream &fn) {
    string aux;
	getline(fn, aux);
	aux = removeStringDelimitator(aux);
	aux = processInput(aux);
	return aux;
}

// função que faz a leitura no arquivo do vídeo o tipo de vídeo
string readFileVideoKindOfVideo(ifstream &fn) {
    string aux;
	getline(fn, aux);
	aux = processInput(aux);
	aux = removeEspaces(aux);
	return aux;
}

// função que faz a leitura no arquivo do vídeo o nome do vídeo
string readFileVideoName(ifstream &fn) {
    string aux;
	getline(fn, aux);
	aux = processInput(aux);
	aux = removeEspaces(aux);
	return aux;
}

// função que faz a leitura no arquivo do vídeo o nome do diretor do vídeo
string readFileVideoDirectorName(ifstream &fn) {
    string aux;
	getline(fn, aux);
	aux = processInput(aux);
	aux = removeEspaces(aux);
	return aux;
}

// função que faz a leitura no arquivo do vídeo a duração do vídeo
DurationStructure readFileVideoDuration(ifstream &fn) {
    string aux;
	char delimitator;
	DurationStructure duration;

	// lê duration
	fn >> aux;
	// lê =
	fn >> aux;


	fn >> duration.hours;

	fn >> delimitator;
	fn >> duration.minutes;

	fn >> delimitator;
	fn >> duration.seconds;
	while( delimitator != '\n') fn.get(delimitator);

	return duration;
}

// função que faz a leitura no arquivo do vídeo o número de temporadas de um vídeo
int readFileVideoNumberOfSeasons(ifstream &fn) {
    int numberOfSeasons;
	string aux;
	char acha_fim_linha = 1;
	fn >> aux;
	fn >> aux;
	fn >> numberOfSeasons;

	while( acha_fim_linha != '\n') fn.get(acha_fim_linha);
	return numberOfSeasons;
}

// função que faz a leitura no arquivo do vídeo do ano de lançamento
int readFileVideoReleaseYear(ifstream &fn) {
    string aux;
	int releaseYear;
	char acha_fim_linha = 1;

	fn >> aux;
	fn >> aux;
	fn >> releaseYear;
	while( acha_fim_linha != '\n') fn.get(acha_fim_linha);
	return releaseYear;
}

// retira vírgulas do final da cadeia de caracteres
string processGenre(string s) {
	return s.substr( 0 , s.find(","));
}

// ler um gênero de vídeo
bool readFileVideoGenre(ifstream &fn, string &genre) {
	string aux;
	getline(fn, aux);
	if (aux == "}") {
		return false;
	}
	genre = aux.substr(aux.find(' ') + 1);
	return true;
}


// função que faz a leitura no arquivo do vídeo os gêneros aos quais o vídeo pertence
GenresStructure readFileVideoGenres(ifstream &fn) {
    string aux;
	GenresStructure genres;
	int i;
	getline(fn, aux);
	if (aux != "genres = {") {
		return genres;
	}

	for (i = 0; readFileVideoGenre(fn, aux); i++) {
		genres.genres[i] = processGenre(aux);
	}
	genres.numberOfGenre = i;
	return genres;
}

// encontrar o ultimo fechamento de chaves
void findEndOfStructureVideo(ifstream &fn) {
	string aux;
	getline(fn, aux);
	while(aux != "}") {
		getline(fn, aux);
	}
	return;
}

// função que faz a leitura no arquivo do vídeo um vídeo
VideoDocumentStructure readFileVideo(ifstream &fn) {
    
	VideoDocumentStructure aux;

	aux.identification = readFileVideoIdentificatio(fn);
	aux.kindOfVideo = readFileVideoKindOfVideo(fn);
	aux.name = readFileVideoName(fn);
	aux.directorName = readFileVideoDirectorName(fn);
	aux.durartion = readFileVideoDuration(fn);
	aux.numberOfSeasons = readFileVideoNumberOfSeasons(fn);
	aux.releaseYear = readFileVideoReleaseYear(fn);
	aux.genres = readFileVideoGenres(fn);
	findEndOfStructureVideo(fn);

	return aux;
}

// acha o fim da struct
// true caso ache
// false caso ache o fim do arquivo
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

// função que faz a leitura no arquivo do vídeo todos os vídeos
VetorOfVideos readFileVideoList(string file_name) {
	ifstream inputFile;
	VetorOfVideos vetor;

	inputFile.open(file_name);

	if( !inputFile.is_open() ) {
		cout << "Falha ao abrir o arquivo, nome inválido\n";
		exit(0);
	}

	int i;
	for (i = 0; findBeginOfStructureVideo(inputFile); i++) {
		vetor.vet[i] = readFileVideo(inputFile);
	}
	vetor.tam = i;
	return vetor;
}
