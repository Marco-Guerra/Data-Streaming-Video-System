#!/bin/sh
# Script de complação do programa

# g++ main.cpp \
#     controllers/user_controller/*.cpp \
#     controllers/video_controller/*.cpp \
#     interfaces/user_interface/*.cpp \
#     interfaces/video_interface/*.cpp \
# -o main.out

# g++ main.cpp ./*/*/*.cpp -o main.out

# comando para listar todos os arquivos com .cpp
# find . -type f | grep ".cpp" | grep -v "main.cpp" | awk -F "/" '{print $(NF)}'

# se quiser ter ctz que vai funcionar tem que usar isso aqui
# g++ main.cpp "$(find . -type f | grep ".cpp" | grep -v "main.cpp") -o main.out
g++ main.cpp $(find . -name \*.cpp | grep -v "main.cpp" | sed 's/^..//g') -o main.out

exit 0
