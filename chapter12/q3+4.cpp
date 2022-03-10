#include <iostream>
#include <cstring>
#include "Employee.h"
using namespace std;

Name::Name(const char name[])
{
    strcpy(this->name, name);
}
void Name::Display()
{
    cout << name;
}

Employee::Employee(const char name[], const char addr[], const char city[], const char state[], const char zip[]) : fullname(name)
{
    strcpy(this->addr, addr);
    strcpy(this->city, city);
    strcpy(this->state, state);
    strcpy(this->zip, zip);
}
void Employee::ChangeName(const char name[])
{
    fullname = Name(name);
}
void Employee::Display()
{
    fullname.Display();
    cout << " address:" << addr
         << " city:" << city
         << " state:" << state
         << " zip:" << zip << endl;
}

int main()
{
    Employee a("Mark Brooks", "5 West St.", "Revere", "CA", "12290");
    a.Display();
    a.ChangeName("Richard Voss");
    a.Display();
}