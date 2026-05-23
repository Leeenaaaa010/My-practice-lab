#include <iostream>
#include "GameMenu.h"
#include "GameManager.h"

int main() {

    GameMenu menu;
    GameManager manager;

    int choice = 0;

    while (choice != 3) {

        menu.displayMenu();

        choice = menu.getChoice();

        if (choice == 1) {
            manager.playSnake();
        }
        else if (choice == 2) {
            manager.playTicTacToe();
        }
        else if (choice == 3) {
            std::cout << "Goodbye!\n";
        }
        else {
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}