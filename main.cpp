#include "structures/user_structure.hpp"
#include "structures/video_structure.hpp"

#include "controllers/user_controller/user_controller.hpp"
#include "controllers/user_controller/user_validator.hpp"

#include "controllers/video_controller/video_controller.hpp"
#include "controllers/video_controller/video_validator.hpp"

#include "interfaces/user_interface/read_stdio_user.hpp"
#include "interfaces/user_interface/print_stdio_user.hpp"

//#include "interfaces/video_interface/read_stdio_video.hpp"
#include "interfaces/video_interface/read_file_video.hpp"
#include "interfaces/video_interface/print_stdio_video.hpp"
#include "interfaces/utilities.hpp"

int main (int argc, char *argv[]) {
	
	UserDocumentStructure user;
<<<<<<< Updated upstream
	//VideoDocumentStructure video[5];
	VetorOfVideos vetor;

//user.identification = "0000000000";
//user.name = "Nome do Usuário";
//user.date.day = 1;
//user.date.month = 1;
//user.date.year = 2000;
//user.history.videoIdentifications[0] = "1111111111";
//user.history.videoIdentifications[1] = "2222222222";
//user.history.videoIdentifications[2] = "3333333333";
//user.history.videoIdentifications[3] = "4444444444";
//user.history.videoIdentifications[4] = "5555555555";
//user.history.historyLenght = 5;
//
//video[0].identification = "1111111111";
//video[0].kindOfVideo = "Serie";
//video[0].name = "Uma serie";
//video[0].directorName = "Nome do diretor 0";
//video[0].durartion.hours = 1;
//video[0].durartion.minutes = 30;
//video[0].durartion.seconds = 30;
//video[0].numberOfSeasons = 10;
//video[0].releaseYear = 2010;
//video[0].genres.genres[0] = "Ação";
//video[0].genres.genres[1] = "Ficção";
//video[0].genres.numberOfGenre = 2;
//
//video[1].identification = "1111111111";
//video[1].kindOfVideo = "Serie";
//video[1].name = "Uma serie";
//video[1].directorName = "Nome do diretor 1";
//video[1].durartion.hours = 1;
//video[1].durartion.minutes = 30;
//video[1].durartion.seconds = 30;
//video[1].numberOfSeasons = 10;
//video[1].releaseYear = 2010;
//video[1].genres.genres[0] = "Ação";
//video[1].genres.genres[1] = "Ficção";
//video[1].genres.numberOfGenre = 2;
//
//video[2].identification = "2222222222";
//video[2].kindOfVideo = "Serie";
//video[2].name = "Uma serie";
//video[2].directorName = "Nome do diretor 2";
//video[2].durartion.hours = 1;
//video[2].durartion.minutes = 30;
//video[2].durartion.seconds = 30;
//video[2].numberOfSeasons = 10;
//video[2].releaseYear = 2010;
//video[2].genres.genres[0] = "Ação";
//video[2].genres.genres[1] = "Ficção";
//video[2].genres.numberOfGenre = 2;
//
//video[3].identification = "3333333333";
//video[3].kindOfVideo = "Serie";
//video[3].name = "Uma serie";
//video[3].directorName = "Nome do diretor 3";
//video[3].durartion.hours = 1;
//video[3].durartion.minutes = 30;
//video[3].durartion.seconds = 30;
//video[3].numberOfSeasons = 10;
//video[3].releaseYear = 2010;
//video[3].genres.genres[0] = "Ação";
//video[3].genres.genres[1] = "Ficção";
//video[3].genres.numberOfGenre = 2;
//
//video[4].identification = "4444444444";
//video[4].kindOfVideo = "Serie";
//video[4].name = "Uma serie";
//video[4].directorName = "Nome do diretor 4";
//video[4].durartion.hours = 1;
//video[4].durartion.minutes = 30;
//video[4].durartion.seconds = 30;
//video[4].numberOfSeasons = 10;
//video[4].releaseYear = 2010;
//video[4].genres.genres[0] = "Ação";
//video[4].genres.genres[1] = "Ficção";
//video[4].genres.numberOfGenre = 2;

	bool teste;
	teste = readFile("storage/video_storage", vetor);
	if (teste) {
		cout << "Leitura realizada com sucesso\n";
	}else {
		cout << "Falha na leitura\n";
	}
//	printUser(user);
=======
	VideoDocumentStructure video[5];

	user.identification = "00000000000000000000";
	user.name = "Nome do Usuário";
	user.date.day = 1;
	user.date.month = 1;
	user.date.year = 2000;
	user.history.videoIdentifications[0] = "11111111111111111111";
	user.history.videoIdentifications[1] = "22222222222222222222";
	user.history.videoIdentifications[2] = "33333333333333333333";
	user.history.videoIdentifications[3] = "44444444444444444444";
	user.history.videoIdentifications[4] = "55555555555555555555";
	user.history.historyLenght = 5;

	video[0].identification = "55555555555555555555";
	video[0].kindOfVideo = "Serie";
	video[0].name = "Uma serie";
	video[0].directorName = "Nome do diretor 0";
	video[0].durartion.hours = 1;
	video[0].durartion.minutes = 30;
	video[0].durartion.seconds = 30;
	video[0].numberOfSeasons = 10;
	video[0].releaseYear = 2010;
	video[0].genres.genres[0] = "Ação";
	video[0].genres.genres[1] = "Ficção";
	video[0].genres.numberOfGenre = 2;

	video[1].identification = "11111111111111111111";
	video[1].kindOfVideo = "Serie";
	video[1].name = "Uma serie";
	video[1].directorName = "Nome do diretor 1";
	video[1].durartion.hours = 1;
	video[1].durartion.minutes = 30;
	video[1].durartion.seconds = 30;
	video[1].numberOfSeasons = 10;
	video[1].releaseYear = 2010;
	video[1].genres.genres[0] = "Ação";
	video[1].genres.genres[1] = "Ficção";
	video[1].genres.numberOfGenre = 2;

	video[2].identification = "22222222222222222222";
	video[2].kindOfVideo = "Serie";
	video[2].name = "Uma serie";
	video[2].directorName = "Nome do diretor 2";
	video[2].durartion.hours = 1;
	video[2].durartion.minutes = 30;
	video[2].durartion.seconds = 30;
	video[2].numberOfSeasons = 10;
	video[2].releaseYear = 2010;
	video[2].genres.genres[0] = "Ação";
	video[2].genres.genres[1] = "Ficção";
	video[2].genres.numberOfGenre = 2;

	video[3].identification = "33333333333333333333";
	video[3].kindOfVideo = "Serie";
	video[3].name = "Uma serie";
	video[3].directorName = "Nome do diretor 3";
	video[3].durartion.hours = 1;
	video[3].durartion.minutes = 30;
	video[3].durartion.seconds = 30;
	video[3].numberOfSeasons = 10;
	video[3].releaseYear = 2010;
	video[3].genres.genres[0] = "Ação";
	video[3].genres.genres[1] = "Ficção";
	video[3].genres.numberOfGenre = 2;

	video[4].identification = "44444444444444444444";
	video[4].kindOfVideo = "Serie";
	video[4].name = "Uma serie";
	video[4].directorName = "Nome do diretor 4";
	video[4].durartion.hours = 1;
	video[4].durartion.minutes = 30;
	video[4].durartion.seconds = 30;
	video[4].numberOfSeasons = 10;
	video[4].releaseYear = 2010;
	video[4].genres.genres[0] = "Ação";
	video[4].genres.genres[1] = "Ficção";
	video[4].genres.numberOfGenre = 2;

	printUser(user);
>>>>>>> Stashed changes

	return 0;
}

