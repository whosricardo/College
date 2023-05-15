#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaração das variáveis
    int chuva[7];
    string dias[7] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado", "Domingo"};
    int totalDeChuva = 0;
    int mediaDeChuva = 0;
    int maxDeChuva = 0;
    int minDeChuva = 99999;
    string diaMaxChuva;
    string diaMinChuva;
    
    for (int i = 0; i < 7; i++) {
        cout << "Digite a quantidade de chuva em " << dias[i] << ": ";
        cin >> chuva[i];
        totalDeChuva += chuva[i];
        mediaDeChuva = totalDeChuva / (i+1);

        if (chuva[i] > maxDeChuva) {
            maxDeChuva = chuva[i];
            diaMaxChuva = dias[i];
        }
        
        if (chuva[i] < minDeChuva) {
            minDeChuva = chuva[i];
            diaMinChuva = dias[i];
        }
    }
    
    cout << "Dia com maior quantidade de chuva: " << diaMaxChuva << endl;
    cout << "Dia com menor quantidade de chuva: " << diaMinChuva << endl;
    cout << "Quantidade total de chuva na semana: " << totalDeChuva << endl;
    cout << "Média de chuva por dia: " << mediaDeChuva << endl;
    
    return 0;
}
