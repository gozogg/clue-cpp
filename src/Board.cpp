#include "Board.h"

Board::Board() {
    setupRooms();
}

void Board::setupRooms() {
    for (RoomName name : allRooms()) {
        rooms_.emplace_back(name);
    }

    // TODO: connect rooms with hallways / secret passages
    // Classic secret passages:
    // Kitchen <-> Study
    // Lounge <-> Conservatory
}

const std::vector<Room>& Board::getRooms() const {
    return rooms_;
}

Room* Board::findRoom(RoomName name) {
    for (Room& room : rooms_) {
        if (room.getId() == name) {
            return &room;
        }
    }
    return nullptr;
}

const Room* Board::findRoom(RoomName name) const {
    for (const Room& room : rooms_) {
        if (room.getId() == name) {
            return &room;
        }
    }
    return nullptr;
}
