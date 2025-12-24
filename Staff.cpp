#include "Staff.h"

Staff::Staff(std::string n, std::string p, Hotel& h) : name(n), password(p), hotel(h) {};

bool Staff::bookRoom(Hotel& hotel) {
    int roomNum;
    Date from;
    Date until;
    std::string tempString;
    
    
    std::cout << "Room number: ";
    std::cin >> roomNum;

    std::cout << "Please use Date format: DD.MM.YYYY";
    std::cout << "\nReservation from: ";
    std::cin >> tempString;
    if(from.setDate(tempString) == false) {
        return false;
    }

    std::cout << "\nReservation until: ";
    std::cin >> tempString;
    if(until.setDate(tempString)== false) {
        return false;
    }

    std::cout << "\n Name: ";
    std::cin >> tempString;

    if(hotel.bookRoom(roomNum, from, until, tempString)) {
        return true;
    } else {
        return false;
    }
}