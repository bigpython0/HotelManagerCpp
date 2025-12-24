#include "RoomHandler.h"


RoomHandler::RoomHandler(std::vector<Room> roomArray) :
    rooms(roomArray)
{};

RoomHandler::RoomHandler() {};

void RoomHandler::setRooms(std::vector<Room>& roomArray) {
    rooms = roomArray;
}

Room* RoomHandler::getRoomByNum(int num) {
    for(size_t i = 0; i<rooms.size(); i++) {
        if(rooms[i].getRoomNum() == num) {
            return &rooms[i];
        }
    }

    return nullptr;
}

bool RoomHandler::bookRoom(int num, Date from, Date until, std::string name) {
    Room* roomToBook = getRoomByNum(num);
    if (roomToBook != nullptr) {
        if(roomToBook->setOccupied(Reservation(from, until, name))) {
            return true;
        } else {
            return false;
        }
    }else {
        return false;
    }
}
