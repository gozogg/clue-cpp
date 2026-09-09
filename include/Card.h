#pragma once

#include <string>

enum class CardType {
    Character,
    Weapon,
    Room
};

class Card {
public:
    Card(std::string name, CardType type);

    const std::string& getName() const;
    CardType getType() const;

private:
    std::string name_;
    CardType type_;
};
