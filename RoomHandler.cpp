#include "RoomHandler.h"

class RoomHandler {
    std::vector<Room> rooms;
    public:
        RoomHandler(std::vector<Room> roomArray) :
            rooms(roomArray)
        {};

        RoomHandler() {};

        void setRooms(std::vector<Room>& roomArray) {
            rooms = roomArray;
        }

        Room* getRoomByNum(int num) {
            for(size_t i = 0; i<rooms.size(); i++) {
                if(rooms[i].getRoomNum() == num) {
                    return &rooms[i];
                }
            }

            return nullptr;
        }

        bool bookRoom(int num, Date from, Date until, std::string name) {
            Room* roomToBook = getRoomByNum(num);
            if (roomToBook != nullptr) {
            if(roomToBook->setOccupied(Reservation(from, until, name))) {
                return true;
            }
            }
        }
};