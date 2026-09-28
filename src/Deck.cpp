#include "Deck.h"

#include <algorithm>
#include <random>
#include <stdexcept>

Deck::Deck() {
    for (Character character : allCharacters()) {
        cards_.push_back(makeCard(character));
    }

    for (Weapon weapon : allWeapons()) {
        cards_.push_back(makeCard(weapon));
    }

    for (RoomName room : allRooms()) {
        cards_.push_back(makeCard(room));
    }
}

void Deck::shuffle() {
    static std::mt19937 rng{std::random_device{}()};
    std::shuffle(cards_.begin(), cards_.end(), rng);
}

Card Deck::draw() {
    if (cards_.empty()) {
        throw std::runtime_error("Cannot draw from an empty deck");
    }

    Card card = cards_.back();
    cards_.pop_back();
    return card;
}

bool Deck::empty() const {
    return cards_.empty();
}

std::size_t Deck::size() const {
    return cards_.size();
}

const std::vector<Card>& Deck::getCards() const {
    return cards_;
}
