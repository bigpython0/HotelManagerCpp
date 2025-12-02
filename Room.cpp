#include <Room.h>
#include <Reservation.h>

class Room {
    bool isOccupied; //can currently only be reserved or not, so not multiple reservations for the future 
    int guestNumber;
    float cost;
    int roomNum;
    
    optional<Reservation> currentReservation;
    
    public:
        Room(int w, float x, int num ) : //, Reservation y
            isOccupied(false),
            guestNumber(w),
            cost(x),
            roomNum(num){}

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