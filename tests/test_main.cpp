#include "../src/GameMenu.h"
#include "../src/TicTacToe.h"

#include <cassert>
#include <iostream>

void test_creation() {
    std::cout << "Test 1: GameMenu creation... ";

    GameMenu m;

    std::cout << "PASS\n";
}

void test_display() {
    std::cout << "Test 2: display menu... ";

    GameMenu m;
    m.displayMenu();

    std::cout << "PASS\n";
}

void test_place_move() {
    std::cout << "Test 3: place move... ";

    TicTacToe game;

    bool success = game.placeMove(0, 0);

    assert(success);
    assert(game.getCell(0, 0) == 'X');

    std::cout << "PASS\n";
}

void test_occupied_cell() {
    std::cout << "Test 4: occupied cell... ";

    TicTacToe game;

    bool firstMove = game.placeMove(0, 0);
    bool secondMove = game.placeMove(0, 0);

    assert(firstMove == true);
    assert(secondMove == false);

    std::cout << "PASS\n";
}

void test_switch_player() {
    std::cout << "Test 5: switch player... ";

    TicTacToe game;

    assert(game.getCurrentPlayer() == 'X');

    game.switchPlayer();

    assert(game.getCurrentPlayer() == 'O');

    std::cout << "PASS\n";
}

int main() {

    std::cout << "Running tests...\n";

    test_creation();
    test_display();

    test_place_move();
    test_occupied_cell();
    test_switch_player();

    std::cout << "All tests passed.\n";

    return 0;
}