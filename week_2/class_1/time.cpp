#include <iostream>
#include "time.h"

Time::Time(int s, int m, int h) : second(s), minute(m), hour(h) {

}

void Time::print() const {
    std::cout << hour << ":" << minute << ":" << second << std::endl;
}

void Time::nextSecond() {
    this->second++;

    if(this->second >= 60) {
        this->second = 0;
        this->minute++;
    }

    if(this->minute >= 60) {
        this->minute = 0;
        this->hour++;
    }

    if(this->hour >= 24)
        this->hour = 0;
}

//Getters
int Time::getSecond() const {
    return this->hour;
}

int Time::getMinute() const {
    return this->minute;
}

int Time::getHour() const {
    return this->hour;
}

//Setters
void Time::setSecond(int second) {
    this->second = second;
}

void Time::setMinute(int minute) {
    this->minute = minute;
}

void Time::setHour(int hour) {
    this->hour = hour;
}