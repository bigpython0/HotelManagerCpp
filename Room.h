#ifndef ROOM_H
#define ROOM_H

#include <optional>
#include <Reservation.h>
#include <vector>


class Room {
private:
    bool isOccupied;
    int guestNumber;
    float cost;
    int roomNum;
    std::optional<Reservation> reservation;

public:
    Room(int w, float x, int num);
    static std::vector<Room> createDefaultRooms();
    bool setOccupied(Reservation reservation);
    void setUnoccupied();
    int getRoomNum();
};

#endif