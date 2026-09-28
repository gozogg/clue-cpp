#pragma once

#include "Card.h"
#include "Suggestion.h"

#include <string>

class DeductionEngine {
public:
    void recordOwnCard(const Card& card);
    void recordShownCard(const std::string& playerName, const Card& card);
    void recordCannotDisprove(const std::string& playerName, const Suggestion& suggestion);

    // TODO: add queries such as "which cards are still possible in the envelope?"
};
