#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include <Room.h>
#include <Date.h>

class Hotel {
private:
    std::string name;
    int maxStaffNum;
    int const maxRooms;
    std::vector<Room> rooms;
public:
    Hotel(std::string n);
    std::vector<Room>& getRooms();
    const std::vector<Room>& getRooms() const;
    bool bookRoom(int roomNum, Date from, Date until, std::string name);

};

#endif