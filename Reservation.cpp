#include "Reservation.h"


    
Reservation::Reservation(Date from, Date until, std::string n) : reservedFrom(from), 
            reservedUntil(until), name(n){};
