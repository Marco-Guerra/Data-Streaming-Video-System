#ifndef READ_FILE_VIDEO
#define READ_FILE_VIDEO

#include <iostream>
#include <string>
#include <fstream>
#include "../../utilities/utilities.hpp"
#include "../../structures/video_structure.hpp"

#define INPUT_FILE_VIDEO "storage/video_storage"

#include <string>

using namespace std;

// função que faz a leitura no arquivo do vídeo a identificação de um vídeo
string readFileVideoIdentificatio(ifstream &fn);

// função que faz a leitura no arquivo do vídeo o tipo de vídeo
string readFileVideoKindOfVideo(ifstream &fn);

// função que faz a leitura no arquivo do vídeo o nome do vídeo
string readFileVideoName(ifstream &fn);

// função que faz a leitura no arquivo do vídeo o nome do diretor do vídeo
string readFileVideoDirectorName(ifstream &fn);

// função que faz a leitura no arquivo do vídeo a duração do vídeo
DurationStructure readFileVideoDuration(ifstream &fn);

// função que faz a leitura no arquivo do vídeo o número de temporadas de um vídeo
int readFileVideoNumberOfSeasons(ifstream &fn);

// função que faz a leitura no arquivo do vídeo do ano de lançamento
int readFileVideoReleaseYear(ifstream &fn);

// retira vírgulas do final da cadeia de caracteres
string processGenre(string s);

// ler um gênero de vídeo
bool readFileVideoGenre(ifstream &fn, string &genre);

// função que faz a leitura no arquivo do vídeo os gêneros aos quais o vídeo pertence
GenresStructure readFileVideoGenres(ifstream &fn);

// encontrar o ultimo fechamento de chaves
void findEndOfStructureVideo(ifstream &fn);

// função que faz a leitura no arquivo do vídeo um vídeo
VideoDocumentStructure readFileVideo(ifstream &fn);

// função que faz a leitura no arquivo do vídeo todos os vídeos
//VetorOfVideos readFileVideoList(string file_name);

// acha o fim da struct
// true caso ache
// false caso ache o fim do arquivo
bool findBeginOfStructureVideo(ifstream &fn);

// função que faz a leitura no arquivo do vídeo todos os vídeos
VideoListDocumentStructure readFileVideoList(string file_name);

#endif
