#ifndef READ_FILE_VIDEO
#define READ_FILE_VIDEO

#include <iostream>
#include <string>
#include <fstream>

#include "../../structures/video_structure.hpp"

#include "../../utilities/utilities.hpp"

#define INPUT_FILE_VIDEO "storage/video_storage"

#include <string>

using namespace std;

// função que faz a leitura no arquivo do vídeo a identificação de um vídeo
string readFileVideoIdentificatio(ifstream &storageVideoFile);

// função que faz a leitura no arquivo do vídeo o tipo de vídeo
string readFileVideoKindOfVideo(ifstream &storageVideoFile);

// função que faz a leitura no arquivo do vídeo o nome do vídeo
string readFileVideoName(ifstream &storageVideoFile);

// função que faz a leitura no arquivo do vídeo o nome do diretor do vídeo
string readFileVideoDirectorName(ifstream &storageVideoFile);

// função que faz a leitura no arquivo do vídeo a duração do vídeo
DurationStructure readFileVideoDuration(ifstream &storageVideoFile);

// função que faz a leitura no arquivo do vídeo o número de temporadas de um vídeo
int readFileVideoNumberOfSeasons(ifstream &storageVideoFile);

// função que faz a leitura no arquivo do vídeo do ano de lançamento
int readFileVideoReleaseYear(ifstream &storageVideoFile);

// retira vírgulas do final da cadeia de caracteres
string processGenre(string line);

// ler um gênero de vídeo
bool readFileVideoGenre(ifstream &storageVideoFile, string &genre);

// função que faz a leitura no arquivo do vídeo os gêneros aos quais o vídeo pertence
GenresStructure readFileVideoGenres(ifstream &storageVideoFile);

// encontrar o ultimo fechamento de chaves
void findEndOfStructureVideo(ifstream &storageVideoFile);

// função que faz a leitura no arquivo do vídeo um vídeo
VideoDocumentStructure readFileVideo(ifstream &storageVideoFile);

// função que faz a leitura no arquivo do vídeo todos os vídeos
//VetorOfVideos readFileVideoList(string file_name);

// acha o fim da struct
// true caso ache
// false caso ache o fim do arquivo
bool findBeginOfStructureVideo(ifstream &storageVideoFile);

// função que faz a leitura no arquivo do vídeo todos os vídeos
VideoListDocumentStructure readFileVideoList(string fstorageVideoFileName);

#endif
