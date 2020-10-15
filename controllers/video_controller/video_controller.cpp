#include "video_controller.hpp"


/**
* Funtion: troca vídeos de posição
* @param {VideoDocumentStructure} - vídeo a
* @param {VideoDocumentStructure} - vídeo b
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void swapVideo (VideoDocumentStructure &videoA, VideoDocumentStructure &videoB) {
	
    VideoDocumentStructure auxiliaryVideo = videoA;

	videoA = videoB;
	videoB = auxiliaryVideo;
}

/**
* Funtion: busca um vídeo pela sua identificação
* @param {VideoListDocumentStructure} - 
* @param {string} - identificação do vídeo que está sendo buscado
* @returns {int} - posição do vídeo
* 
* @precondition: none
* @postcondition: none
*/
int findVideoByIdentification(VideoListDocumentStructure &videoList, string identification) {
	
    string thisIdentification;

    identification = removeCharacter(identification, ' ');
    identification = removeCharacter(identification, '\n');

	for (int i = 0; i < videoList.numberOfVideos; i++) {

        thisIdentification = videoList.videosList[i].identification;

		if ( identification == thisIdentification ) {
			return i;
		}
	}
	return -1;
}

/**
* Funtion: busca um vídeo pelo seu nome
* @param {VideoListDocumentStructure} - lista onde buscar um vídeo
* @param {string} - nome do vídeo
* @returns {int} - posição do vídeo
* 
* @precondition: none
* @postcondition: none
*/
int findVideoByName(VideoListDocumentStructure &videoList, string name) {
	
    string thisName;

    name = removeEspaces(name);
    name = removeCharacter(name, '\n');

	for (int i = 0; i < videoList.numberOfVideos; i++) {

        thisName = videoList.videosList[i].name;

		if ( name == thisName ) {
			return i;
		}
	}

	return -1;
}

/**
* Funtion: gera uma identificação automaticamente
* @returns {string} - identificação gerada automaticamente
* 
* @precondition: none
* @postcondition: none
*/
string gerateVideoIdentification() {

	string newIdentification;

	auto timeNow = chrono::system_clock::to_time_t(chrono::system_clock::now());

	newIdentification = ctime(&timeNow);
	newIdentification = removeCharacter(newIdentification, ' ');
	newIdentification = removeCharacter(newIdentification, ':');
	newIdentification = removeCharacter(newIdentification, '\n');

	return newIdentification;
}

/**
* Funtion: retorna a posição do vídeo selecionado
* @param {UserListDocumentStructure} - lista de vídeos onde será feita a busca
* @returns {void} - posição do íveo
* 
* @precondition: none
* @postcondition: none
*/
int selectVideoByIdentification(VideoListDocumentStructure &videoList) {

	string identification;
    int position;

    while(true) {

        identification = readStdioVideoIdentification();

        position = findVideoByIdentification(videoList, identification);

        if( position != -1 ){
            return position;
            break;
        }else{
            cout << "Vídeo não encontrado." << endl;
            cout << "Tentar novamente. [y/n] ";

            string response;

            cin >> response;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

            if( response[0] == 'n' ) {
                return position;
            }
        }
    }
}

/**
* Funtion: retorna a posição do usuário selecionado
* @param {UserListDocumentStructure} - lista de usuários onde será feita a busca
* @returns {int} - posição do usuário
* 
* @precondition: none
* @postcondition: none
*/
int selectVideoByName(VideoListDocumentStructure &videoList) {

    string name;
    int position;

    while(true) {

        name = readStdioVideoName();

        position = findVideoByName(videoList, name);

        if( position != -1 ){
            return position;
            break;
        }else{
            cout << "Vídeo não encontrado." << endl;
            cout << "Tentar novamente. [y/n] ";

            string response;

            cin >> response;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

            if( response[0] == 'n' ) {
                return position;
            }
        }

    }
}

