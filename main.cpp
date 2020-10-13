#include "structures/user_structure.hpp"
#include "structures/video_structure.hpp"

#include "interfaces/user_interface/print_file_user.hpp"
#include "interfaces/user_interface/read_file_user.hpp"
#include "interfaces/user_interface/print_stdio_user.hpp"
#include "interfaces/user_interface/read_stdio_user.hpp"

#include "interfaces/video_interface/print_file_video.hpp"
#include "interfaces/video_interface/read_file_video.hpp"
#include "interfaces/video_interface/print_stdio_video.hpp"
#include "interfaces/video_interface/read_stdio_video.hpp"

#include "controllers/menu_controller/menu_controller.hpp"
#include "interfaces/menu_interface/menu_messages.hpp"

int main (int argc, char *argv[]) {
 
	UserListDocumentStructure userList;
	VideoListDocumentStructure videoList;
	
	// ler os aruivos de armazenamento
	userList = readFileUserList(INPUT_FILE_USER); // abre o arquivo que contem a lista de usuários e realiza a leitura
	videoList = readFileVideoList(INPUT_FILE_VIDEO); // abre o arquivo que contem a lista de vídeos e realiza a leitura

	// mensagem inicial e explicação das funcionalidades do programa
	initMessage();

	printStdioUserList(userList);
	userList.usersList[userList.numberOfUsers] = readStdioUser();
	userList.numberOfUsers++;

	// entrar no menu
	//menuPrincipalController(userList, videoList);

	// escrever os arquivos de armazenamento
	printFileUserList(userList, OUTPUT_FILE_USER); // abre o arquivo que contem a lista de usuários e realiza a escrita da nova lista
	printFileVideoList(videoList, OUTPUT_FILE_VIDEO); // abre o arquivo que contem a lista de vídeos e realiza a escrita da nova lista

	// mensagem final do programa
	//endMessage();

	return 0;
}

/*
	- tem que ter readme
		- nome do software
		- nome dos integrantes da equipe
		- descrição e casos de uso
		- diagrama UML
		- descrição dirigida ao usuário, descrição de atalhos
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
		- criar id de usuario de forma automatica
		- criar arquivo de logs

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
