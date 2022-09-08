#include <iostream>
#include "time.h"
using namespace std;

int main(){
    Time t1(59, 59, 23);
    t1.print();
    
    t1.nextSecond();
    t1.print();

    t1.setHour(12);
    t1.setMinute(30);
    t1.setSecond(15);

    cout << "Hour: " << t1.getHour() << endl;
    cout << "Minute: " << t1.getMinute() << endl;
    cout << "Second: " << t1.getSecond() << endl;

    t1.print();

    cout << "\nPrinting t2" << endl;
    Time t2(12);
    t2.print();

    return 0;
}