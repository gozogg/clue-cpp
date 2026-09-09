#include "Player.h"

#include <utility>

Player::Player(std::string name)
    : name_(std::move(name)) {}

const std::string& Player::getName() const {
    return name_;
}

void Player::addCard(const Card& card) {
    cards_.push_back(card);
}

const std::vector<Card>& Player::getCards() const {
    return cards_;
}

bool Player::hasCard(const std::string& cardName) const {
    for (const Card& card : cards_) {
        if (card.getName() == cardName) {
            return true;
        }
    }

    return false;
}
