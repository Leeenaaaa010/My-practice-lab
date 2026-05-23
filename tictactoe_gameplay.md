# TicTacToe Gameplay — Spec

## Problem statement

The Mini Game Hub currently displays a menu but does not allow the user to actually play TicTacToe. This feature adds full TicTacToe gameplay, including player turns, move validation, win detection, and draw detection.

## Types involved

* GameManager
  * Starts and manages the TicTacToe game.

* TicTacToe
  * Stores the board state.
  * Handles gameplay logic and player moves.

* GameMenu
  * Allows the user to choose TicTacToe from the main menu.

## Public interface

```cpp
class TicTacToe {
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

    void play();
};
```

## Inputs and outputs

### Input

* Menu selection
* Row and column values entered by the player

### Output

* Updated TicTacToe board
* Invalid move messages
* Winner message
* Tie message

## Edge cases

* Player enters coordinates outside the board.
* Player attempts to place a move on an occupied cell.
* The board fills completely without a winner.
* A player wins on the final possible move.

## Three tests

* Normal: placing a valid move updates the board.
* Edge: placing a move on an occupied cell is rejected.
* Boundary: switching players changes the current player correctly.

## Design decisions

I kept the board as a simple 3x3 character array. I avoided advanced C++ features and extra helper classes to keep the implementation easy to understand and explain.
