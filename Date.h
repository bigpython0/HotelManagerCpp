#ifndef DATE_H
#define DATE_H
#include <string>

class Date{
private:
    int day;
    int month;
    int year;

public:
    Date(std::string d);
    Date();

    void setDate(std::string d);
};

#endif