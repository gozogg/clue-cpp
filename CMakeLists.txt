cmake_minimum_required(VERSION 3.20)
project(clue_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CLUE_SOURCES
    src/Game.cpp
    src/Player.cpp
    src/HumanPlayer.cpp
    src/AIPlayer.cpp
    src/Card.cpp
    src/Deck.cpp
    src/Solution.cpp
    src/Room.cpp
    src/Board.cpp
    src/GameState.cpp
    src/DeductionEngine.cpp
)

add_executable(clue
    src/main.cpp
    ${CLUE_SOURCES}
)

target_include_directories(clue PRIVATE include)

enable_testing()

add_executable(clue_tests
    tests/test_main.cpp
    ${CLUE_SOURCES}
)

target_include_directories(clue_tests PRIVATE include)

add_test(NAME clue_tests COMMAND clue_tests)
