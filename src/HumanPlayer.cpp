#include "HumanPlayer.h"

#include <utility>

HumanPlayer::HumanPlayer(std::string name)
    : Player(std::move(name)) {}
