#ifndef READ_FILE_VIDEO
#define READ_FILE_VIDEO

#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include "../../utilities/utilities.hpp"
#include "../../structures/video_structure.hpp"

using namespace std;

string readVideoIdentification(ifstream &fn);

string readKindOfVideo(ifstream &fn);

string readName(ifstream &fn);

string readDirectorName(ifstream &fn);

DurationStructure readDuration(ifstream &fn);

int readNumberOfSeasons(ifstream &fn);

int readReleaseYear(ifstream &fn);

string processGenre(string s);

bool readGenre(ifstream &fn, string &genre);

GenresStructure readGenres(ifstream &fn);

void readVideo(ifstream &fn);

bool findBeginOfStructureVideo(ifstream &fn);

void findEndOfStructureVideo(ifstream &fn);

VideoDocumentStructure readStructure(ifstream &fn);

bool readFile(string file_name, VetorOfVideos &vetor);

#endif
