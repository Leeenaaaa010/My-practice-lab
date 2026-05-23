#include <iostream>
#include "TicTacToe.h"

TicTacToe::TicTacToe() {
    init();
}

void TicTacToe::init() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '_';
        }
    }

    gameOver = false;
    player = 'X';
}

void TicTacToe::drawBoard() const {
    std::cout << "\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << " " << board[i][j] << " ";

            if (j != 2) {
                std::cout << "|";
            }
        }

        std::cout << "\n";

        if (i != 2) {
            std::cout << "---+---+---\n";
        }
    }

    std::cout << "\n";
}

bool TicTacToe::placeMove(int row, int col) {

    // Reject moves outside the board
    if (row < 0 || row > 2 || col < 0 || col > 2) {
        return false;
    }

    // Reject moves on occupied cells
    if (board[row][col] != '_') {
        return false;
    }

    board[row][col] = player;

    return true;
}

bool TicTacToe::checkTie() const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == '_') {
                return false;
            }
        }
    }

    return true;
}

bool TicTacToe::checkWinner(int row, int col, char player) const {

    // Check row
    if (board[row][0] == player &&
        board[row][1] == player &&
        board[row][2] == player) {

        return true;
    }

    // Check column
    if (board[0][col] == player &&
        board[1][col] == player &&
        board[2][col] == player) {

        return true;
    }

    // Check main diagonal
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player) {

        return true;
    }

    // Check opposite diagonal
    if (board[2][0] == player &&
        board[1][1] == player &&
        board[0][2] == player) {

        return true;
    }

    return false;
}

void TicTacToe::switchPlayer() {
    if (player == 'X') {
        player = 'O';
    }
    else {
        player = 'X';
    }
}

char TicTacToe::getCell(int row, int col) const {
    return board[row][col];
}

char TicTacToe::getCurrentPlayer() const {
    return player;
}

std::tuple<int, int> TicTacToe::input() {
    int row;
    int col;

    std::cout << "Enter the row (1-3): ";

    while (!(std::cin >> row) || row < 1 || row > 3) {
        std::cin.clear();
        std::cin.ignore(256, '\n');

        std::cout << "Invalid row. Try again: ";
    }

    std::cout << "Enter the column (1-3): ";

    while (!(std::cin >> col) || col < 1 || col > 3) {
        std::cin.clear();
        std::cin.ignore(256, '\n');

        std::cout << "Invalid column. Try again: ";
    }

    return std::make_tuple(row - 1, col - 1);
}

void TicTacToe::play() {

    while (!gameOver) {

        drawBoard();

        int row;
        int col;

        std::tie(row, col) = input();

        bool success = placeMove(row, col);

        if (!success) {
            std::cout << "That spot is already taken.\n";
            continue;
        }

        if (checkWinner(row, col, player)) {
            drawBoard();

            std::cout << player << " wins!\n";

            gameOver = true;
        }
        else if (checkTie()) {
            drawBoard();

            std::cout << "It was a tie!\n";

            gameOver = true;
        }
        else {
            switchPlayer();
        }
    }
}