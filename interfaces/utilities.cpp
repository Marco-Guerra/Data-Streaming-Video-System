#include <iostream>
#include <string>

using namespace std;

string removeStringSpaces(string line) {

    string newLine = "";

    for (int i = 0; i < (int)line.size(); i++) {
        if (line[i] != ' ') {
            newLine += line[i];
        }
    }
    
    return newLine;
}

void errorMessagesRead(int code) {
	switch(code) {
		case 0:
			cout << "Você está usando o programa de forma errada!\n"
				<< "Por favor rode:\n"
				<< "[nome do programa] [nome do arquivo com os dados]\n";
			break;
		case 1:
			cout << "Falha na abertura do arquivo\n";
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
	}
}
