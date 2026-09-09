#include "Card.h"

Card::Card(std::string name, CardType type)
    : name_(std::move(name)), type_(type) {}

const std::string& Card::getName() const {
    return name_;
}

CardType Card::getType() const {
    return type_;
}
