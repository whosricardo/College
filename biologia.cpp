// Biologia

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Input do usuario
    int resposta;
    cout << "Para a supressão da arvore desejada primeiro, devemos saber: " << endl
         << "1 - Nativa." << endl
         << "2 - Não Nativa." << endl
         << "Insira aqui -> ";
    cin >> resposta;

    switch(resposta) {
        // Nativa ->
        case 1:
            int autorizacaoAmbiental;

            cout << "Tem autorização ambiental ?" << endl
                 << "1 - Sim." << endl
                 << "2 - Não." << endl
                 << "Insira aqui -> ";
            cin >> autorizacaoAmbiental;

            switch(autorizacaoAmbiental) {
                case 1: 
                    cout << "Você pode realizar a supressão da arvore desejada.";
                    break;

                case 2:
                    cout << "Infelizmente você não pode realizar a supressão da arvore desejada.";
                    break;

                default:
                    cout << "Porfavor insira 1 ou 2, sendo 1 = Sim, 2 = Não";
            }
            break;
        // Não nativa ->
        case 2:
            int unidadeConservacao;

            cout << "A mesma está localizada em uma unidade de conservação ?" << endl
                 << "1 - Sim." << endl
                 << "2 - Não." << endl
                 << "Insira aqui -> ";
            cin >> unidadeConservacao;

            switch (unidadeConservacao) {
                // Está localizada em uma unidade de conservação ->
                case 1: 
                    int autorizacaoConservacao;

                    cout << "Tem autorização ambiental ?" << endl
                         << "1 - Sim." << endl
                         << "2 - Não." << endl
                         << "Insira aqui -> ";
                    cin >> autorizacaoConservacao;

                    switch(autorizacaoConservacao) {
                        case 1: 
                            cout << "Você pode realizar a supressão da arvore desejada.";
                            break;

                        case 2:
                            cout << "Infelizmente você não pode realizar a supressão da arvore desejada.";
                            break;

                        default:
                            cout << "Porfavor insira 1 ou 2, sendo 1 = Sim, 2 = Não";
                    }   
                    break;
                
                // Não Está localizada em uma unidade de conservação ->
                case 2:
                    int areaDePreservacaoAmbiental;
                    
                    cout << "A mesma está localizada em um local de preservação ambiental ?" << endl
                         << "1 - Sim." << endl
                         << "2 - Não." << endl
                         << "Insira aqui -> ";
                    cin >> areaDePreservacaoAmbiental;

                    switch(areaDePreservacaoAmbiental) {
                        // Está localizada em uma area de preservação ambiental
                        case 1:
                            int autorizacaoPreservacao;

                            cout << "Tem autorização ambiental ?" << endl
                                 << "1 - Sim." << endl
                                 << "2 - Não." << endl
                                 << "Insira aqui -> ";
                            cin >> autorizacaoPreservacao;

                            switch(autorizacaoPreservacao) {
                                case 1:
                                    cout << "Você pode realizar a supressão da arvore desejada.";
                                    break;

                                case 2:
                                    cout << "Infelizmente você não pode realizar a supressão da arvore desejada.";
                                    break;

                                default:
                                    cout << "Porfavor insira 1 ou 2, sendo 1 = Sim, 2 = Não";
                            }
                            break;

                        // Não está localizada em uma area de preservaçao ambiental
                        case 2:
                            cout << "Pode realizar a supressão da arvore desejada ";
                            break;

                        default:
                            cout << "Porfavor insira 1 ou 2, sendo 1 = Sim, 2 = Não";
                    }
            }
            

    }
    return 0;
}