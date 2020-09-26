#!/bin/sh
# Script de complação do programa

# colocar como leitura recursiva se possivel

g++ main.cpp \
    controllers/user_controller/*.cpp \
    controllers/video_controller/*.cpp \
    interfaces/user_interface/*.cpp \
    interfaces/video_interface/*.cpp \
-o main.out

exit 0