#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

const int MAX_N = 10;

// Estrutura que representa uma posição no tabuleiro
struct Position {
    int row;
    int col;

    Position(int r, int c) : row(r), col(c) {}

    bool operator==(const Position& other) const {
        return row == other.row && col == other.col;
    }

    bool operator!=(const Position& other) const {
        return !(*this == other);
    }

    // Retorna uma lista com as posições vizinhas
    vector<Position> get_neighbors() const {
        vector<Position> neighbors;
        for (int r = row - 1; r <= row + 1; r++) {
            for (int c = col - 1; c <= col + 1; c++) {
                if (r >= 0 && r < MAX_N && c >= 0 && c < MAX_N && (r != row || c != col)) {
                    neighbors.push_back(Position(r, c));
                }
            }
        }
        return neighbors;
    }
};

// Classe que representa o jogo
class Game {
private:
    vector<Position> ships; // Posições dos navios
    vector<vector<int>> board; // Tabuleiro do jogo
    int num_hits; // Número de tiros certeiros

public:
    Game(int n) : num_hits(0) {
        // Inicializa o tabuleiro com 0s
        board.resize(n, vector<int>(n, 0));

        // Sorteia as posições dos navios
        srand(time(nullptr));
        for (int i = 0; i < n; i++) {
            int row = rand() % n;
            int col = rand() % n;
            ships.push_back(Position(row, col));
        }
    }

    // Retorna true se a posição é de um navio
    bool is_ship(const Position& pos) const {
        for (const auto& ship : ships) {
            if (pos == ship) {
                return true;
            }
        }
        return false;
    }

    // Retorna o número de navios vizinhos
    int num_nearby_ships(const Position& pos) const {
        int count = 0;
        for (const auto& neighbor : pos.get_neighbors()) {
            if (is_ship(neighbor)) {
                count++;
            }
        }
        return count;
    }

    // Retorna true se o tiro acertou um navio
    bool hit_ship(const Position& pos) {
        if (is_ship(pos)) {
            num_hits++;
            board[pos.row][pos.col] = 1;
            return true;
        } else {
            board[pos.row][pos.col] = -1;
            return false;
        }
    }

    // Retorna true se o jogo acabou
    bool is_over() const {
        return num_hits == ships.size();
    }

    // Imprime o tabuleiro
    void print_board() const {
        for (const auto& row : board) {
            for (const auto& val : row) {
                if (val == 1) {
                    cout << "X ";
                } else if (val == -1) {
                    cout << "* ";
                } else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Digite o tamanho do tabuleiro: ";
        cin >> n;

    Game game(n);

    while (!game.is_over()) {
        int row, col;
        cout << "Digite a linha e a coluna do tiro (entre 0 e " << n-1 << "): ";
        cin >> row >> col;

        Position pos(row, col);
        if (game.hit_ship(pos)) {
            cout << "Acertou um navio!" << endl;
        } else {
            int nearby_ships = game.num_nearby_ships(pos);
            cout << "Errou! Há " << nearby_ships << " navios próximos." << endl;
        }

        game.print_board();
    }

    cout << "Parabéns, você afundou todos os navios!" << endl;

    return 0;
}
