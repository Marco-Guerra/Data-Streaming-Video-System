#ifndef READ_STDIO_VIDEO
#define READ_STDIO_VIDEO

#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "../utilities.cpp"
#include "../../structures/video_structure.hpp"

using namespace std;

void readVideoIdentification(string identification);

void readKindOfVideo(string kindOfVideo);

void readName(string name);

void readDirectorName(string directorName);

void readHours(unsigned inthours);

void readMinutes(unsigned int minutes);

void readSeconds(unsigned int seconds);

void readDuration(DurationStructure durartion);

void readNumberOfSeasons(int numberOfSeasons);

void readReleaseYear(int releaseYear);

void readGenre(string genre);

void readGenres(GenresStructure genres);

void readVideo(VideoDocumentStructure video);

void findBeginOfStructureVideo(ifstream *fn);

void readFile(ifstream *fn, string file_name, VetorOfVideos vetor);

#endif
