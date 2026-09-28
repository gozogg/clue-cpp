#include "Solution.h"

#include <utility>

Solution::Solution(Card suspect, Card weapon, Card room)
    : suspect_(std::move(suspect)), weapon_(std::move(weapon)), room_(std::move(room)) {}

const Card& Solution::getSuspect() const {
    return suspect_;
}

const Card& Solution::getWeapon() const {
    return weapon_;
}

const Card& Solution::getRoom() const {
    return room_;
}

bool Solution::matches(const Suggestion& suggestion) const {
    return suggestion.suspect.getName() == suspect_.getName() &&
           suggestion.weapon.getName() == weapon_.getName() &&
           suggestion.room.getName() == room_.getName();
}
