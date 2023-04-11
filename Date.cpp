//
// Created by Owner on 12/04/2022.
//

#include "Date.h"


Date::Date(): Date(1,1,1) {}

Date::Date(int year, int month, int day):year(year), month(month), day(day) {}

bool Date::isAfter(Date anotherDate) const {
    return isAfter(anotherDate.year, anotherDate.month, anotherDate.day);
}

bool Date::isAfter(int aYear, int aMonth, int aDay) const {
    if (year > aYear) {
        return true;
    }
    if (year == aYear && month > aMonth) {
        return true;
    }
    if (year == aYear && month == aMonth && day > aDay) {
        return true;
    }

    return false;
}

int Date::currentYear() {
    time_t systime;
    struct tm * now;
    time (&systime);
    now = localtime (&systime);

    return now->tm_year;

}

int Date::currentMonth() {
    time_t systime;
    struct tm * now;
    time (&systime);
    now = localtime (&systime);

    return now->tm_mon;
}

int Date::currentDay() {
    time_t systime;
    struct tm * now;
    time (&systime);
    now = localtime (&systime);

    return now->tm_mday;
}