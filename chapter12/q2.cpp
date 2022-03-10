#include <iostream>
#include <cstring>
#define MAXSIZE 30
using namespace std;

class Employee
{
public:
    Employee(const char name[], const char addr[], const char city[], const char state[], const char zip[]);
    ~Employee(){};
    void ChangeName(const char *name);
    void Display();

protected:
    char name[MAXSIZE];
    char addr[MAXSIZE];
    char city[MAXSIZE];
    char state[MAXSIZE];
    char zip[MAXSIZE];
};

Employee::Employee(const char name[], const char addr[], const char city[], const char state[], const char zip[])
{
    strcpy(this->name, name);
    strcpy(this->addr, addr);
    strcpy(this->city, city);
    strcpy(this->state, state);
    strcpy(this->zip, zip);
}

void Employee::ChangeName(const char name[])
{
    strcpy(this->name, name);
}
void Employee::Display()
{
    cout << " name:" << name
         << " address:" << addr
         << " city:" << city
         << " state:" << state
         << " zip:" << zip << endl;
}

int main()
{
    Employee a("Mike", "nineth street", "oregen", "portland", "8557");
    a.Display();
    a.ChangeName("Jane");
    a.Display();
}