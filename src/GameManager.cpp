#include "GameManager.h"
#include <iostream>

GameManager::GameManager() {
    // Game manager setup can go here later
}

void GameManager::playTicTacToe() {
    TicTacToe game;
    game.play();
}

void GameManager::playSnake() {
    std::cout << "Snake game not yet implemented.\n";
}