#include "read_stdio_video.hpp"

// função que gera um ID automaticamente
string readStdioVideoIdentification() {

	string identification;

    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira a identificação do vídeo: ";
	
	getline(cin, identification);
	
	return identification;
}

// função que faz a leitura na saída estândar do tipo de vídeo
string readStdioVideoKindOfVideo() {
	
	string kindOfVideo;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira o tipo de vídeo: ";
	
	getline(cin, kindOfVideo);
	
	return kindOfVideo;
}

// função que faz a leitura na saída estândar do nome do vídeo
string readStdioVideoName() {
	
	string name;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira o nome de vídeo: ";
	
	getline(cin, name);
	
	return name;
}

// função que faz a leitura na saída estândar do nome do diretor do vídeo
string readStdioVideoDirectorName() {
	
	string directorsName;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira o nome do Diretor: ";
	
	getline(cin, directorsName);
	
	return directorsName;
}

// função que faz a leitura na saída estândar das horas de duração do vídeo
int readStdioVideoHours() {
	
	int hours;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira quantas horas completas tem o vídeo: ";
	
	cin >> hours;
	
	return hours;
}

// função que faz a leitura na saída estândar dos minutos de duração do vídeo
int readStdioVideoMinutes() {
	
	int minutes;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira quantos minutos completos tem o vídeo: ";
	
	cin >> minutes;
	
	return minutes;
}

// função que faz a leitura na saída estândar dos segundos de duração do vídeo
int readStdioVideoSeconds() {
	
	int seconds;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira quantos segundos tem o vídeo: ";
	
	cin >> seconds;
	
	return seconds;
}

// função que faz a leitura na saída estândar da duração do vídeo
DurationStructure readStdioVideoDuration() {
	
	DurationStructure duration;
	
	duration.hours = readStdioVideoHours();
	duration.minutes = readStdioVideoMinutes();
	duration.seconds = readStdioVideoSeconds();
	
	return duration;
}

// função que faz a leitura na saída estândar do número de temporadas de um vídeo
int readStdioVideoNumberOfSeasons() {
	
	int numberOfSeasons;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira quantas temporadas tem a série: ";
	
	cin >> numberOfSeasons;
	
	return numberOfSeasons;
}

// função que faz a leitura na saída estândar do vídeo o ano de lançamento
int readStdioVideoReleaseYear() {
	
	int releaseYear;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira o ano de lançamento do vídeo: ";
	
	cin >> releaseYear;
	
	return releaseYear;
}

// função que faz a leitura na saída estândar do número de gêneros do vídeo
int readStdioVideoNumberOfGenres() {
	
	int numberOfGenres;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira quantos gêneros o vídeo possui: ";
	
	cin >> numberOfGenres;
	
	return numberOfGenres;
}

// função que faz a leitura na saída estândar dos gêneros aos quais o vídeo pertence
GenresStructure readStdioVideoGenres() {

	GenresStructure genres;
	
	genres.numberOfGenre = readStdioVideoNumberOfGenres();
	
	for (int i = 0; i < genres.numberOfGenre; i++) {

		cin.clear();
	    cin.ignore(numeric_limits<streamsize>::max(),'\n');

		cout << endl << endl;
	
		cout << "      Genero " << i + 1 << ": ";
	
		cin >> genres.genres[i];
	}

	cout << endl
		 << "----------------------------------------" << endl << endl;
	
	return genres;
}

// função que faz a leitura na saída estândar de um vídeo
VideoDocumentStructure readStdioVideo() {
	
	VideoDocumentStructure video;

	video.identification = "";
	video.kindOfVideo = readStdioVideoKindOfVideo();
	video.name = readStdioVideoName();
	video.directorName = readStdioVideoDirectorName();
	video.durartion = readStdioVideoDuration();
	video.numberOfSeasons = readStdioVideoNumberOfSeasons();
	video.releaseYear = readStdioVideoReleaseYear();
	video.genres = readStdioVideoGenres();

	return video;
}
