#include "Room.h"
#include "Reservation.h"


Room::Room(int w, float x, int num ) : //, Reservation y
    isOccupied(false),
    guestNumber(w),
    cost(x),
    roomNum(num){};

std::vector<Room> Room::createDefaultRooms() {
    return {
        Room(2, 99.9f, 100),
        Room(2, 99.9f, 101),
        Room(4, 150.0f, 102)
    };
}

bool Room::setOccupied(Reservation newReservation){
    if(isOccupied == false) {
        reservation = newReservation;
        isOccupied = true;
        return true;
    } 
    return false;
};

void Room::setUnoccupied() {
    reservation.reset();
    isOccupied = false;
}

int Room::getRoomNum(){
    return roomNum;
}