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

    char checkWin() {
        // Check rows
        for (int i = 0; i < SIZE; i++) {
            char temp = gameBoard[i][0];
            bool continueOuter = false;

            for (int j = 0; j < SIZE; j++) {
                if (gameBoard[i][j] != temp) {
                    continueOuter = true;
                    break;
                }
            }

            if (continueOuter) {
                continue;
            } else {
                return temp;
            }
        }

        // Check column
        for (int i = 0; i < SIZE; i++) {
            char temp = gameBoard[0][i];
            bool continueOuter = false;

            for (int j = 0; j < SIZE; j++) {
                if (gameBoard[j][i] != temp) {
                    continueOuter = true;
                    break;
                }
            }

            if (continueOuter) {
                continue;
            } else {
                return temp;
            }
        }

        // Check diagonal
        if (gameBoard[0][0] == gameBoard[1][1] && gameBoard[0][0] == gameBoard[2][2]) {
            return gameBoard[0][0];
        }

        if (gameBoard[0][2] == gameBoard[1][1] && gameBoard[0][2] == gameBoard[2][0]) {
            return gameBoard[0][2];
        }

        return '\0';
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
