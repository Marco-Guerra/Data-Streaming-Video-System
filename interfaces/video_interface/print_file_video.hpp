#ifndef PRINT_FILE_VIDEO
#define PRINT_FILE_VIDEO

#include <string>
#include <fstream>

#include "../../structures/video_structure.hpp"

#define OUTPUT_FILE_VIDEO "storage/video_storage"

using namespace std;

// função que imprime no arquivo do vídeo a identificação de um vídeo
void printFileVideoIdentification(string identification, ofstream &storageVideoFile);

// função que imprime no arquivo do vídeo o tipo de vídeo
void printFileVideoKindOfVideo(string kindOfVideo, ofstream &storageVideoFile);

// função que imprime no arquivo do vídeo o nome do vídeo
void printFileVideoName(string name, ofstream &storageVideoFile);

// função que imprime no arquivo do vídeo o nome do diretor do vídeo
void printFileVideoDirectorName(string directorName, ofstream &storageVideoFile);

// função que imprime no arquivo do vídeo a duração do vídeo
void printFileVideoDuration(DurationStructure durartion, ofstream &storageVideoFile);

// função que imprime no arquivo do vídeo o número de temporadas de um vídeo
void printFileVideoNumberOfSeasons(int numberOfSeasons, ofstream &storageVideoFile);

// função que imprime no arquivo do vídeo o ano de lançamento
void printFileVideoReleaseYear(int releaseYear, ofstream &storageVideoFile);

// função que imprime no arquivo do vídeo os gêneros aos quais o vídeo pertence
void printFileVideoGenres(GenresStructure genres, ofstream &storageVideoFile);

// função que imprime no arquivo do vídeo um vídeo
void printFileVideo(VideoDocumentStructure video, ofstream &storageVideoFile);

// função que imprime no arquivo do vídeo todos os vídeos
void printFileVideoList(VideoListDocumentStructure vet, string storageVideoFileName);

#endif
