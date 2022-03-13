#include <iostream>
using namespace std;

class Car
{
protected:
    int size;

public:
    Car(int j) { size = j; }
    int get() { return size; }
};
class Boat
{
protected:
    int size;

public:
    Boat(int j) { size = j; }
    int get() { return size; }
};

int Leisure(int time, Car &aobj, Boat &bobj)
{
    return time * aobj.get() * bobj.get();
}

int main()
{
    Car c1(2);
    Boat b1(3);
    int time = 4;
    cout << Leisure(time, c1, b1) << endl;
}