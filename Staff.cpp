#include <Staff.h>


class Staff {
    std::string name;
    std::string password;
    Hotel& hotel;

    public:
        Staff(std::string n, std::string p, Hotel& h) : name(n), password(p), hotel(h) {};

        bool bookRoom() {
            int roomNum;
            Date from;
            Date until;
            std::string tempString;
            
            
            std::cout << "Room number: ";
            std::cin >> roomNum;

            std::cout << "\nReservation from: ";
            std::cin >> tempString;
            from.setDate(tempString);

            std::cout << "\nReservation until: ";
            std::cin >> tempString;
            until.setDate(tempString);

            std::cout << "\n Name: ";
            std::cin >> tempString;

            hotel.bookRoom(roomNum, from, until, tempString);
        }
};