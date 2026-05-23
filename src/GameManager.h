#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "TicTacToe.h"
#include "SnakeGame.h"
#include "GameMenu.h"

class GameManager {
public:
    GameManager();

    void playTicTacToe();
    void playSnake();
};

#endif