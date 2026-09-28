#include "AIPlayer.h"

#include <utility>

AIPlayer::AIPlayer(std::string name)
    : Player(std::move(name)) {}

DeductionEngine& AIPlayer::getNotebook() {
    return notebook_;
}

const DeductionEngine& AIPlayer::getNotebook() const {
    return notebook_;
}
