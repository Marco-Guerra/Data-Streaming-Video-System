#include "read_stdio_video.hpp"

// função que faz a leitura na saída estândar da identificação de um vídeo
string readStdioVideoIdentification() {
	cout << "Insira o ID: ";
	string aux;
	cin >> aux;
	return aux;
}

// função que faz a leitura na saída estândar do tipo de vídeo
string readStdioVideoKindOfVideo() {
	cout << "Insira o tipo de vídeo: ";
	string aux;
	cin >> aux;
	getline(cin, aux);
	return aux;
}

// função que faz a leitura na saída estândar do nome do vídeo
string readStdioVideoName() {
	cout << "Insira o nome de vídeo: ";
	string aux;
	getline(cin, aux);
	return aux;
}

// função que faz a leitura na saída estândar do nome do diretor do vídeo
string readStdioVideoDirectorName() {
	cout << "Insira o nome do Diretor: ";
	string aux;
	getline(cin, aux);
	return aux;
}

// função que faz a leitura na saída estândar das horas de duração do vídeo
int readStdioVideoHours() {
	cout << "Insira quantas horas completas tem o vídeo: ";
	int aux;
	cin >> aux;
	return aux;
}

// função que faz a leitura na saída estândar dos minutos de duração do vídeo
int readStdioVideoMinutes() {
	cout << "Insira quantos minutos completos tem o vídeo: ";
	int aux;
	cin >> aux;
	return aux;
}

// função que faz a leitura na saída estândar dos segundos de duração do vídeo
int readStdioVideoSeconds() {
	cout << "Insira quantos segundos tem o vídeo: ";
	int aux;
	cin >> aux;
	return aux;
}

// função que faz a leitura na saída estândar da duração do vídeo
DurationStructure readStdioVideoDuration() {
	DurationStructure aux;
	aux.hours = readStdioVideoHours();
	aux.minutes = readStdioVideoMinutes();
	aux.seconds = readStdioVideoSeconds();
	return aux;
}

// função que faz a leitura na saída estândar do número de temporadas de um vídeo
int readStdioVideoNumberOfSeasons() {
	cout << "Insira quantas temporadas tem a série: ";
	int aux;
	cin >> aux;
	return aux;
}

// função que faz a leitura na saída estândar do vídeo o ano de lançamento
int readStdioVideoReleaseYear() {
	cout << "Insira o ano de lançamento do vídeo: ";
	int aux;
	cin >> aux;
	return aux;
}

// função que faz a leitura na saída estândar do número de gêneros do vídeo
int readStdioVideoNumberOfGenres() {
	cout << "Insira quantos gêneros o vídeo possui: ";
	int aux;
	cin >> aux;
	return aux;
}

// função que faz a leitura na saída estândar dos gêneros aos quais o vídeo pertence
GenresStructure readStdioVideoGenres() {

	GenresStructure aux;
	aux.numberOfGenre = readStdioVideoNumberOfGenres();
	for (int i = 0; i < aux.numberOfGenre; i++) {
		cout << "Genero " << i + 1 << ": ";
		cin >> aux.genres[i];
	}
	return aux;
}

// função que faz a leitura na saída estândar de um vídeo
VideoDocumentStructure readStdioVideo() {
	VideoDocumentStructure aux;

	aux.identification = readStdioVideoIdentification();
	aux.kindOfVideo = readStdioVideoKindOfVideo();
	aux.name = readStdioVideoName();
	aux.directorName = readStdioVideoDirectorName();
	aux.durartion = readStdioVideoDuration();
	aux.numberOfSeasons = readStdioVideoNumberOfSeasons();
	aux.releaseYear = readStdioVideoReleaseYear();
	aux.genres = readStdioVideoGenres();

	return aux;
}

// função que faz a leitura na saída estândar de todos os vídeos
//VideoDocumentStructure readStdioVideoList() {
//}
