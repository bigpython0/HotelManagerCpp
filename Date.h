#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream>

class Date{
private:
    int day;
    int month;
    int year;
    std::string date;

public:
    Date(std::string d);
    Date();

    bool setDate(std::string d);
};

#endif