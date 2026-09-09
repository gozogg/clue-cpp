#include "Game.h"

#include <iostream>

Game::Game() {
    setup();
}

void Game::setup() {
    // TODO:
    // 1. Create the deck
    // 2. Create the solution
    // 3. Create players
    // 4. Shuffle/deal cards
}

void Game::run() {
    printWelcome();
    printPlayers();

    std::cout << "\nGame engine not implemented yet. Start building it!\n";
}

void Game::printWelcome() const {
    std::cout << "====================================\n";
    std::cout << "          CLUE - C++ EDITION        \n";
    std::cout << "====================================\n";
}

void Game::printPlayers() const {
    std::cout << "\nPlayers: " << players_.size() << "\n";

    for (const Player& player : players_) {
        std::cout << " - " << player.getName() << "\n";
    }
}
