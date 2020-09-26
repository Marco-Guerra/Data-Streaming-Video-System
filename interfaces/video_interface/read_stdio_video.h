#ifndef READ_STDIO_VIDEO
#define READ_STDIO_VIDEO

#include <iostream>
#include <string>
#include "../../structures/video_structure.h"

using namespace std;

void readVideoIdentification(string identification);

void readKindOfVideo(string kindOfVideo);

void readName(string name);

void readDirectorName(string directorName);

void readHours(unsigned int hours);

void readMinutes(unsigned int minutes);

void readSeconds(unsigned int seconds);

void readDuration(DurationStructure durartion);

void readNumberOfSeasons(int numberOfSeasons);

void readReleaseYear(int releaseYear);

void readGenre(string genre);

void readGenres(GenresStructure genres);

void readVideo(VideoDocumentStructure video);

#endif