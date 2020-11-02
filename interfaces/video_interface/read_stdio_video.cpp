#include "read_stdio_video.hpp"

/**
* Funtion: que gera um ID automaticamente
* @returns {string} - retorna um ID gerado automaticamente
* 
* @precondition: none
* @postcondition: none
*/
string readStdioVideoIdentification() {

	string identification;

    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira a identificação do vídeo: ";
	
	getline(cin, identification);
	
	return identification;
}

/**
* Funtion: que faz a leitura na saída estândar do tipo de vídeo
* @returns {string} - retorna o tipo do vídeo
* 
* @precondition: none
* @postcondition: none
*/
string readStdioVideoKindOfVideo() {
	
	string kindOfVideo;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira o tipo de vídeo: ";
	
	getline(cin, kindOfVideo);
	
	return kindOfVideo;
}

/**
* Funtion: que faz a leitura na saída estândar do nome do vídeo
* @returns {string} - retorna o nome do vídeo
* 
* @precondition: none
* @postcondition: none
*/
string readStdioVideoName() {
	
	string name;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira o nome de vídeo: ";
	
	getline(cin, name);
	
	return name;
}

/**
* Funtion: que faz a leitura na saída estândar do nome do diretor do vídeo
* @returns {string} - retorna o nome do diretor do vídeo
* 
* @precondition: none
* @postcondition: none
*/
string readStdioVideoDirectorName() {
	
	string directorsName;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira o nome do Diretor: ";
	
	getline(cin, directorsName);
	
	return directorsName;
}

/**
* Funtion: que faz a leitura na saída estândar das horas de duração do vídeo
* @returns {int} - retorna quantas horas o vídeo possuí
* 
* @precondition: none
* @postcondition: none
*/
int readStdioVideoHours() {
	
	int hours;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira quantas horas completas tem o vídeo: ";
	
	cin >> hours;
	
	return hours;
}

/**
* Funtion: que faz a leitura na saída estândar dos minutos de duração do vídeo
* @returns {int} - retorna quantos minutos o vídeo possuí
* 
* @precondition: none
* @postcondition: none
*/
int readStdioVideoMinutes() {
	
	int minutes;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira quantos minutos completos tem o vídeo: ";
	
	cin >> minutes;
	
	return minutes;
}

/**
* Funtion: que faz a leitura na saída estândar dos segundos de duração do vídeo
* @returns {int} - retorna quantos segundos o vídeo possuí
* 
* @precondition: none
* @postcondition: none
*/
int readStdioVideoSeconds() {
	
	int seconds;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira quantos segundos tem o vídeo: ";
	
	cin >> seconds;
	
	return seconds;
}

/**
* Funtion: que faz a leitura na saída estândar da duração do vídeo
* @returns {DurationStructure} - retorna a duração completa do vídeo
* 
* @precondition: none
* @postcondition: none
*/
DurationStructure readStdioVideoDuration() {
	
	DurationStructure duration;
	
	duration.hours = readStdioVideoHours();
	duration.minutes = readStdioVideoMinutes();
	duration.seconds = readStdioVideoSeconds();
	
	return duration;
}

/**
* Funtion: que faz a leitura na saída estândar do número de temporadas de um vídeo
* @returns {int} - retorna a número de temporadas que o vídeo possuí
* 
* @precondition: none
* @postcondition: none
*/
int readStdioVideoNumberOfSeasons() {
	
	int numberOfSeasons;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira quantas temporadas tem a série: ";
	
	cin >> numberOfSeasons;
	
	return numberOfSeasons;
}

/**
* Funtion: que faz a leitura na saída estândar do vídeo o ano de lançamento
* @returns {int} - retorna o ano de lançamento de um vídeo
* 
* @precondition: none
* @postcondition: none
*/
int readStdioVideoReleaseYear() {
	
	int releaseYear;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira o ano de lançamento do vídeo: ";
	
	cin >> releaseYear;
	
	return releaseYear;
}

/**
* Funtion: que faz a leitura na saída estândar do número de gêneros do vídeo
* @returns {int} - retorna o numero de gêneros que o vídeo possuí
* 
* @precondition: none
* @postcondition: none
*/
int readStdioVideoNumberOfGenres() {
	
	int numberOfGenres;
	
    cout << endl
		 << "----------------------------------------" << endl << endl;

	cout << "   Insira quantos gêneros o vídeo possui: ";
	
	cin >> numberOfGenres;
	
	return numberOfGenres;
}

/**
* Funtion: que faz a leitura na saída estândar dos gêneros aos quais o vídeo pertence
* @returns {GenreStructure} - retorna os gêneros que o vídeo possuí
* 
* @precondition: none
* @postcondition: none
*/
GenresStructure readStdioVideoGenres() {

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	GenresStructure genres;
	
	genres.numberOfGenre = readStdioVideoNumberOfGenres();
	
	for (int i = 0; i < genres.numberOfGenre; i++) {


		cout << endl << endl;
	
		cout << "      Genero " << i + 1 << ": ";
	
		cin >> genres.genres[i];
		cin.clear();
	    cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}

	cout << endl
		 << "----------------------------------------" << endl << endl;
	
	return genres;
}

/**
* Funtion: que faz a leitura na saída estândar de um vídeo
* @returns {VideoDocumentStructure} - retorna todos os dados de um vídeo
* 
* @precondition: none
* @postcondition: none
*/
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
	system("echo li do stdio um video >> logs/log");

	return video;
}
