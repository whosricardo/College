// Saude

#include <iostream>

using namespace std;

int main() {

    int resposta;
    cout << "1 - Cobra." << endl
         << "2 - Escorpião." << endl
         << "3 - Aranha." << endl
         << "Insira aqui -> ";
    cin >> resposta;

    // Picada de cobra
    switch (resposta) {
    case 1:
        cout << "Em caso de picada de cobra: " << endl
             << "1 - não perca tempo em procurar ajuda, pois o tratamento deve ser feito em até 30 minutos após a picada;" << endl
             << "2 - deitar e acalmar a vítima; o acidentado não deve locomover-se com os próprios meios;" << endl
             << "3 - lavar o local da picada apenas com água ou com água e sabão;" << endl
             << "4 - aplicar compressa de gelo no local;" << endl
             << "5 - transportar (em maca) a vítima ao Médico mais próximo, para tratamento (aplicação do soro);" << endl
             << "6 - levar junto a cobra (viva ou morta) para identificação.";
        break;

    // Picada de escorpião
    case 2:
        cout << "Em caso de picada de Escorpião: "
             << "1 - manter a vítima em repouso e calma;" << endl
             << "2 - lavar o local da picada com água e sabão;" << endl
             << "3 - não fazer torniquete no membro acidentado;" << endl
             << "4 - aplicar compressas frias nas primeiras horas;" << endl
             << "5 - aplicar respiração artificial, se a vítima não estiver respirando bem;" << endl
             << "6 - encaminhar a vítima ao Posto Médico ou Hospital.";
        break;

    // Picada de aranha
    case 3:
        cout << "Em caso de picada de Aranha: "
             << "1 - manter a vítima em repouso e calma;" << endl
             << "2 - lavar o local da picada com água e sabão;" << endl
             << "3 - não fazer torniquete no membro acidentado;" << endl
             << "4 - aplicar compressas frias nas primeiras horas;" << endl
             << "5 - aplicar respiração artificial, se a vítima não estiver respirando bem;" << endl
             << "6 - encaminhar a vítima ao Posto Médico ou Hospital.";
        break;

    default:
        cout << "Digite Numeros de 1 - 3";
        break;
    }

    return 0;
}