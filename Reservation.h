#ifndef RESERVATION_H
#define RESERVATION_H
#include <Date.h>

class Reservation{
private:
    Date reservedFrom;
    Date reservedUntil;
    std::string name;

public:
    Reservation(Date from, Date until, std::string n);
};

#endif