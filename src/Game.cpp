#include "Game.h"

#include "AIPlayer.h"
#include "HumanPlayer.h"

#include <iostream>

Game::Game() {
    setup();
}

void Game::setup() {
    // TODO:
    // 1. Shuffle the deck
    // 2. Draw one character, one weapon, and one room into envelope_
    // 3. Create human and AI players
    // 4. Deal the remaining cards
    // 5. Place characters on the board
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

    for (const auto& player : players_) {
        std::cout << " - " << player->getName() << "\n";
    }
}
