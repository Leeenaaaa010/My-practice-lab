cmake_minimum_required(VERSION 3.10)

project(Mini-Game-Hub)

set(CMAKE_CXX_STANDARD 17)

# Main program
add_executable(game_hub
    src/main.cpp
    src/GameMenu.cpp
    src/GameManager.cpp
    src/TicTacToe.cpp
)

# Tests
enable_testing()

add_executable(tests
    tests/test_main.cpp
    src/GameMenu.cpp
    src/TicTacToe.cpp
)

add_test(NAME FeatureTests COMMAND tests)