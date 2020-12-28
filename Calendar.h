//
// Created by kostas on 24/12/20.
//

#ifndef CALENDAR_CALENDAR_H
#define CALENDAR_CALENDAR_H
#include <string>
#include <ostream>
#include <vector>
#include <ctime>
enum Days{
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};
class Calendar{
public:
    Calendar():month(1),year(1900){}
    Calendar(int month, int year):month(month),year(year){}
    friend std::ostream &operator<<(std::ostream &os, const Calendar &calendar);
    void set(int month, int year);
private:
    int year;
    int month;
};

#endif //CALENDAR_CALENDAR_H