// rotina para agregar um vídeo
/**
* Funtion: rotina para agregar um usuário
* @param {UserListDocumentStructure} - lista onde será adiconado o novo usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void addVideoController(VideoListDocumentStructure &videoList) {
	VideoDocumentStructure video;
    // realizar a leitura dos dados de um novo vídeo
	video = readStdioVideo();
	video.identification = gerateVideoIdentification();
    // realizar a validação dos dados de um vídeo
	if ( validateVideo(video)) {
		videoList.videosList[videoList.numberOfVideos++] = video;
	}
	// adicionar o vídeo à lista de vídeos em memória

    // retornar o controle ao menu de vídeos
    cout << "vídeo agregado" << endl;
    system("echo vídeo agregado >> logs/log");
    cout << "Aperte ENTER para continuar";
    getChar();
}

// rotina para eliminar um vídeo
/**
* Funtion: rotina para eliminar um usuário
* @param {UserListDocumentStructure} - lista de donde será eliminado o usuário
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void deleteVideoController(VideoListDocumentStructure &videoList) {

    string identification;
    int position;

    identification = readStdioVideoName();

    position = findVideoByName(videoList, identification);

    if( position >= 0 ) {
        videoList.numberOfVideos--;
        swapVideo(videoList.videosList[position], videoList.videosList[videoList.numberOfVideos]);
        system("echo video deletado >> logs/log");
        cout << endl << "Vídeo eliminado." << endl;
        cout << "Aperte ENTER para continuar";
        getChar();
    }else{
        cout << endl << "Video não encontrado" << endl;
        cout << "Aperte ENTER para continuar";
        getChar();
    }
    
    
    
    // ler a identificação do vídeo que vai ser eliminado
    // eliminar o vídeo da lista de vídeos em memória
    // retornar o controle ao menu de vídeos
}

// rotina para imprimir os dados de um vídeo na saída estândar
/**
* Funtion: rotina para imprimir os dados de um usuário na saída estandar
* @param {UserDocumentStructure} - usuário a ser impresso na tela
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void printVideoController(VideoDocumentStructure video) {
    
    printStdioVideo(video);
    system("echo video impresso >> logs/log");
    cout << "Aperte ENTER para continuar";
    getChar();
    // imprimir o vídeo na saída estândar
	//printStdioVideoList(vet);
    // retornar o controle ao menu do vídeo logado
}

// rotina para mudar o tipo do vídeo
string changeKindOfVideoController() {

    string kindOfVideo;

    kindOfVideo = readStdioVideoKindOfVideo();

    cout << "tipo de video alterado" << endl;
    cout << "Aperte ENTER para continuar";
    getChar();
    // realizar a leitura do tipo de vídeo
    // realizar a validação do tipo de vídeo
    // adicionar a mudança do tipo de vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
    return kindOfVideo;
}

// rotina para mudar o name do vídeo
string changeVideoNameController() {
    
    string videoName;

    // realizar a leitura do nome do vídeo
    videoName = readStdioVideoName();

    // realizar a validação do nome do vídeo

    cout << "" << endl;
    cout << "Aperte ENTER para continuar";
    getChar();
    // retornar o controle ao menu do vídeo logado

    return videoName;
}


// rotina para mudar o name do director do vídeo
string changeVideoDirectorNameController() {

    string directorsName;

    directorsName = readStdioVideoDirectorName();

    cout << "" << endl;
    cout << "Aperte ENTER para continuar";
    getChar();
    // realizar a leitura do nome do directo do vídeo
    // realizar a validação do nome do directo do vídeo
    // adicionar a mudança do nome do directo ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado

    return directorsName;
}

// rotina para mudar as horas que dura o vídeo
int changeVideoDurationHoursController() {

    int hour;

    hour = readStdioVideoHours();

    cout << "" << endl;
    cout << "Aperte ENTER para continuar";
    getChar();
    // realizar a leitura do horas do vídeo
    // realizar a validação do horas do vídeo
    // adicionar a mudança do horas ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
    return hour;
}

// rotina para mudar os minutos que dura o vídeo
int changeVideoDurationMinutesController() {

    int minutes;

    minutes = readStdioVideoMinutes();

    cout << "" << endl;
    cout << "Aperte ENTER para continuar";
    getChar();
    // realizar a leitura do minutos do vídeo
    // realizar a validação do minutos do vídeo
    // adicionar a mudança do minutos ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
    return minutes;
}

// rotina para mudar os segundos que dura o vídeo
int changeVideoDurationSecondsController() {

    int seconds;

    seconds = readStdioVideoSeconds();

    cout << "" << endl;
    cout << "Aperte ENTER para continuar";
    getChar();
    // realizar a leitura do segundos do vídeo
    // realizar a validação do segundos do vídeo
    // adicionar a mudança do segundos ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado

    return seconds;
}

// rotina para mudar a duração do vídeo
DurationStructure changeVideoDurationController() {

    DurationStructure duration;

    duration = readStdioVideoDuration();

    cout << "" << endl;
    cout << "Aperte ENTER para continuar";
    getChar();
    // realizar a leitura do duração do vídeo
    // realizar a validação do duração do vídeo
    // adicionar a mudança do duração ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
    return duration;
}

// rotina para mudar o numero de temporadas de um vídeo
int changeVideoNumberOfSeasonsController() {

    int numberOfSeasons;

    numberOfSeasons = readStdioVideoNumberOfSeasons();

    cout << "" << endl;
    cout << "Aperte ENTER para continuar";
    getChar();
    // realizar a leitura do número de tempodas do vídeo
    // realizar a validação do número de tempodas do vídeo
    // adicionar a mudança do número de tempodas ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado

    return numberOfSeasons;
}

// rotina para mudar o ano de lançamento do vídeo
int changeVideoReleaseYearController() {

    int releaseYear;

    releaseYear = readStdioVideoReleaseYear();

    cout << "rotina para mudar o ano de lançamento do vídeo" << endl;
    cout << "Aperte ENTER para continuar";
    getChar();
    // realizar a leitura do ano do vídeo
    // realizar a validação do ano do vídeo
    // adicionar a mudança do ano ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado

    return releaseYear;
}

// rotina para adicionar um gênero ao vídeo
GenresStructure addVideoGenreController(GenresStructure genres) {

    GenresStructure auxiliaryGenres;
    int genresLength;

    auxiliaryGenres = readStdioVideoGenres();
    genresLength = genres.numberOfGenre;

    for(int i = 0; i < auxiliaryGenres.numberOfGenre; i++) {
        genres.genres[genresLength + i] = auxiliaryGenres.genres[i];
    }

    genres.numberOfGenre = genresLength + auxiliaryGenres.numberOfGenre;


    cout << "" << endl;
    cout << "Aperte ENTER para continuar";
    getChar();
    // realizar a leitura do gênero do vídeo
    // realizar a validação do gênero do vídeo
    // adicionar o gênero ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
    return  genres;
}
