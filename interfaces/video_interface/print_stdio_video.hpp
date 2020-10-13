#ifndef PRINT_STDIO_VIDEO
#define PRINT_STDIO_VIDEO

#include "../../structures/video_structure.hpp"

#include <string>

using namespace std;

// função que imprime na saída estandar a identificação de um vídeo
void printStdioVideoIdentificatio(string identification);

// função que imprime na saída estandar o tipo de vídeo
void printStdioVideoKindOfVideo(string kindOfVideo);

// função que imprime na saída estandar o nome do vídeo
void printStdioVideoName(string name);

// função que imprime na saída estandar o nome do diretor do vídeo
void printStdioVideoDirectorName(string directorName);

// função que imprime na saída estandar as horas de duração do vídeo
void printStdioVideoHours(int hours);

// função que imprime na saída estandar os minutos de duração do vídeo
void printStdioVideoMinutes(int minutes);

// função que imprime na saída estandar os segundos de duração do vídeo
void printStdioVideoSeconds(int seconds);

// função que imprime na saída estandar a duração do vídeo
void printStdioVideoDuration(DurationStructure durartion);

// função que imprime na saída estandar o número de temporadas de um vídeo
void printStdioVideoNumberOfSeasons(int numberOfSeasons);

// função que imprime na saída estandar o ano de lançamento
void printFileVideoReleaseYear(int releaseYear);

// função que imprime na saída estandar os gêneros aos quais o vídeo pertence
void printStdioVideoGenres(string genres[MAX_GENRES]);

// função que imprime na saída estandar o número de gêneros do vídeo
void printStdioVideoNumberOfGenres(int numberOfGenre);

// função que imprime na saída estandar um vídeo
void printStdioVideo(VideoDocumentStructure video);

// função que imprime na saída estandar todos os vídeos
//void printStdioVideoList(VetorOfVideos v);

#endif
