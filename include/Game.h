#pragma once

#include "Player.h"

#include <vector>

class Game {
public:
    Game();

    void run();

private:
    void setup();
    void printWelcome() const;
    void printPlayers() const;

    std::vector<Player> players_;
};
