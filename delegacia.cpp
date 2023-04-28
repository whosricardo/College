// Juridico 
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string BO = "Retire sua senha ao lado, e espere ser chamado para a realizacão do B.O.";

    // Input do usuario
    string resposta;
    cout << "Insira o ocorrido: " << endl;
    getline(cin, resposta);

    // Lower Case
    for(int LowerCase = 0; LowerCase < resposta.length(); LowerCase++) {
        resposta[LowerCase] = tolower(resposta[LowerCase]);
    }

    // Condições 
    if (resposta.find("roubo") != string::npos || resposta.find("morreu") != string::npos) {
        cout << "O ocorrido se enquadrada no artigo 157." << endl 
             << BO;
    }
    
    else if (resposta.find("furto") != string::npos) {
        cout << "O ocorrido se enquadra no artigo 155." << endl
             << BO;
    }

    else {
        cout << "Erro, não reconheci no nosso sistema algo que se enquadre no seu problema." << endl
             << "Para ocorrencias mais complexas, diriga-se ao balcão e fale com o delegado, apresentando fatos e provas.";
    }

    return 0;
}