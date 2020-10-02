#ifndef VIDEO_STRUCTURE
#define VIDEO_STRUCTURE

#define MAX_GENRES 10
#define MAX_VIDEOS 50

#include <iostream>

using namespace std;

// definição da estrutura para armazenar o tempo de duração de um vídeo
struct DurationStructure{
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
};

// definição da estrutura para armazenar os gêneros ao qual um vídeo pertence
struct GenresStructure{
    string genres[MAX_GENRES];
    int numberOfGenre;
};

// definição da estrutura para armazenar todos os dados de um vídeo
struct VideoDocumentStructure{
    string identification;
    string kindOfVideo;
    string name;
    string directorName;
    DurationStructure durartion;
    int numberOfSeasons;
    int releaseYear;
    GenresStructure genres;
};

struct VetorOfVideos {
	VideoDocumentStructure vet[MAX_VIDEOS];
	int tam;
};

#endif
