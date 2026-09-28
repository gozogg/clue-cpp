#pragma once

#include <string>
#include <vector>

enum class CardType {
    Character,
    Weapon,
    Room
};

enum class Character {
    MissScarlet,
    ColonelMustard,
    MrsWhite,
    MrGreen,
    MrsPeacock,
    ProfessorPlum
};

enum class Weapon {
    Candlestick,
    Knife,
    LeadPipe,
    Revolver,
    Rope,
    Wrench
};

enum class RoomName {
    Kitchen,
    Ballroom,
    Conservatory,
    DiningRoom,
    BilliardRoom,
    Library,
    Lounge,
    Hall,
    Study
};

std::string toString(CardType type);
std::string toString(Character character);
std::string toString(Weapon weapon);
std::string toString(RoomName room);

std::vector<Character> allCharacters();
std::vector<Weapon> allWeapons();
std::vector<RoomName> allRooms();

class Card {
public:
    Card(std::string name, CardType type);

    const std::string& getName() const;
    CardType getType() const;

private:
    std::string name_;
    CardType type_;
};

Card makeCard(Character character);
Card makeCard(Weapon weapon);
Card makeCard(RoomName room);
