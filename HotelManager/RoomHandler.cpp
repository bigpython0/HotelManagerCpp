class RoomHandler {
    vector<Room> rooms;
    public:
        RoomHandler(vector<Room> roomArray) :
            rooms(roomArray)
        {};

        RoomHandler() {};

        void setRooms(vector<Room>& roomArray) {
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

        bool bookRoom(int num, Date from, Date until, string name) {
            Room* roomToBook = getRoomByNum(num);
            if (roomToBook != nullptr) {
            if(roomToBook->setOccupied(Reservation(from, until, name))) {
                return true;
            }
            }
        }
};