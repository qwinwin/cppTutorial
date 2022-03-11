#include <iostream>
using namespace std;
class X
{
private:
    int value;

public:
    X(int);
    X(X &);
    ~X();
};

X::X(int n = 0)
{
    value = n;
    cout << "Construct " << value << endl;
}

X::X(X &x)
{
    value = x.value;
    cout << "Construct a copy of " << value << endl;
}

X::~X()
{
    cout << "Destory " << value << endl;
}

X f(X i)
{
    cout << "Calling f(X)" << endl;
    X fun(i);
    return fun;
};
int main()
{
    X a(1);
    // X b = f(X(2));
    X s(2);
    X b;
    b = f(s);
    a = f(a);
}