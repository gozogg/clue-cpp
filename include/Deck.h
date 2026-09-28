#pragma once

#include "Card.h"

#include <cstddef>
#include <vector>

class Deck {
public:
    Deck();

    void shuffle();
    Card draw();

    bool empty() const;
    std::size_t size() const;
    const std::vector<Card>& getCards() const;

private:
    std::vector<Card> cards_;
};
