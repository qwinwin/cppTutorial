#include <iostream>
#include <cstring>
using namespace std;

class Transportation
{
protected:
    char name[20];

public:
    Transportation()
    {
        strcpy(name, __func__);
        cout << "Constructing " << __func__ << endl;
    }
    void Start() { cout << "Start " << name << endl; }
    void Stop() { cout << "Stop " << name << endl; }
};
class Car : public Transportation
{
protected:
    char name[20];

public:
    Car() { cout << "Constructing " << __func__ << endl; }
};
class SCar : public Car
{
protected:
public:
    SCar() { cout << "Constructing " << __func__ << endl; }
};
class Truck : public Car
{
protected:
public:
    Truck() { cout << "Constructing " << __func__ << endl; }
};
class StationWagon : public Car
{
protected:
    char name[20];

public:
    StationWagon()
    {
        strcpy(name, __func__);
        cout << "Constructing " << __func__ << endl;
    }
    void Start() { cout << "Start " << name << endl; }
    void Stop() { cout << "Stop " << name << endl; }
};
class UtilityCar : public SCar
{
public:
    UtilityCar() { cout << "Constructing " << __func__ << endl; }
};

class JCar : public SCar
{
protected:
    char name[20];

public:
    JCar()
    {
        strcpy(name, __func__);
        cout << "Constructing " << __func__ << endl;
    }
    void Start() { cout << "Start " << name << endl; }
    void Stop() { cout << "Stop " << name << endl; }
};

class Van : public SCar
{
public:
    Van() { cout << "Constructing " << __func__ << endl; }
};

int main()
{
    StationWagon s;
    JCar j;
    s.Start();
    s.Stop();
    j.Start();
    j.Stop();
}