#include <iostream>
using namespace std;

int main() {
    int array_original[10] = {1, 2, 3, 4, 5, 2, 6, 7, 5, 8}; 
    int array_sem_repeticao[10] = {0};
    int contador = 0; 

    for (int i = 0; i < 10; i++) {
        bool repetido = false;

        for (int j = 0; j < contador; j++) {
            if (array_original[i] == array_sem_repeticao[j]) {
                repetido = true;
                break;
            }
        }

        if (!repetido) {
            array_sem_repeticao[contador] = array_original[i];
            contador++;
        }
    }

    cout << "Array sem repeticao: ";
    for (int i = 0; i < contador; i++) {
        cout << array_sem_repeticao[i] << " ";
    }
    cout << endl;

    return 0;
}
