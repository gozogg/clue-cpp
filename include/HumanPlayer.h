#pragma once

#include "Player.h"

class HumanPlayer : public Player {
public:
    explicit HumanPlayer(std::string name);

    // TODO: read suggestions and accusations from std::cin
};
