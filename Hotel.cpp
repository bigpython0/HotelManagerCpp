#include <Hotel.h>

class Hotel {
    std::string name;
    int maxStaffNum = 3;
    int const maxRooms = 5;
    std::vector<Room> rooms;
public:
    Hotel(std::string n) : name(n){
        
    }
    std::vector<Room>& getRooms() {

    }
    const std::vector<Room>& getRooms() const {
        return rooms;
    }
    bool bookRoom(int roomNum, Date from, Date until, std::string name) {
        for (Room& room : rooms) {
            if(room.getRoomNum == roomNum) {
                room.setOccupied(Reservation())
            }
        }
    }

};
