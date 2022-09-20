#ifndef TIME_H
#define TIME_H

class Time {
    private:
        int second; //0-59
        int minute; //0-59
        int hour; //0-23
    public:
        Time(int second = 0, int minute = 0, int hour = 0);
        void print() const;
        void nextSecond();
        //Getters
        int getSecond() const;
        int getMinute() const;
        int getHour() const;
        //Setters
        void setSecond(int second);
        void setMinute(int minute);
        void setHour(int hour);
};

#endif