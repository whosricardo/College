// Historia dos paises

#include <iostream>
#include <string>

using namespace std;

int main() {
    string resposta;
    char continuar = 's';

    // Input do Usuario
    while (continuar == 's') {

        cout << "Opa, tudo bem? Quer saber mais sobre os continentes? So digitar o continente desejado abaixo: " << endl
             << "Insira aqui -> ";
        getline(cin, resposta);

        // Loop pra transformar em minusculo a resposta do usuario
        for (int looplower = 0; looplower < resposta.length(); looplower++) {
        resposta[looplower] = tolower(resposta[looplower]);
        }

        // Condicionais

        // America
        if (resposta.find("america") != string::npos || resposta.find("americano") != string::npos) {
            cout << "A América que também costuma ser chamada de “Américas” quando tratada em seu todo" << endl
                 << "é um continente localizado nos hemisférios norte, sul e ocidental, situando-se entre os oceanos Pacífico e Antártico" << endl
                 << "A sua área de 42.459.000 km² torna-a o segundo maior continente do mundo, ficando atrás apenas da Ásia." << endl;
        }

        // Asia
        else if (resposta.find("asia") != string::npos || resposta.find("asiatico") != string::npos) {
            cout << "O continente asiático é berço das mais antigas civilizações datadas a cerca de 4000 anos" << endl
                 << "Também é o lugar onde nasceram diversas religiões monoteístas, como o cristianismo e o islamismo" << endl
                 << "As civilizações surgiram segundo as características de cada região da Ásia." << endl;
        }
        // Europa
        else if (resposta.find("europa") != string::npos || resposta.find("europeu") != string::npos) {
            cout << "Resumidamente, a história da Europa é confundida com a de grande parte do mundo." << endl
                 << "O continente foi descoberto por volta de 500 a.C., quando os gregos, inicialmente, dominaram e governaram a região." << endl
                 << "Eles fundaram as primeiras grandes cidades europeias e espalharam sua cultura pelo resto do mundo." << endl;
        }

        // Africa 
        else if (resposta.find("africa") != string::npos || resposta.find("africano") != string::npos) {
            cout << "A História da África, geograficamente, teve início com a divisão da Pangeia há 300 milhões de anos" << endl
                 << "O supercontinente deu origem a dois blocos:" << endl
                 << "Laurásia (América do Norte e Eurásia) e Gondwna (América do Sul, África, Índia, Austrália e as ilhas do Pacífico Sul)." << endl;
        }

        else if (resposta.find("oceania") != string::npos) {
            cout << "A Oceania é o menor continente da Terra, sendo em maior parte composta pela Austrália, principal e mais desenvolvido país da região." << endl
                 << "A Oceania é um continente localizado a sudeste da Ásia, compreendendo um conjunto de ilhas somado à Austrália, essa última considerada como uma massa continental chamada de :" <<endl
                 << "Australásia" << endl;
        }
        // Mensagem de Erro
        else {
            cout << "Nosso sistema não conseguiu verificar na sua resposta um continente valído, verifique se na sua sentença possui um continente existente" << endl;
        }

    cout << "Deseja saber sobre outro continente? (s/n)" << endl
         << "Insira aqui (esteja ciente que qualquer resposta diferente de s[sim] vai encerrar o programa) -> ";
    cin >> continuar;

    continuar = tolower(continuar);
    
    if (continuar != 's') {
        break;
    }

    }
    
    return 0;

}