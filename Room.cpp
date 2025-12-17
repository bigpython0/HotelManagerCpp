#include "Room.h"
#include "Reservation.h"

class Room {
    bool isOccupied; //can currently only be reserved or not, so not multiple reservations for the future 
    int guestNumber;
    float cost;
    int roomNum;
    
    std::optional<Reservation> currentReservation;
    
    public:
        Room(int w, float x, int num ) : //, Reservation y
            isOccupied(false),
            guestNumber(w),
            cost(x),
            roomNum(num){};
        
        static std::vector<Room> createDefaultRooms() {
            return {
                Room(2, 99.9f, 100),
                Room(2, 99.9f, 101),
                Room(4, 150.0f, 102)
            };
        }

        bool setOccupied(Reservation reservation){
            if(isOccupied == false) {
                currentReservation = reservation;
                isOccupied = true;
                return true;
            } 
            return false;
        };

        void setUnoccupied() {
            currentReservation.reset();
            isOccupied = false;
        }

        int getRoomNum(){
            return roomNum;
        }
};