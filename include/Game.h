#pragma once

#include "Board.h"
#include "Deck.h"
#include "GameState.h"
#include "Player.h"
#include "Solution.h"

#include <memory>
#include <optional>
#include <vector>

class Game {
public:
    Game();

    void run();

private:
    void setup();
    void printWelcome() const;
    void printPlayers() const;

    Deck deck_;
    Board board_;
    GameState state_;
    std::optional<Solution> envelope_;
    std::vector<std::unique_ptr<Player>> players_;
};
