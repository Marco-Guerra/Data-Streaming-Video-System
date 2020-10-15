#include "menu_messages.hpp"

/**
* Funtion: mensagem de inicio do programa
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void initMessage() {

    system("clear");

    cout << endl 
         << " ---------------------------------------" << endl
         << " ---------------------------------------" << endl 
         << " ----- Data Streaming Video System -----" << endl
         << " ---------------------------------------" << endl
         << " --------------------------- Since 2020." << endl 
         << " Press enter to continue ...            " << endl << endl << endl;

    getChar();
}

/**
* Funtion: formato e texto do menu principal
* @param {int} - opção do usuario
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void menuPrincipalMessage(int option) {

    cout << endl
         << " Menu principal" << endl
         << " --------------" << endl;

    // acessar menu de usuários
    selectedOption( option == 0 );
    cout << "Acessar menu de usuários" << endl;

    // acessar menu de vídeo
    selectedOption( option == 1 );
    cout << "Acessar menu de vídeos" << endl;

    // rotina para finalizar o programa
    selectedOption( option == 2 );
    cout << "Finalizar o programa" << endl << endl;
}

/**
* Funtion: formato e texto do menu de usuários
* @param {int} - opção do usuario
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void usersMenuMessage(int option) {

    cout << endl
         << " Menu de usuários" << endl
         << " ----------------" << endl;

    // adicionar um novo usuário
    selectedOption( option == 0 );
    cout << "Adicionar um novo usuário" << endl;

    // acessar menu de usuário
    selectedOption( option == 1 );
    cout << "Acessar menu de usuário" << endl;

    // eliminar um usuário
    selectedOption( option == 2 );
    cout << "Eliminar um usuário" << endl;

    // retornar o controle para o menu principal
    selectedOption( option == 3 );
    cout << "Retornar para o menu principal" << endl << endl;

}

/**
* Funtion: formato e texto do menu de usuário
* @param {int} - opção do usuario
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void userMenuMessage(int option) {

    cout << endl
         << " Menu de usuário" << endl
         << " ---------------" << endl;

    // imprimir todos os dados de um usuário
    selectedOption( option == 0 );
    cout << "Imprimir os dados do usuário" << endl;

    // acessar menu de dados do usuário
    selectedOption( option == 1 );
    cout << "Acessar menu de dados do usuário" << endl;

    // retornar o controle para o menu de usuários
    selectedOption( option == 2 );
    cout << "Retornar para o menu de usuários" << endl << endl;

}

/**
* Funtion: formato e texto do menu de dados do usuário
* @param {int} - opção do usuario
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void dataUserMenuMessage(int option) {

    cout << endl
         << " Menu de dados de usuário" << endl
         << " ------------------------" << endl;

    // mudar nome do usuário
    selectedOption( option == 0 );
    cout << "Mudar nome do usuário" << endl;

    // mudar data de nascimento do usuário
    selectedOption( option == 1 );
    cout << "Mudar data de nascimento do usuário" << endl;

    // mudar o dia da data de nascimento do usuário
    selectedOption( option == 2 );
    cout << "Mudar o dia da data de nascimento do usuário" << endl;

    // mudar o mes da data de nascimento do usuário
    selectedOption( option == 3 );
    cout << "Mudar o mes da data de nascimento do usuário" << endl;

    // mudar o ano da data de nascimento do usuário
    selectedOption( option == 4 );
    cout << "Mudar o ano da data de nascimento do usuário" << endl;

    // adicionar um novo vídeo ao histórico de vídeos do usuário
    selectedOption( option == 5 );
    cout << "Adicionar um vídeo ao histórico" << endl;

    // retornar o controle para o menu de usuário
    selectedOption( option == 6 );
    cout << "Retornar para o menu do usuário" << endl << endl;

}

/**
* Funtion: formato e texto do menu de vídeos
* @param {int} - opção do usuario
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void videosMenuMessage(int option) {

    cout << endl
         << " Menu de vídeos" << endl
         << " --------------" << endl;

    // adiciona um novo vídeo
    selectedOption( option == 0 );
    cout << "Adiciona um novo vídeo" << endl;

    // acessar menu de vídeo
    selectedOption( option == 1 );
    cout << "Acessar menu de vídeo" << endl;

    // eliminar um vídeo
    selectedOption( option == 2 );
    cout << "Eliminar um vídeo" << endl;

    // retornar o controle para o menu principal
    selectedOption( option == 3 );
    cout << "Retornar para o menu principal" << endl << endl;

}

/**
* Funtion: formato e texto do menu de vídeo
* @param {int} - opção do usuario
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void videoMenuMessage(int option) {

    cout << endl
         << " Menu de vídeo" << endl
         << " -------------" << endl;

    // imprimir todos os dados de um vídeo
    selectedOption( option == 0 );
    cout << "Imprimir todos os dados de um vídeo" << endl;

    // acessar menu de dados do vídeo
    selectedOption( option == 1 );
    cout << "Acessar menu de dados do vídeo" << endl;

    // retornar o controle para o menu de vídeos
    selectedOption( option == 2 );
    cout << "Retornar para o menu de vídeos" << endl << endl;

}

/**
* Funtion: formato e texto do menu de dados do vídeo
* @param {int} - opção do usuario
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void dataVideoMenuMessage(int option) {

    cout << endl
         << " Menu de dados de vídeo" << endl
         << " ----------------------" << endl;

    // mudar o tipo do vídeo
    selectedOption( option == 0 );
    cout << "Mudar tipo do vídeo" << endl;

    // mudar o nome do vídeo
    selectedOption( option == 1 );
    cout << "Mudar nome do vídeo" << endl;

    // mudar o nome do diretor do vídeo
    selectedOption( option == 2 );
    cout << "Mudar o nome do diretor do vídeo" << endl;

    // mudar as horas de duração do vídeo
    selectedOption( option == 3 );
    cout << "Mudar as horas de duração do vídeo" << endl;

    // mudar as minutos de duração do vídeo
    selectedOption( option == 4 );
    cout << "Mudar as minutos de duração do vídeo" << endl;

    // mudar as segundos de duração do vídeo
    selectedOption( option == 5 );
    cout << "Mudar as segundos de duração do vídeo" << endl;

    // mudar a duração do vídeo
    selectedOption( option == 6 );
    cout << "Mudar a duração do vídeo" << endl;

    // mudar o número de temporadas do vídeo
    selectedOption( option == 7 );
    cout << "Mudar o número de temporadas do vídeo" << endl;

    // mudar o ano de lançamento do vídeo
    selectedOption( option == 8 );
    cout << "Mudar o ano de lançamento do vídeo" << endl;

    // adicionar um novo genero aos generos do vídeo
    selectedOption( option == 9 );
    cout << "Adicionar um novo genero ao vídeo" << endl;

    // retornar o controle para o menu de vídeo
    selectedOption( option == 10 );
    cout << "Retornar para o menu do vídeo" << endl << endl;

}

// mensagem final do programa
/**
* Funtion: formato e texto do menu de dados do vídeo
* @returns {void} - none
* 
* @precondition: none
* @postcondition: none
*/
void endMessage() {

    system("clear");

    cout << endl 
         << "------------------------------------------" << endl 
         << "----- Programa encerrado com sucesso -----" << endl
         << "------------------------------------- Fim." << endl << endl << endl;
}
