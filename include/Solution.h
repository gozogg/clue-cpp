#pragma once

#include "Card.h"
#include "Suggestion.h"

class Solution {
public:
    Solution(Card suspect, Card weapon, Card room);

    const Card& getSuspect() const;
    const Card& getWeapon() const;
    const Card& getRoom() const;

    bool matches(const Suggestion& suggestion) const;

private:
    Card suspect_;
    Card weapon_;
    Card room_;
};