/*
	- tem que ter readme
		- nome do software
		- nome dos integrantes da equipe
		- descrição e casos de uso
		- diagrama UML
		- descrição dirigida ao usuário, descrição de ata.hppos
		- documentar as funcionalidades, e funções, em texto

	- powerpoint (seminario)
		- demostrar ao vivo
		- casos de uso
		- 10 min de apresentação
		- dispor do codigo fonte para apresentar
		

	- struct vídeo
	- struct usuário

	- rotina -> inserir, alterar e consultar, apartir do id (inalteravel)
		- depois de uma rotina de cadastro valida imprimir a lista de id de objetos validos
		- rotina de inserir vídeo
		- rotina de inserir usuário
			- campos obcionais seram preen.hppidos posteriormente .hppistórico)
		- rotinas de validação
			- alertar o usuário caso o video nao posa ser cadastrado
			- guardar alerta em arquivo de log (id do vídeo mais regras desrespeitadas)

	- consultar 
		- imprimir tosdos os campos do usuario ou do video
		- caso nao exista informar isso

	- reuisitos da primeira funcionalidade
		- sem campos vazios
		- valores inteiros serao positivos
		-.hppora e minuto validos min [0-24] [0-59]

	interface simples -> selecionar funcionalidades e rutinas


	regras de negocio

	-> print file (file*, struct a pritar)
		retorna nada
	-> print stdio (struct a pritar)
		retorna nada
		
	-> read file (file*)
		retorna struct a pritar
	-> read stdio ()
		retorna struct a pritar

	nome = read_st(file*);
*/
