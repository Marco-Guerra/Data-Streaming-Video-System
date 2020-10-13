#ifndef VIDEO_CONTROLLER
#define VIDEO_CONTROLLER

#include "../../structures/video_structure.hpp"

int findIndiceOfId(VideoListDocumentStructure vet, string id);

void swapVideo (VideoDocumentStructure &a, VideoDocumentStructure &b);

// rotina para agregar um video
void addVideoController(VideoListDocumentStructure &vet);

// rotina para acessar um video
void accessVideoController(VideoListDocumentStructure &vet);

// rotina para eliminar um video
void deleteVideoController(VideoListDocumentStructure &vet);

// rotina para imprimir os dados de um video na saída estandar
void printVideoController(VideoListDocumentStructure vet);

// rotina para combiar todos os dados não sensiveis do video
void changeVideoDataController();

// rotina para combiar o tipo do video
void changeKindOfVideoController();

// rotina para combiar o name do video
void changeVideoNameController();

// rotina para combiar o name do director do video
void changeVideoDirectorNameController();

// rotina para combiar as horas que dura o video
void changeVideoDurationHoursController();

// rotina para combiar os minutos que dura o video
void changeVideoDurationMinutesController();

// rotina para combiar os segundos que dura o video
void changeVideoDurationSecondsController();

// rotina para combiar a duração do video
void changeVideoDurationController();

// rotina para combiar o numero de temporadas de um video
void changeVideoNumberOfSeasonsController();

// rotina para combiar o ano de lançamento do video
void changeVideoReleaseYearController();

// rotina para adicionar um genero ao video
void addVideoGenreController();

#endif