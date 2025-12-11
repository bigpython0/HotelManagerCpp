#ifndef ROOMHANDLER_H
#define ROOMHANDLER_H

#include <Room.h>
#include <vector>


class RoomHandler {
private:
    std::vector<Room> rooms;
public:
    RoomHandler(std::vector<Room> roomArray);
    RoomHandler();
    void setRooms(std::vector<Room>& roomArray);
    Room* getRoomByNum(int num);
    bool bookRoom(int num, Date from, Date until, std::string name);

};

#endif