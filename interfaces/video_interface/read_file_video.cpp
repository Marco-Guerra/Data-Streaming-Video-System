#include "read_file_video.hpp"

/**
* Funtion: que faz a leitura no arquivo do vídeo a identificação de um vídeo
* @param {ifstream} - arquivo de entrada
* @returns {string} - line
* 
* @precondition: none
* @postcondition: none
*/
string readFileVideoIdentificatio(ifstream &storageVideoFile) {

    string line;

	getline(storageVideoFile, line);

	line = removeCharacter(line, ' ');
	line = processInput(line);

	return line;
}

/**
* Funtion: que faz a leitura no arquivo do vídeo o tipo de vídeo
* @param {ifstream} - arquivo de entrada
* @returns {string} - line
* 
* @precondition: none
* @postcondition: none
*/
string readFileVideoKindOfVideo(ifstream &storageVideoFile) {

    string line;

	getline(storageVideoFile, line);

	line = processInput(line);
	line = removeEspaces(line);

	return line;
}

/**
* Funtion: que faz a leitura no arquivo do vídeo o nome do vídeo
* @param {ifstream} - arquivo de entrada
* @returns {string} - line
* 
* @precondition: none
* @postcondition: none
*/
string readFileVideoName(ifstream &storageVideoFile) {

    string line;

	getline(storageVideoFile, line);

	line = processInput(line);
	line = removeEspaces(line);

	return line;
}

/**
* Funtion: que faz a leitura no arquivo do vídeo o nome do diretor do vídeo
* @param {ifstream} - arquivo de entrada
* @returns {string} - line
* 
* @precondition: none
* @postcondition: none
*/
string readFileVideoDirectorName(ifstream &storageVideoFile) {

    string line;

	getline(storageVideoFile, line);

	line = processInput(line);
	line = removeEspaces(line);

	return line;
}

/**
* Funtion: que faz a leitura no arquivo do vídeo a duração do vídeo
* @param {ifstream} - arquivo de entrada
* @returns {DurationStructure} - retorna a duração de um vídeo
* 
* @precondition: none
* @postcondition: none
*/
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

/**
* Funtion: que faz a leitura no arquivo do vídeo o número de temporadas de um vídeo
* @param {ifstream} - arquivo de entrada
* @returns {int} - retorna o número de temporadas
* 
* @precondition: none
* @postcondition: none
*/
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

/**
* Funtion: que faz a leitura no arquivo do vídeo do ano de lançamento
* @param {ifstream} - arquivo de entrada
* @returns {int} - retorna o ano de lançamento
* 
* @precondition: none
* @postcondition: none
*/
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

/**
* Funtion: que retira vírgulas do final da cadeia de caracteres
* @param {string} - line
* @returns {string} - retorna os caracteres sem ','
* 
* @precondition: none
* @postcondition: none
*/
string processGenre(string line) {

	return line.substr( 0 , line.find(","));

}

/**
* Funtion: que le um gênero de vídeo
* @param {ifstream} - arquivo de entrada
* @param {string} - gênero de um vídeo
* @returns {bool} - caso false parar de ler gêneros, caso true continuar lendo gêneros
* 
* @precondition: none
* @postcondition: none
*/
bool readFileVideoGenre(ifstream &storageVideoFile, string &genre) {

	string line;

	getline(storageVideoFile, line);

	if (line == "}") {
		return false;
	}

	genre = line.substr(line.find(' ') + 1);

	return true;
}

/**
* Funtion: que faz a leitura no arquivo do vídeo os gêneros aos quais o vídeo pertence
* @param {ifstream} - arquivo de entrada
* @returns {GenreStructure} - Retorna os gêneros de um vídeo
* 
* @precondition: none
* @postcondition: none
*/
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

/**
* Funtion: que encontra o ultimo fechamento de chaves
* @param {ifstream} - arquivo de entrada
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void findEndOfStructureVideo(ifstream &storageVideoFile) {

	string line;

	getline(storageVideoFile, line);

	while(line != "}") {
		getline(storageVideoFile, line);
	}

	return;
}

/**
* Funtion: que faz a leitura no arquivo do vídeo um vídeo
* @param {ifstream} - arquivo de entrada
* @returns {VideoDocumentStructure} - retorna todos os dados de um vídeo
* 
* @precondition: none
* @postcondition: none
*/
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

/**
* Funtion: que acha o fim da struct
* @param {ifstream} - arquivo de entrada
* @returns {bool} - retorna true caso ache o inicío da estrutura ou false caso ache o fim do arquivo
* 
* @precondition: none
* @postcondition: none
*/
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

/**
* Funtion: que faz a leitura no arquivo do vídeo todos os vídeos
* @param {string} - nome do arquivo
* @returns {VideoListDocumentStructure} - retorna toda a quantidade de vídeos
* 
* @precondition: none
* @postcondition: none
*/
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
