//
// Created by kostas on 24/12/20.
//
#include <boost/date_time/gregorian/gregorian.hpp>
#include "Calendar.h"

using namespace boost::gregorian;

std::ostream &operator<<(std::ostream &os, const Calendar &calendar) {
    os << calendar.month << "/" << calendar.year << std::endl;
    int eom_day = gregorian_calendar::end_of_month_day(calendar.year, calendar.month);
    date endOfMonth(calendar.year, calendar.month, eom_day);
    std::string WeekDays[] = {"Sun", "Mon","Tue", "Wed", "Thu","Fri","Sat"};
    for(auto &it:WeekDays){
        os << std::setw(10) << it;
    }


    day_iterator ditr(date(calendar.year, calendar.month, 1));
    os << std::endl;
    for (; ditr <= endOfMonth; ++ditr){
        greg_weekday dayOfWeek = ditr->day_of_week();
        if (dayOfWeek.as_number() == 0){
            os << std::endl;
        }
        os << std::setw(10) << ditr->day();
    }
    return os;
}


void Calendar::set(int month, int year) {
    Calendar::month = month;
    Calendar::year = year;
}

