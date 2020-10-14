#ifndef READ_STDIO_VIDEO
#define READ_STDIO_VIDEO

#include "../../structures/video_structure.hpp"
#include "../../utilities/utilities.hpp"

#include <string>
#include <time.h> 
#include <chrono> 
#include <ctime>

using namespace std;

// função que faz a leitura na saída estândar da identificação de um vídeo
string readStdioVideoIdentification();

// função que faz a leitura na saída estândar do tipo de vídeo
string readStdioVideoKindOfVideo();

// função que faz a leitura na saída estândar do nome do vídeo
string readStdioVideoName();

// função que faz a leitura na saída estândar do nome do diretor do vídeo
string readStdioVideoDirectorName();

// função que faz a leitura na saída estândar das horas de duração do vídeo
int readStdioVideoHours();

// função que faz a leitura na saída estândar dos minutos de duração do vídeo
int readStdioVideoMinutes();

// função que faz a leitura na saída estândar dos segundos de duração do vídeo
int readStdioVideoSeconds();

// função que faz a leitura na saída estândar da duração do vídeo
DurationStructure readStdioVideoDuration();

// função que faz a leitura na saída estândar do número de temporadas de um vídeo
int readStdioVideoNumberOfSeasons();

// função que faz a leitura na saída estândar do vídeo o ano de lançamento
int readStdioVideoReleaseYear();

// função que faz a leitura na saída estândar dos gêneros aos quais o vídeo pertence
GenresStructure readStdioVideoGenres();

// função que faz a leitura na saída estândar do número de gêneros do vídeo
int readStdioVideoNumberOfGenres();

// função que faz a leitura na saída estândar de um vídeo
VideoDocumentStructure readStdioVideo();

#endif
