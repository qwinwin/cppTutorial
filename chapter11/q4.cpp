#include <iostream>
#include <iomanip>
#include "q4.h"
using namespace std;

void Time::print_time()
{
    cout << setw(2) << setfill('0') << hour << ':'
         << setw(2) << setfill('0') << minute << ':'
         << setw(2) << setfill('0') << second << endl;
}

void Time::set_time(int hour, int minute, int second)
{
    if (hour < 0 || hour > 23 || minute < 0 || minute > 60 || second < 0 || second > 60)
    {
        cout << "invaild input\n";
        return;
    }
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

int main()
{
    Time t1, t2;
    t1.set_time(18, 12, 59);
    t2.set_time(2, 2, 0);
    t1.print_time();
    t2.print_time();
}