/*06. Programe o jogo da velha, em C++. Dois jogadores, no seu computador, devem poder jogar. Cada jogador diz uma linha e um número,
no tabuleiro 3x3, para jogar (só pode jogar em locais livres do tabuleiro). Ao final de cada partida, ele deve dizer quem ganhou ou se deu empate,
bem como o placar do jogo, e se querem jogar mais uma partida ou encerrar o programa.*/

#include <iostream>

using namespace std;

// Matriz 3x3
char board [3][3] = {
    {' ', ' ',' '},
    {' ', ' ',' '},
    {' ', ' ',' '}
};

// Variavel player
char player = 'X';

// Numero de jogadas
int moves = 0;

// Função pra imprimir o tabuleiro.
void printBoard() {
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

// Função pra Verificar se o jogador ganhou.
bool checkVitoria() {

    // Verificação das linhas.
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
    }

    // Verificação das colunas.
    for  (int j = 0; j < 3; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
            return true;
    }

    // Verificação das diagonais.
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

// Função verificar empate.
bool checkEmpate() {
    return moves == 0;
}

void movimentos (int &linha, int &coluna) {
    cout << "Digite a linha (1-3) e a coluna (1-3) separados por um espaço: ";
    cin >> linha >> coluna;

    linha--;
    coluna--; 

    while (board[linha][coluna] != ' ') {
        cout << "Posição invalida. Tente novamente." << endl;
        cout << "Digite a linha (1 - 3) e a coluna (1 - 3) separados por um espaço: ";
        cin >> linha >> coluna;

        linha--;
        coluna--;
    }
}

int main() {

    bool jogando = true;
    int pontuaçãoX = 0, pontuaçãoO = 0;

    while (jogando) {
        printBoard();

        int linhas, colunas;
        movimentos(linhas, colunas);

        board[linhas][colunas] = player;
        moves++;

        if (checkVitoria()) {
            cout << "Jogador " << player << " ganhou!" << endl;

            if (player == 'X')
                pontuaçãoX++;

            else
                pontuaçãoO++;
            cout << "Placar: X - " << pontuaçãoX << ", 0 - " << pontuaçãoO << endl;

            moves = 0;
            memset(board, ' ', sizeof(board));

            cout << "Deseja jogar novamente? (S/N) ";
            char answer;
            cin >> answer;
            if (answer == 'N' || answer == 'n')
                jogando = false;
            player = 'X';
        }
        else if (checkEmpate()) {
            cout << "Empate!" << endl;
            cout << "Placar: X - " << pontuaçãoX << ", O - " << pontuaçãoO << endl;
        
            moves = 0;
            memset(board, ' ', sizeof(board));

            cout << "Deseja jogar novamente? (S/N) ";
            char answer;
            cin >> answer;
            if (answer == 'N' || answer == 'n')
                jogando = false;
            player = 'X';
    }
        else {
            if (player == 'X')
                player = 'O';
            else 
                player = 'X';
        }
    }
    return 0;
}

