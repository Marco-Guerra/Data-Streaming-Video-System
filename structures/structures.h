#ifndef STRUCTURES
#define STRUCTURES

#include <iostream>
using namespace std;

// 
struct DurationStructure{
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
};

// 
struct GenresStructure{

};

// 
struct MovieDocumentStructure{
    string identification;
    string kindOfMovie;
    string directorName;
    DurationStructure durartion;
    int numberOfSeasons;
    int releaseYear;
    GenresStructure genres;
};

// 
struct DateOfBirth{
    int year;
    int month;
    int day;
};

// 
struct UserDocumentStructure{
    string identification;
    string name;
    DateOfBirth date;
    
};

#endif
