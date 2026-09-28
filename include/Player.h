#pragma once

#include "Card.h"

#include <string>
#include <vector>

class Player {
public:
    virtual ~Player() = default;

    explicit Player(std::string name);

    const std::string& getName() const;

    void addCard(const Card& card);
    const std::vector<Card>& getCards() const;

    bool hasCard(const std::string& cardName) const;

private:
    std::string name_;
    std::vector<Card> cards_;
};
