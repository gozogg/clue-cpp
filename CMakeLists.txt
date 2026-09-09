cmake_minimum_required(VERSION 3.20)
project(clue_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(clue
    src/main.cpp
    src/Game.cpp
    src/Player.cpp
    src/Card.cpp
)

target_include_directories(clue PRIVATE include)

enable_testing()

add_executable(clue_tests
    tests/test_main.cpp
    src/Player.cpp
    src/Card.cpp
)

target_include_directories(clue_tests PRIVATE include)

add_test(NAME clue_tests COMMAND clue_tests)
