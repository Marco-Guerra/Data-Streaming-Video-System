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
	
	// ler os arquivos de armazenamento
	userList = readFileUserList(INPUT_FILE_USER); // abre o arquivo que contem a lista de usuários e realiza a leitura
	videoList = readFileVideoList(INPUT_FILE_VIDEO); // abre o arquivo que contem a lista de vídeos e realiza a leitura

	// mensagem inicial e explicação das funcionalidades do programa
	initMessage();

	// entrar no menu
	menuPrincipalController(userList, videoList);

	// escrever os arquivos de armazenamento
	printFileUserList(userList, OUTPUT_FILE_USER); // abre o arquivo que contem a lista de usuários e realiza a escrita da nova lista
	printFileVideoList(videoList, OUTPUT_FILE_VIDEO); // abre o arquivo que contem a lista de vídeos e realiza a escrita da nova lista

	// mensagem final do programa
	endMessage();

	return 0;
}
