#include "video_controller.hpp"

// função que gera um ID automaticamente
string gerateVideoIdentification() {
	string aux;
	auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());
	aux = ctime(&timenow);
	aux = removeCharacter(aux, ' ');
	aux = removeCharacter(aux, ':');
	aux = removeCharacter(aux, '\n');
	return aux;
}

int findVideoById(VideoListDocumentStructure vet, string id) {
	for (int i = 0; i < vet.numberOfVideos; i++) {
		if (vet.videosList[i].identification == id) {
			return i;
		}
	}
	return -1;
}

void swapVideo (VideoDocumentStructure &a, VideoDocumentStructure &b) {
	VideoDocumentStructure aux = a;
	a = b;
	b = aux;
}

// rotina para agregar um vídeo
void addVideoController() {
    cout << "rotina para agregar um vídeo" << endl;
    system("sleep 1");
    // realizar a leitura dos dados de um novo vídeo
    // realizar a validação dos dados de um vídeo
		// adicionar o vídeo à lista de vídeos em memória

    // retornar o controle ao menu de vídeos
}

// rotina para eliminar um vídeo
void deleteVideoController() {
    cout << "rotina para eliminar um vídeo" << endl;
    system("sleep 1");
    // ler a identificação do vídeo que vai ser eliminado
    // eliminar o vídeo da lista de vídeos em memória
    // retornar o controle ao menu de vídeos
}

// rotina para imprimir os dados de um vídeo na saída estândar
void printVideoController() {
    cout << "rotina para imprimir os dados de um vídeo na saída estândar" << endl;
    system("sleep 1");
    // imprimir o vídeo na saída estândar
	//printStdioVideoList(vet);
    // retornar o controle ao menu do vídeo logado
}

// rotina para mudar todos os dados não sensíveis do vídeo
void changeVideoDataController() {
    cout << "rotina para mudar todos os dados não sensíveis do vídeo" << endl;
    system("sleep 1");
    // realizar a leitura de todos os dados
    // realizar a validação de todos os dados inseridos para o vídeo
    // adicionar as mudanças ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
}

// rotina para mudar o tipo do vídeo
void changeKindOfVideoController() {
    cout << "rotina para mudar o tipo do vídeo" << endl;
    system("sleep 1");
    // realizar a leitura do tipo de vídeo
    // realizar a validação do tipo de vídeo
    // adicionar a mudança do tipo de vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
}

// rotina para mudar o name do vídeo
void changeVideoNameController() {
    cout << "rotina para combiar o name do vídeo" << endl;
    system("sleep 1");
    // realizar a leitura do nome do vídeo
    // realizar a validação do nome do vídeo
    // adicionar a mudança do nome ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
}


// rotina para mudar o name do director do vídeo
void changeVideoDirectorNameController() {
    cout << "rotina para combiar o name do director do vídeo" << endl;
    system("sleep 1");
    // realizar a leitura do nome do directo do vídeo
    // realizar a validação do nome do directo do vídeo
    // adicionar a mudança do nome do directo ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
}

// rotina para mudar as horas que dura o vídeo
void changeVideoDurationHoursController() {
    cout << "rotina para combiar as horas que dura o vídeo" << endl;
    system("sleep 1");
    // realizar a leitura do horas do vídeo
    // realizar a validação do horas do vídeo
    // adicionar a mudança do horas ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
}

// rotina para mudar os minutos que dura o vídeo
void changeVideoDurationMinutesController() {
    cout << "rotina para combiar os minutos que dura o vídeo" << endl;
    system("sleep 1");
    // realizar a leitura do minutos do vídeo
    // realizar a validação do minutos do vídeo
    // adicionar a mudança do minutos ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
}

// rotina para mudar os segundos que dura o vídeo
void changeVideoDurationSecondsController() {
    cout << "rotina para combiar os segundos que dura o vídeo" << endl;
    system("sleep 1");
    // realizar a leitura do segundos do vídeo
    // realizar a validação do segundos do vídeo
    // adicionar a mudança do segundos ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
}

// rotina para mudar a duração do vídeo
void changeVideoDurationController() {
    cout << "rotina para combiar a duração do vídeo" << endl;
    system("sleep 1");
    // realizar a leitura do duração do vídeo
    // realizar a validação do duração do vídeo
    // adicionar a mudança do duração ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
}

// rotina para mudar o numero de temporadas de um vídeo
void changeVideoNumberOfSeasonsController() {
    cout << "rotina para mudar o numero de temporadas de um vídeo" << endl;
    system("sleep 1");
    // realizar a leitura do número de tempodas do vídeo
    // realizar a validação do número de tempodas do vídeo
    // adicionar a mudança do número de tempodas ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
}

// rotina para mudar o ano de lançamento do vídeo
void changeVideoReleaseYearController() {
    cout << "rotina para mudar o ano de lançamento do vídeo" << endl;
    system("sleep 1");
    // realizar a leitura do ano do vídeo
    // realizar a validação do ano do vídeo
    // adicionar a mudança do ano ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
}

// rotina para adicionar um gênero ao vídeo
void addVideoGenreController() {
    cout << "rotina para adicionar um gênero ao vídeo" << endl;
    system("sleep 1");
    // realizar a leitura do gênero do vídeo
    // realizar a validação do gênero do vídeo
    // adicionar o gênero ao vídeo na lista de vídeos em memória
    // retornar o controle ao menu do vídeo logado
}
