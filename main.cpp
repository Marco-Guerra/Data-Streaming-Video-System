#include "structures/user_structure.hpp"
#include "structures/video_structure.hpp"

#include "interfaces/user_interface/print_file_user.hpp"
#include "interfaces/user_interface/read_file_user.hpp"

#include "interfaces/video_interface/print_file_video.hpp"
#include "interfaces/video_interface/read_file_video.hpp"
#include "interfaces/video_interface/print_stdio_video.hpp"
#include "interfaces/video_interface/read_stdio_video.hpp"

#include "controllers/menu_controller/menu_controller.hpp"

int main (int argc, char *argv[]) {
	
	// ler os arquivos de armazenamento
	// boas vindas, explicar o programa
	// entrar no menu
	// escrever os arquivos de armazenamento

	UserDocumentStructure user;
	VetorOfVideos vetor;

	vetor = readFileVideoList(INPUT_FILE_VIDEO);
	printStdioVideoList(vetor);
	string leitura;
	cout << "Você deseja entrar com mais um vídeo [y/n] ";
	cin >> leitura;
	if (leitura[0] == 'Y' || leitura[0] == 'y') {
		vetor.vet[vetor.tam] = readStdioVideo(); vetor.tam++;
	}
	printStdioVideoList(vetor);
	printFileVideoList(vetor, OUTPUT_FILE_VIDEO);
	

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
