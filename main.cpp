#include "Hotel.h"
#include "Room.h"
#include "Reservation.h"
#include "RoomHandler.h"
#include "Staff.h"

int main() {
    Hotel hotel("Bond");
    Staff staff1("Robin", "1234", hotel);

    staff1.bookRoom(hotel);
    
};