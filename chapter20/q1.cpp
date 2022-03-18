#include <iostream>
using namespace std;

template <class T>
T myMin(T a, T b)
{
    return a < b ? a : b;
}

int main()
{
    cout << myMin(6, 4) << endl;
    cout << myMin(6.5, 4.2) << endl;
    cout << myMin('6', '4') << endl;
}