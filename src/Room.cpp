#include "Room.h"

Room::Room(RoomName name)
    : id_(name), name_(toString(name)) {}

RoomName Room::getId() const {
    return id_;
}

const std::string& Room::getName() const {
    return name_;
}

const std::vector<RoomName>& Room::getAdjacentRooms() const {
    return adjacent_;
}

void Room::addAdjacent(RoomName room) {
    adjacent_.push_back(room);
}
