#ifndef PRINT_STDIO_VIDEO
#define PRINT_STDIO_VIDEO

#include "../../structures/video_structure.hpp"

#include <string>

using namespace std;

// função que imprime na saída estândar a identificação de um vídeo
void printStdioVideoIdentification(string identification);

// função que imprime na saída estândar o tipo de vídeo
void printStdioVideoKindOfVideo(string kindOfVideo);

// função que imprime na saída estândar o nome do vídeo
void printStdioVideoName(string name);

// função que imprime na saída estândar o nome do diretor do vídeo
void printStdioVideoDirectorName(string directorName);

// função que imprime na saída estândar as horas de duração do vídeo
void printStdioVideoHours(int hours);

// função que imprime na saída estândar os minutos de duração do vídeo
void printStdioVideoMinutes(int minutes);

// função que imprime na saída estândar os segundos de duração do vídeo
void printStdioVideoSeconds(int seconds);

// função que imprime na saída estândar a duração do vídeo
void printStdioVideoDuration(DurationStructure durartion);

// função que imprime na saída estândar o número de temporadas de um vídeo
void printStdioVideoNumberOfSeasons(int numberOfSeasons);

// função que imprime na saída estândar o ano de lançamento
void printStdioVideoReleaseYear(int releaseYear);

// função que imprime na saída estândar o número de gêneros do vídeo
void printStdioVideoNumberOfGenres(int numberOfGenre);

// função que imprime na saída estândar os gêneros aos quais o vídeo pertence
void printStdioVideoGenres(GenresStructure genres);

// função que imprime na saída estândar um vídeo
void printStdioVideo(VideoDocumentStructure video);

// função que imprime na saída estândar todos os vídeos
void printStdioVideoList(VetorOfVideos vet);
#endif
