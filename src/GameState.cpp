#include "GameState.h"

#include <stdexcept>
#include <utility>

GameState::GameState()
    : currentPlayerIndex_(0), phase_(TurnPhase::WaitingToStart) {}

int GameState::getCurrentPlayerIndex() const {
    return currentPlayerIndex_;
}

void GameState::setCurrentPlayerIndex(int index) {
    currentPlayerIndex_ = index;
}

void GameState::advanceToNextPlayer(int playerCount) {
    if (playerCount <= 0) {
        throw std::invalid_argument("playerCount must be positive");
    }

    currentPlayerIndex_ = (currentPlayerIndex_ + 1) % playerCount;
}

TurnPhase GameState::getPhase() const {
    return phase_;
}

void GameState::setPhase(TurnPhase phase) {
    phase_ = phase;
}

const std::optional<Suggestion>& GameState::getCurrentSuggestion() const {
    return currentSuggestion_;
}

void GameState::setCurrentSuggestion(Suggestion suggestion) {
    currentSuggestion_ = std::move(suggestion);
}

void GameState::clearCurrentSuggestion() {
    currentSuggestion_.reset();
}
