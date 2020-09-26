#ifndef VIDEO_VALIDATOR
#define VIDEO_VALIDATOR

#include <iostream>
#include <string>
#include "../../structures/video_structure.h"

using namespace std;

bool validateVideoIdentification(string identification);

bool validateKindOfVideo(string kindOfVideo);

bool validateName(string name);

bool validateDirectorName(string directorName);

bool validateHours(unsigned int hours);

bool validateMinutes(unsigned int minutes);

bool validateSeconds(unsigned int seconds);

bool validateDuration(DurationStructure durartion);

bool validateNumberOfSeasons(int numberOfSeasons);

bool validateReleaseYear(int releaseYear);

bool validateGenre(string genre);

bool validateGenres(GenresStructure genres);

bool validateVideo(VideoDocumentStructure video);

#endif