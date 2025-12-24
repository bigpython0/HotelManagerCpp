#include "Date.h"
#include <string>


Date::Date(std::string d) : date(d){
    day = std::stoi(d.substr(0,2));
    month = std::stoi(d.substr(3,2));
    year = std::stoi(d.substr(6,4));
}

Date::Date() {

}

bool Date::setDate(std::string d) {
    if(d[1]=='.' || d[3] == '.' || d[4] == '.') {
        std::cout << "Wrong format";
        return false;
    }
    day = std::stoi(d.substr(0,2));
    month = std::stoi(d.substr(3,2));
    year = std::stoi(d.substr(6,4));
    return true;
}