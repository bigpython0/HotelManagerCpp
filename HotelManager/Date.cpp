#include <Date.h>
#include <string>

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