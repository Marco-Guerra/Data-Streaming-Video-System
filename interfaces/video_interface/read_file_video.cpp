#include "read_file_video.hpp"

// função que faz a leitura no arquivo do vídeo a identificação de um vídeo
string readFileVideoIdentificatio(ifstream &storageVideoFile) {

    string line;

	getline(storageVideoFile, line);

	line = removeCharacter(line, ' ');
	line = processInput(line);

	return line;
}

// função que faz a leitura no arquivo do vídeo o tipo de vídeo
string readFileVideoKindOfVideo(ifstream &storageVideoFile) {

    string line;

	getline(storageVideoFile, line);

	line = processInput(line);
	line = removeEspaces(line);

	return line;
}

// função que faz a leitura no arquivo do vídeo o nome do vídeo
string readFileVideoName(ifstream &storageVideoFile) {

    string line;

	getline(storageVideoFile, line);

	line = processInput(line);
	line = removeEspaces(line);

	return line;
}

// função que faz a leitura no arquivo do vídeo o nome do diretor do vídeo
string readFileVideoDirectorName(ifstream &storageVideoFile) {

    string line;

	getline(storageVideoFile, line);

	line = processInput(line);
	line = removeEspaces(line);

	return line;
}

// função que faz a leitura no arquivo do vídeo a duração do vídeo
DurationStructure readFileVideoDuration(ifstream &storageVideoFile) {

    string discard;
	char delimitator;
	DurationStructure duration;

	storageVideoFile >> discard;
	storageVideoFile >> discard;
	storageVideoFile >> duration.hours;
	storageVideoFile >> delimitator;
	storageVideoFile >> duration.minutes;
	storageVideoFile >> delimitator;
	storageVideoFile >> duration.seconds;

	while( delimitator != '\n') storageVideoFile.get(delimitator);

	return duration;
}

// função que faz a leitura no arquivo do vídeo o número de temporadas de um vídeo
int readFileVideoNumberOfSeasons(ifstream &storageVideoFile) {

	string discard;
    int numberOfSeasons;
	char acha_fim_linha = 1;

	storageVideoFile >> discard;
	storageVideoFile >> discard;
	storageVideoFile >> numberOfSeasons;

	while( acha_fim_linha != '\n') storageVideoFile.get(acha_fim_linha);

	return numberOfSeasons;
}

// função que faz a leitura no arquivo do vídeo do ano de lançamento
int readFileVideoReleaseYear(ifstream &storageVideoFile) {

    string discard;
	int releaseYear;
	char acha_fim_linha = 1;

	storageVideoFile >> discard;
	storageVideoFile >> discard;
	storageVideoFile >> releaseYear;

	while( acha_fim_linha != '\n') storageVideoFile.get(acha_fim_linha);

	return releaseYear;
}

// retira vírgulas do final da cadeia de caracteres
string processGenre(string line) {

	return line.substr( 0 , line.find(","));

}

// ler um gênero de vídeo
bool readFileVideoGenre(ifstream &storageVideoFile, string &genre) {

	string line;

	getline(storageVideoFile, line);

	if (line == "}") {
		return false;
	}

	genre = line.substr(line.find(' ') + 1);

	return true;
}


// função que faz a leitura no arquivo do vídeo os gêneros aos quais o vídeo pertence
GenresStructure readFileVideoGenres(ifstream &storageVideoFile) {

    string line;
	GenresStructure genres;
	int i;

	getline(storageVideoFile, line);

	if (line != "genres = {") {
		return genres;
	}

	for (i = 0; readFileVideoGenre(storageVideoFile, line); i++) {
		genres.genres[i] = processGenre(line);
	}

	genres.numberOfGenre = i;

	return genres;
}

// encontrar o ultimo fechamento de chaves
void findEndOfStructureVideo(ifstream &storageVideoFile) {

	string line;

	getline(storageVideoFile, line);

	while(line != "}") {
		getline(storageVideoFile, line);
	}

	return;
}

// função que faz a leitura no arquivo do vídeo um vídeo
VideoDocumentStructure readFileVideo(ifstream &storageVideoFile) {
    
	VideoDocumentStructure video;

	video.identification = readFileVideoIdentificatio(storageVideoFile);
	video.kindOfVideo = readFileVideoKindOfVideo(storageVideoFile);
	video.name = readFileVideoName(storageVideoFile);
	video.directorName = readFileVideoDirectorName(storageVideoFile);
	video.durartion = readFileVideoDuration(storageVideoFile);
	video.numberOfSeasons = readFileVideoNumberOfSeasons(storageVideoFile);
	video.releaseYear = readFileVideoReleaseYear(storageVideoFile);
	video.genres = readFileVideoGenres(storageVideoFile);
	findEndOfStructureVideo(storageVideoFile);

	return video;
}

// acha o fim da struct
// true caso ache
// false caso ache o fim do arquivo
bool findBeginOfStructureVideo(ifstream &storageVideoFile) {

	string line;

	while(!storageVideoFile.eof()) {

		getline(storageVideoFile, line);

		if (line == "{") {
			return true;
		}
	}

	return false;
}

// função que faz a leitura no arquivo do vídeo todos os vídeos
VideoListDocumentStructure readFileVideoList(string storageVideoFileName) {

	ifstream storageVideoFile;
	VideoListDocumentStructure videoList;
	int i;

	storageVideoFile.open(storageVideoFileName);

	if( !storageVideoFile.is_open() ) {
		cout << "Falha ao abrir o arquivo, nome inválido\n";
		exit(0);
	}

	for (i = 0; findBeginOfStructureVideo(storageVideoFile); i++) {
		videoList.videosList[i] = readFileVideo(storageVideoFile);
	}

	videoList.numberOfVideos = i;

	return videoList;
}