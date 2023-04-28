// Nutrição

#include <iostream>

using namespace std;

int main() {

    // Variavel
    double peso;
    char continuar = 's';

    // Input do usuario
    while (continuar == 's') {
        cout << "Aqui está uma calculadora de proteinas, carboidratos e gordura pra sua dieta." << endl
             << "Porfavor insira seu peso em KG abaixo: " << endl
             << "Insira aqui -> ";
        cin >> peso;

        // Calculos
        int proteina = peso * 2;
        int carboidratos = peso * 3.5;
        int gordura = peso * 1.75;

       // Resposta final do programa
        cout << "De acordo com o seu peso atual, você deve ingerir: " << endl
             << carboidratos << " > " << "Gramas de Carboidratos." << endl
             << proteina << " > " << "Gramas de Proteina." << endl
             << gordura << " > " << "Gramas de Gordura." << endl;

        cout << "Deseja continuar? (s/n)";
        cin >> continuar;
    }

    return 0;
}