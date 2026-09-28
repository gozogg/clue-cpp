#include "DeductionEngine.h"

void DeductionEngine::recordOwnCard(const Card& /*card*/) {
    // TODO: mark this card as owned by the local player
}

void DeductionEngine::recordShownCard(const std::string& /*playerName*/, const Card& /*card*/) {
    // TODO: mark this card as belonging to playerName
}

void DeductionEngine::recordCannotDisprove(const std::string& /*playerName*/,
                                           const Suggestion& /*suggestion*/) {
    // TODO: record that playerName has none of the suggested cards
}
