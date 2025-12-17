#include "Reservation.h"

class Reservation{
    Date reservedFrom;
    Date reservedUntil;
    std::string name;

    public:
    
    Reservation(Date from, Date until, std::string n) : reservedFrom(from), 
                reservedUntil(until), name(n)
}