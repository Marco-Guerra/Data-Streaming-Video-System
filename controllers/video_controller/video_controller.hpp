#ifndef VIDEO_CONTROLLER
#define VIDEO_CONTROLLER

#include "video_validator.hpp"

#include "../../structures/video_structure.hpp"

#include "../menu_controller/menu_utilities.hpp"
#include "../user_controller/user_controller.hpp"

#include "../../interfaces/video_interface/print_stdio_video.hpp"
#include "../../interfaces/video_interface/read_stdio_video.hpp"

// 
void swapVideo (VideoDocumentStructure &videoA, VideoDocumentStructure &videoB);

// 
int findVideoByIdentification(VideoListDocumentStructure &videoList, string identification);

// 
int findVideoByName(VideoListDocumentStructure &videoList, string name);

// função que gera um ID automaticamente
string gerateVideoIdentification();

// 
int selectVideoByIdentification(VideoListDocumentStructure &videoList);

// 
int selectVideoByName(VideoListDocumentStructure &videoList);

// rotina para agregar um video
void addVideoController(VideoListDocumentStructure &videoList);

// rotina para eliminar um video
void deleteVideoController(VideoListDocumentStructure &videoList);

// rotina para imprimir os dados de um video na saída estandar
void printVideoController(VideoDocumentStructure video);

// rotina para combiar o tipo do video
string changeKindOfVideoController();

// rotina para combiar o name do video
string changeVideoNameController();

// rotina para combiar o name do director do video
string changeVideoDirectorNameController();

// rotina para combiar as horas que dura o video
int changeVideoDurationHoursController();

// rotina para combiar os minutos que dura o video
int changeVideoDurationMinutesController();

// rotina para combiar os segundos que dura o video
int changeVideoDurationSecondsController();

// rotina para combiar a duração do video
DurationStructure changeVideoDurationController();

// rotina para combiar o numero de temporadas de um video
int changeVideoNumberOfSeasonsController();

// rotina para combiar o ano de lançamento do video
int changeVideoReleaseYearController();

// rotina para adicionar um genero ao video
GenresStructure addVideoGenreController(GenresStructure genres);

#endif
