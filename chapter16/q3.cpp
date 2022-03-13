#include <iostream>
using namespace std;
class A
{
protected:
    int pA;

public:
    A() : pA(0){};
    int GetpA() { return pA; }
    void SetpA(int x) { pA = x; }
};
class B : virtual public A
{
public:
    void OnB() { cout << "OnB\n"; }
};
class C : virtual public A, public B
{
public:
    void Se() { cout << "Se\n"; }
};

int main()
{
    C c;
    cout << c.GetpA() << endl;
    c.SetpA(6);
    cout << c.GetpA() << endl;
}