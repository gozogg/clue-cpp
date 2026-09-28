#include "Card.h"

#include <utility>

Card::Card(std::string name, CardType type)
    : name_(std::move(name)), type_(type) {}

const std::string& Card::getName() const {
    return name_;
}

CardType Card::getType() const {
    return type_;
}

std::string toString(CardType type) {
    switch (type) {
        case CardType::Character:
            return "Character";
        case CardType::Weapon:
            return "Weapon";
        case CardType::Room:
            return "Room";
    }
    return "Unknown";
}

std::string toString(Character character) {
    switch (character) {
        case Character::MissScarlet:
            return "Miss Scarlet";
        case Character::ColonelMustard:
            return "Colonel Mustard";
        case Character::MrsWhite:
            return "Mrs. White";
        case Character::MrGreen:
            return "Mr. Green";
        case Character::MrsPeacock:
            return "Mrs. Peacock";
        case Character::ProfessorPlum:
            return "Professor Plum";
    }
    return "Unknown";
}

std::string toString(Weapon weapon) {
    switch (weapon) {
        case Weapon::Candlestick:
            return "Candlestick";
        case Weapon::Knife:
            return "Knife";
        case Weapon::LeadPipe:
            return "Lead Pipe";
        case Weapon::Revolver:
            return "Revolver";
        case Weapon::Rope:
            return "Rope";
        case Weapon::Wrench:
            return "Wrench";
    }
    return "Unknown";
}

std::string toString(RoomName room) {
    switch (room) {
        case RoomName::Kitchen:
            return "Kitchen";
        case RoomName::Ballroom:
            return "Ballroom";
        case RoomName::Conservatory:
            return "Conservatory";
        case RoomName::DiningRoom:
            return "Dining Room";
        case RoomName::BilliardRoom:
            return "Billiard Room";
        case RoomName::Library:
            return "Library";
        case RoomName::Lounge:
            return "Lounge";
        case RoomName::Hall:
            return "Hall";
        case RoomName::Study:
            return "Study";
    }
    return "Unknown";
}

std::vector<Character> allCharacters() {
    return {
        Character::MissScarlet,
        Character::ColonelMustard,
        Character::MrsWhite,
        Character::MrGreen,
        Character::MrsPeacock,
        Character::ProfessorPlum
    };
}

std::vector<Weapon> allWeapons() {
    return {
        Weapon::Candlestick,
        Weapon::Knife,
        Weapon::LeadPipe,
        Weapon::Revolver,
        Weapon::Rope,
        Weapon::Wrench
    };
}

std::vector<RoomName> allRooms() {
    return {
        RoomName::Kitchen,
        RoomName::Ballroom,
        RoomName::Conservatory,
        RoomName::DiningRoom,
        RoomName::BilliardRoom,
        RoomName::Library,
        RoomName::Lounge,
        RoomName::Hall,
        RoomName::Study
    };
}

Card makeCard(Character character) {
    return Card(toString(character), CardType::Character);
}

Card makeCard(Weapon weapon) {
    return Card(toString(weapon), CardType::Weapon);
}

Card makeCard(RoomName room) {
    return Card(toString(room), CardType::Room);
}
