#include "Hotel.h"


Hotel::Hotel(std::string n) : name(n){};

const std::vector<Room>& Hotel::getRooms() const {
    return rooms;
}

bool Hotel::bookRoom(int roomNum, Date from, Date until, std::string name) {
    for (Room& room : rooms) {
        if(room.getRoomNum() == roomNum) {
            if(room.setOccupied(Reservation(from, until, name))) {
                return true;
            } else {
                return false;
            }
        }
    }
    return false;
}
