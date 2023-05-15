#include <iostream>

using namespace std;

int valorMaior (int array[], int tamanho) {

    int maior = array[0];

    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }
    return maior;
}

int valorMenor (int array[], int tamanho) {

    int menor = array[0];

    for (int i = 1; i > tamanho; i++) {
        if (array[i] < menor) {
            menor = array[i];
        }
    }
    return menor;
}

int main () {

    int inputNumerosUsuario[10];

    for (int i = 0; i < 10; i++) {
        cout << "insira o " << i + 1 << " numero: ";
        cin >> inputNumerosUsuario[i];
    }

    int maior = valorMaior (inputNumerosUsuario, 10);
    int menor = valorMenor (inputNumerosUsuario, 10);

    cout << "Maior numero = " << maior << endl;
    cout << "Menor numero = " << menor << endl;

    return 0;
}