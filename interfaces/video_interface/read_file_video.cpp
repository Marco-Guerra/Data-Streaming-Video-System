#include "read_file_video.hpp"

// função que faz a leitura no arquivo do vídeo a identificação de um vídeo
string readFileVideoIdentificatio(ifstream &fn) {
    string aux;
	getline(fn, aux);
	aux = removeStringDelimitator(aux);
	aux = processInput(aux);
	cout << "Então ficou = " << aux << endl;
	return aux;
}

// função que faz a leitura no arquivo do vídeo o tipo de vídeo
string readFileVideoKindOfVideo(ifstream &fn) {
    string aux;
	getline(fn, aux);
	aux = processInput(aux);
	aux = removeEspaces(aux);
	cout << "li o kindOfVideo [" << aux << "]\n";
	return aux;
}

// função que faz a leitura no arquivo do vídeo o nome do vídeo
string readFileVideoName(ifstream &fn) {
    string aux;
	getline(fn, aux);
	//aux = removeStringDelimitator(aux);
	aux = processInput(aux);
	aux = removeEspaces(aux);
	cout << "li o nome [" << aux << "]\n";
	return aux;
}

// função que faz a leitura no arquivo do vídeo o nome do diretor do vídeo
string readFileVideoDirectorName(ifstream &fn) {
    string aux;
	getline(fn, aux);
	//aux = removeStringDelimitator(aux);
	aux = processInput(aux);
	aux = removeEspaces(aux);
	cout << "li o diretor [" << aux << "]\n";
	return aux;
}

// função que faz a leitura no arquivo do vídeo as horas de duração do vídeo
int readFileVideoHours(ifstream &fn) {

}

// função que faz a leitura no arquivo do vídeo os minutos de duração do vídeo
int readFileVideoMinutes(ifstream &fn) {
    
}

// função que faz a leitura no arquivo do vídeo os segundos de duração do vídeo
int readFileVideoSeconds(ifstream &fn) {
    
}

// função que faz a leitura no arquivo do vídeo a duração do vídeo
DurationStructure readFileVideoDuration(ifstream &fn) {
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

// função que faz a leitura no arquivo do vídeo o número de temporadas de um vídeo
int readFileVideoNumberOfSeasons(ifstream &fn) {
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

// função que faz a leitura no arquivo do vídeo do ano de lançamento
int readFileVideoReleaseYear(ifstream &fn) {
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

// retira virgulas do final da cadeia de caracteres
string processGenre(string s) {
	return s.substr( 0 , s.find(","));
}

// ler um genero de vìdeo
bool readGenre(ifstream &fn, string &genre) {
	string aux;
	getline(fn, aux);
	if (aux == "}") {
		return false;
	}
	genre = aux;
	return true;
}


// função que faz a leitura no arquivo do vídeo os gêneros aos quais o vídeo pertence
GenresStructure readFileVideoGenres(ifstream &fn) {
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

// função que faz a leitura no arquivo do vídeo o número de gêneros do vídeo
int readFileVideoNumberOfGenres(ifstream &fn) {
    
}

// encontrar o ultimo fechamento de chaves
void findEndOfStructureVideo(ifstream &fn) {
	string aux;
	getline(fn, aux);
	while(aux != "}") {
		getline(fn, aux);
	}
	cout << "Achei o fim da structure\n";
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

// função que faz a leitura no arquivo do vídeo todos os vídeos
VideoDocumentStructure readFileVideoList(ifstream &fn) {
    /*ifstream inputFile;
	string aux;

	inputFile.open(file_name);

	if( !inputFile.is_open() ) {
		cout << "Falha ao abrir o arquivo, nome inválido\n";
		return false;
	}

	int i;
	for (i = 0; findBeginOfStructureVideo(inputFile); i++) {
		vetor.vet[i] = readStructure(inputFile);
	}
	vetor.tam = i;
	return true;
    */
}