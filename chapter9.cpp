#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int findmax(int *a, int size, int &n)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            n = i;
        }
    }
    return n;
}
void q1()
{
    const int size = 10;
    int a[size];
    int n = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    findmax(a, size, n);
    cout << "max is a[" << n << "]:" << a[n] << endl;
}

// q2
int vals[10];
int error = -1;
int &put(int n)
{
    if (n < 0 || n > 9)
    {
        cout << "range error in put() value!" << endl;
        return error;
    }
    return vals[n];
}
int get(int n)
{
    if (n < 0 || n > 9)
    {
        cout << "range error in get() value!" << endl;
        return error;
    }
    return vals[n];
}
void q2()
{
    put(0) = 10;
    put(1) = 20;
    put(9) = 30;

    cout << get(0) << endl;
    cout << get(1) << endl;
    cout << get(9) << endl;

    put(12) = 1;
}

void swap2(const char *&a, const char *&b)
{
    const char *temp = *&a;
    a = *&b;
    b = *&temp;
}
void q3()
{
    const char *ap = "hello";
    const char *bp = "how are you?";
    swap2(ap, bp);
    cout << ap << endl;
    cout << bp << endl;
}
int main()
{
    q3();
}