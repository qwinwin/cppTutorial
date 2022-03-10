#include <iostream>
#include "q3.h"
using namespace std;

void Date::show_date()
{
    cout << day << "/"
         << month << "/"
         << year << endl;
}

void Date::add_date()
{
    day++;
}

void Date::set_date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}

int main()
{
    Date d;
    d.set_date(1990, 2, 1);
    d.show_date();
    d.add_date();
    d.show_date();
}