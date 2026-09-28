#pragma once

#include "Card.h"

#include <string>
#include <vector>

class Room {
public:
    explicit Room(RoomName name);

    RoomName getId() const;
    const std::string& getName() const;
    const std::vector<RoomName>& getAdjacentRooms() const;

    void addAdjacent(RoomName room);

private:
    RoomName id_;
    std::string name_;
    std::vector<RoomName> adjacent_;
};
