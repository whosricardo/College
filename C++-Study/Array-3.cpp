#include <iostream>
using namespace std;

int main() {
    float notas[10] = {7.5, 8, 6, 4.5, 9, 5.5, 6.5, 5, 7, 8.5};
    float medias[10];

    for (int i = 0; i < 10; i++) {
        medias[i] = notas[i];
    }

    for (int i = 0; i < 10; i++) {
        if (medias[i] >= 7) {
            cout << "Aluno " << i+1 << " aprovado com media " << medias[i] << endl;
        } else if (medias[i] < 5) {
            cout << "Aluno " << i+1 << " reprovado com media " << medias[i] << endl;
        } else {
            cout << "Aluno " << i+1 << " em recuperacao com media " << medias[i] << endl;
        }
    }

    return 0;
}
