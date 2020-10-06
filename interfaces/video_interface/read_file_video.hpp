#ifndef READ_FILE_VIDEO
#define READ_FILE_VIDEO

#include <iostream>
#include <string>
#include <fstream>
#include "../../utilities/utilities.hpp"
#include "../../structures/video_structure.hpp"

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

// função que faz a leitura no arquivo do vídeo as horas de duração do vídeo
int readFileVideoHours(ifstream &fn);

// função que faz a leitura no arquivo do vídeo os minutos de duração do vídeo
int readFileVideoMinutes(ifstream &fn);

// função que faz a leitura no arquivo do vídeo os segundos de duração do vídeo
int readFileVideoSeconds(ifstream &fn);

// função que faz a leitura no arquivo do vídeo a duração do vídeo
DurationStructure readFileVideoDuration(ifstream &fn);

// função que faz a leitura no arquivo do vídeo o número de temporadas de um vídeo
int readFileVideoNumberOfSeasons(ifstream &fn);

// função que faz a leitura no arquivo do vídeo do ano de lançamento
int readFileVideoReleaseYear(ifstream &fn);

// ler um genero de vìdeo
bool readFileVideoGenre(ifstream &fn, string &genre);

// função que faz a leitura no arquivo do vídeo os gêneros aos quais o vídeo pertence
GenresStructure readFileVideoGenres(ifstream &fn);

// função que faz a leitura no arquivo do vídeo o número de gêneros do vídeo
int readFileVideoNumberOfGenres(ifstream &fn);

// função que faz a leitura no arquivo do vídeo um vídeo
VideoDocumentStructure readFileVideo(ifstream &fn);

// função que faz a leitura no arquivo do vídeo todos os vídeos
VetorOfVideos readFileVideoList(string file_name);

// acha o fim da struct
// true caso ache
// false caso ache o fim do arquivo
bool findBeginOfStructureVideo(ifstream &fn);

// encontrar o ultimo fechamento de chaves
void findEndOfStructureVideo(ifstream &fn);

#endif
