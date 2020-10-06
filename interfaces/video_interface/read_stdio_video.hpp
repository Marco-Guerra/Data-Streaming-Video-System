#ifndef READ_STDIO_USER
#define READ_STDIO_USER

#include "../../structures/video_structure.hpp"

#include <string>

using namespace std;

// função que faz a leitura na saída estandar da identificação de um vídeo
string readStdioVideoIdentificatio();

// função que faz a leitura na saída estandar do tipo de vídeo
string readStdioVideoKindOfVideo();

// função que faz a leitura na saída estandar do nome do vídeo
string readStdioVideoName();

// função que faz a leitura na saída estandar do nome do diretor do vídeo
string readStdioVideoDirectorName();

// função que faz a leitura na saída estandar das horas de duração do vídeo
int readStdioVideoHours();

// função que faz a leitura na saída estandar dos minutos de duração do vídeo
int readStdioVideoMinutes();

// função que faz a leitura na saída estandar dos segundos de duração do vídeo
int readStdioVideoSeconds();

// função que faz a leitura na saída estandar da duração do vídeo
DurationStructure readStdioVideoDuration();

// função que faz a leitura na saída estandar do número de temporadas de um vídeo
int readStdioVideoNumberOfSeasons();

// função que faz a leitura na saída estandar do vídeo o ano de lançamento
int readStdioVideoReleaseYear();

// função que faz a leitura na saída estandar dos gêneros aos quais o vídeo pertence
string readStdioVideoGenres();

// função que faz a leitura na saída estandar do número de gêneros do vídeo
int readStdioVideoNumberOfGenres();

// função que faz a leitura na saída estandar de um vídeo
VideoDocumentStructure readStdioVideo();

// função que faz a leitura na saída estandar de todos os vídeos
VideoDocumentStructure readStdioVideoList();

#endif