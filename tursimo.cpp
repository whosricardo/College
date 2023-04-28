// Turismo/ Maceio

#include <iostream>

using namespace std;

int main() {

    int respostaUsuario;
    char continuar = 's';

    // Inicio 
    while (continuar == 's') {
    cout << "Opa, boa tarde! Estamo aqui proporcionando á voce um pequeno resumo sobre os principais pontos turisticos de Maceió." << endl
         << "Porfavor insira aqui abaixo algo que esteja do seu interesse: " << endl
         << "1 - Praias." <<  endl
         << "2 - Pontos Turisticos." << endl
         << "Insira aqui ->" << endl;
    cin >> respostaUsuario;

    switch (respostaUsuario) {
        // Praias
        case 1:
            cout << "Percebi que você quer saber mais sobre as praias daqui de Maceió! -" << endl
                 << "Saiba que essas praias que vou citar a baixo, são as mais famosas de Maceió :) -" << endl
                 << "1 - Sonho Verde, 2 - Pratagi, 3 - Costa Brava, 4 - Paripueira, 5 - Ipioca, 6 - Jacarecica, 7 - Praia do Gunga, -" << endl
                 << "8 - Cruz das almas, 9 - Ponta Verde, 10 - Garça Torta, 11 - Pajuçara, 12 - Jatiuca, 13 - Guaxuma" << endl;
            break;
        
        // Pontos Turisticos
        case 2:
            cout << "Percebi que você quer saber mais sobre os pontos turisticos daqui de Maceió! -" << endl
                 << "Para conhecer mais a fundo a história alagoana, obras de artistas locais, costumes e detalhes sobre eventos que acontecem na capital -" << endl
                 << "visite o Museu Théo Brandão, que, além de ter uma visita guiada muito interessante, está em um casarão belíssimo -" << endl
                 << "O bairro de Jaraguá, próximo de onde está esse museu, é ideal para ver construções antigas e históricas." << endl;
            break;
    }
    cout << "Se você deseja continuar usando nosso Guia Turistico, digite (s/n) abaixo! Sendo s[Sim] n[Não]" << endl
         << "Saiba que qualquer coisa alem de S sera considerado como um N" << endl
         << "insira aqui ->" << endl;
    cin >> continuar;

    continuar = tolower(continuar);

    if (continuar != 's'){
        break;
    }
    }
}