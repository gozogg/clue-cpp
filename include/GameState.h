#pragma once

#include "Suggestion.h"

#include <optional>

enum class TurnPhase {
    WaitingToStart,
    Moving,
    Suggesting,
    Disproving,
    Accusing,
    TurnOver
};

class GameState {
public:
    GameState();

    int getCurrentPlayerIndex() const;
    void setCurrentPlayerIndex(int index);
    void advanceToNextPlayer(int playerCount);

    TurnPhase getPhase() const;
    void setPhase(TurnPhase phase);

    const std::optional<Suggestion>& getCurrentSuggestion() const;
    void setCurrentSuggestion(Suggestion suggestion);
    void clearCurrentSuggestion();

private:
    int currentPlayerIndex_;
    TurnPhase phase_;
    std::optional<Suggestion> currentSuggestion_;
};
