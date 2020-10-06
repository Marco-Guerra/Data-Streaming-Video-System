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
string readFileVideoIdentificatio();

// função que faz a leitura no arquivo do vídeo o tipo de vídeo
string readFileVideoKindOfVideo();

// função que faz a leitura no arquivo do vídeo o nome do vídeo
string readFileVideoName();

// função que faz a leitura no arquivo do vídeo o nome do diretor do vídeo
string readFileVideoDirectorName();

// função que faz a leitura no arquivo do vídeo as horas de duração do vídeo
int readFileVideoHours();

// função que faz a leitura no arquivo do vídeo os minutos de duração do vídeo
int readFileVideoMinutes();

// função que faz a leitura no arquivo do vídeo os segundos de duração do vídeo
int readFileVideoSeconds();

// função que faz a leitura no arquivo do vídeo a duração do vídeo
DurationStructure readFileVideoDuration();

// função que faz a leitura no arquivo do vídeo o número de temporadas de um vídeo
int readFileVideoNumberOfSeasons();

// função que faz a leitura no arquivo do vídeo do ano de lançamento
int readFileVideoReleaseYear(int releaseYear);

// função que faz a leitura no arquivo do vídeo os gêneros aos quais o vídeo pertence
string readFileVideoGenres();

// função que faz a leitura no arquivo do vídeo o número de gêneros do vídeo
int readFileVideoNumberOfGenres();

// função que faz a leitura no arquivo do vídeo um vídeo
VideoDocumentStructure readFileVideo();

// função que faz a leitura no arquivo do vídeo todos os vídeos
VideoDocumentStructure readFileVideoList();

#endif
