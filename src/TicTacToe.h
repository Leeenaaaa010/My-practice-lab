#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <tuple>

class TicTacToe {
private:
    bool gameOver;
    char board[3][3];
    char player;

public:
    TicTacToe();

    void init();

    void drawBoard() const;

    bool placeMove(int row, int col);

    bool checkTie() const;

    bool checkWinner(int row, int col, char player) const;

    void switchPlayer();

    char getCell(int row, int col) const;

    char getCurrentPlayer() const;

    std::tuple<int, int> input();

    void play();
};

#endif