#pragma once

#include "Room.h"

#include <vector>

class Board {
public:
    Board();

    const std::vector<Room>& getRooms() const;
    Room* findRoom(RoomName name);
    const Room* findRoom(RoomName name) const;

private:
    void setupRooms();

    std::vector<Room> rooms_;
};
