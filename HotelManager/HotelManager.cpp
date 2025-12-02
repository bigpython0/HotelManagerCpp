#include <iostream>
#include <vector>
#include <optional>
#include <string>

using namespace std;

class Hotel {
    string name;
    int maxStaffNum;
    int const maxRooms = 6;
    std::vector<Room> rooms; 
    RoomHandler roomHandler_;

    public:
        
        Hotel(string n) : name(n){
            for (int i = 0;i<maxRooms;i++) {
                int roomNumber = 100 + i;
                rooms.emplace_back(2, 75.0f, roomNumber);
            }
    
            roomHandler_.setRooms(rooms);
        };

        std::vector<Room>& getRooms() {
            return rooms;
        }

        const std::vector<Room>& getRooms() const { //for read only access
            return rooms;
        }

        bool bookRoom(int roomNum, Date from, Date until, string name) {
            roomHandler_.bookRoom(roomNum, from, until, name);
        }
};

class Date {
    int day;
    int month;
    int year;
    string date;

    public:
        Date(string d) : date(d){
            day = std::stoi(d.substr(0,2));
            month = std::stoi(d.substr(3,2));
            year = std::stoi(d.substr(6,4));
        }

        Date() {

        }

        void setDate(string d) {
            day = std::stoi(d.substr(0,2));
            month = std::stoi(d.substr(3,2));
            year = std::stoi(d.substr(6,4));
        }

        /*Date(int T, int M, int J) : Tag(T), Monat(M), Jahr(J){
            date = to_string(T) + "." + to_string(M) + "." +to_string(J);
        }*/
};

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

        

class Reservation {
    Date reservedFrom; 
    Date reservedUntil;
    string name;

    public:
        Reservation(Date from, Date until, string n) : reservedFrom(from), reservedUntil(until), name(n){}
};

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

class Staff {
    string name;
    string password;

    public:
        Staff(string n, string p) : name(n), password(p) {};

        bool bookRoom() {
            int roomNum;
            Date from;
            Date until;
            string tempString;
            
            
            cout << "Room number: ";
            cin >> roomNum;

            cout << "\nReservation from: ";
            cin >> tempString;
            from.setDate(tempString);

            cout << "\nReservation until: ";
            cin >> tempString;
            until.setDate(tempString);

            cout << "\n Name: ";
            cin >> tempString;

            handler.bookRoom(roomNum, from, until, tempString);
        }
};

class UserManager {

};

