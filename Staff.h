#ifndef STAFF_H
#define STAFF_H

#include "Hotel.h"
#include <string>
#include <iostream>
#include "Reservation.h"

class Staff {
private:
    std::string name;
    std::string password;
    Hotel& hotel;

public:
    Staff(std::string n, std::string p, Hotel& h);
    bool bookRoom(Hotel& hotel);
};

#endif