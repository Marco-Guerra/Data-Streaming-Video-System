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

void readVideoIdentification(ifstream &fn, string &identificator);

void readKindOfVideo(ifstream &fn,  string &kindOfVideo);

void readName(ifstream &fn,  string &name);

void readDirectorName(ifstream &fn, string &directorName);

//void readHours(ifstream &fn,  unsigned int &hours);

//void readMinutes(ifstream &fn, unsigned int &minutes);

//void readSeconds(ifstream &fn, unsigned int &seconds);

void readDuration(ifstream &fn, DurationStructure &duration);

void readNumberOfSeasons(ifstream &fn, int &numberOfSeasons);

void readReleaseYear(ifstream &fn, int &releaseYear);

string processGenre(string s);

bool readGenre(ifstream &fn, string &genre);

void readGenres(ifstream &fn, GenresStructure &genres);

void readVideo(ifstream &fn, VideoDocumentStructure &video);

bool findBeginOfStructureVideo(ifstream &fn);

VideoDocumentStructure readStructure(ifstream &fn, VideoDocumentStructure &aux);

bool readFile(string file_name, VetorOfVideos &vetor);

#endif
