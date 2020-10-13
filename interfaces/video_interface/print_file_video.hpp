#ifndef PRINT_FILE_VIDEO
#define PRINT_FILE_VIDEO

#include "../../structures/video_structure.hpp"

#include <string>
#include <fstream>

#define OUTPUT_FILE_VIDEO "storage/teste_video.txt"

using namespace std;

// função que imprime no arquivo do vídeo a identificação de um vídeo
void printFileVideoIdentification(string identification, ofstream &file);

// função que imprime no arquivo do vídeo o tipo de vídeo
void printFileVideoKindOfVideo(string kindOfVideo, ofstream &file);

// função que imprime no arquivo do vídeo o nome do vídeo
void printFileVideoName(string name, ofstream &file);

// função que imprime no arquivo do vídeo o nome do diretor do vídeo
void printFileVideoDirectorName(string directorName, ofstream &file);

// função que imprime no arquivo do vídeo a duração do vídeo
void printFileVideoDuration(DurationStructure durartion, ofstream &file);

// função que imprime no arquivo do vídeo o número de temporadas de um vídeo
void printFileVideoNumberOfSeasons(int numberOfSeasons, ofstream &file);

// função que imprime no arquivo do vídeo o ano de lançamento
void printFileVideoReleaseYear(int releaseYear, ofstream &file);

// função que imprime no arquivo do vídeo os gêneros aos quais o vídeo pertence
void printFileVideoGenres(GenresStructure genres, ofstream &file);

// função que imprime no arquivo do vídeo um vídeo
void printFileVideo(VideoDocumentStructure video, ofstream &file);

// função que imprime no arquivo do vídeo todos os vídeos
void printFileVideoList(VetorOfVideos vet, string file_path);

#endif
