#include "GameMenu.h"
#include <iostream>
using namespace std;

GameMenu::GameMenu(){
    choice = 0;
}

void GameMenu::displayMenu() const{
    cout << "\n===== MINI GAME HUB =====\n";
    cout << "1. Play Snake\n";
    cout << "2. Play Tic Tac Toe\n";
    cout << "3. Exit\n";
    cout << "=========================\n";
}

int GameMenu::getChoice() const {
    int input;
    cout << "Enter your choice: ";
    cin >> input;
    return input;
}