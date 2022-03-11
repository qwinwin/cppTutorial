#include <iostream>
using namespace std;
class Vector
{
protected:
    int size;
    int *buffer;

public:
    Vector(int s = 100);
    Vector(Vector &v);
    int &Elem(int ndx);
    void Display();
    void Set();
    ~Vector();
};
Vector::Vector(int s)
{
    buffer = new int[size = s];
    for (int i = 0; i < size; i++)
    {
        buffer[i] = i * i;
    }
}
//---------------------------------------
Vector::Vector(Vector &v)
{
    size = v.size;
    buffer = new int[size];
    for (int i = 0; i < size; i++)
    {
        buffer[i] = v.buffer[i];
    }
}
//---------------------------------------
int &Vector::Elem(int ndx)
{
    if (ndx < 0 || ndx > size)
    {
        cout << "error in index\n";
        exit(1);
    }
    return buffer[ndx];
}
void Vector::Display()
{
    for (int i = 0; i < size; i++)
    {
        cout << Elem(i) << endl;
    }
}
void Vector::Set()
{
    for (int i = 0; i < size; i++)
    {
        Elem(i) = i + 1;
    }
}
Vector::~Vector()
{
    delete[] buffer;
}

int main()
{
    Vector a(10);
    Vector b(a);
    a.Set();
    b.Display();
}