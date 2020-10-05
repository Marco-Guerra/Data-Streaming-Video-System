#ifndef PRINT_STDIO_VIDEO
#define PRINT_STDIO_VIDEO

#include <iostream>
#include <string>
#include "../../structures/video_structure.hpp"

using namespace std;

void printVideoIdentification(string identification);

void printKindOfVideo(string kindOfVideo);

void printName(string name);

void printDirectorName(string directorName);

void printHours(unsigned inthours);

void printMinutes(unsigned int minutes);

void printSeconds(unsigned int seconds);

void printDuration(DurationStructure durartion);

void printNumberOfSeasons(int numberOfSeasons);

void printReleaseYear(int releaseYear);

void printGenre(string genre);

void printGenres(GenresStructure genres);

void printVideo(VideoDocumentStructure video);

void printAllVideos (VetorOfVideos v);
#endif
