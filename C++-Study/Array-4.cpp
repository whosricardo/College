#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numeros[6];
    srand(time(NULL)); 

    for (int i = 0; i < 6; i++) {
        int numero;
        bool repetido;
        do {
            repetido = false;
            numero = rand() % 60 + 1; 
            for (int j = 0; j < i; j++) {
                if (numeros[j] == numero) {
                    repetido = true;
                    break;
                }
            }
        } while (repetido);
        numeros[i] = numero;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 6; j++) {
            if (numeros[j] < numeros[i]) {
                int temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    cout << "Numeros da Mega-Sena sorteados:";
    for (int i = 0; i < 6; i++) {
        cout << " " << numeros[i];
    }
    cout << endl;

    return 0;
}
