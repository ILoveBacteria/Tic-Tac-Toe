#ifndef GAME_H
#define GAME_H
#define SIZE 3

class Game {
public:
    char** gameBoard;
    char turn = 'X';

    Game() {
        initGameBoard();
    }

    void chooseAndChangeTurn(int row, int column) {
        choose(row, column);
        changeTurn();
    }

private:
    void changeTurn() {
        if (turn == 'X') {
            turn = 'O';
        } else {
            turn = 'X';
        }
    }

    void choose(int row, int column) {
        gameBoard[row][column] = turn;
    }

    void initGameBoard() {
        gameBoard = new char*[SIZE];
        for (int i = 0; i < SIZE; ++i) {
            gameBoard[i] = new char[SIZE];
        }

        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                gameBoard[i][j] = '\0';
            }
        }
    }
};

#endif // GAME_H
