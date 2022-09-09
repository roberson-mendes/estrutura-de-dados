#include <iostream>
#include "time.h"

int main(){
    Time t1(59, 59, 23);
    t1.print();
    
    t1.nextSecond();
    t1.print();

    t1.setHour(12);
    t1.setMinute(30);
    t1.setSecond(15);

    std::cout << "Hour: \n" << t1.getHour();
    std::cout << "Minute: \n" << t1.getMinute();
    std::cout << "Second: \n" << t1.getSecond();

    t1.print();

    std::cout << "\nPrinting t2\n";
    Time t2(12);
    t2.print();

    return 0;
}