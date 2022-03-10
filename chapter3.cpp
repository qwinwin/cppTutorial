#include <iostream>
#include <cmath>
#define pi 3.1415926
using namespace std;
void q1()
{
    double x, a, c;
    x = a = c = 1;
    double n1 = sqrt(pow(sin(x), 2.5));
    double n2 = 0.5 * (a * x + (a + x) / 4 * a);
    double n3 = pow(c, pow(x, 2)) / sqrt(2 * pi);
    cout << n1 << endl
         << n2 << endl
         << n3 << endl;
}
void q2()
{
    int e = 1, f = 4, g = 2;
    float m = 10.5, n = 4.0, k;
    k = (e + f) / g + sqrt((double)n) * 1.2 / g + m;
    cout << k << endl;
    float x = 2.5, y = 4.7;
    int a = 7, b;
    cout << x + a % 3 * (int)(x + y) % 2 / 4 << endl;
    a = 2, b = 5, a++, b++;
    cout << a << ' ' << b << ' ' << a + b << endl;
}
void q3()
{
    int a1, a2;
    int i = 5, j = 7, k = 0;
    a1 = !k;
    a2 = i != j;
    cout << a1 << '\t' << a2 << endl;
    int x, y, z;
    x = 1, y = 1, z = 1;
    x = x || y && z;
    cout << x << ',' << (x && !y || z) << endl;
    int a, b, c, s, w, t;
    s = w = t = 0, a = -1, b = 3, c = 3;
    if (c > 0)
        s = a + b; // s=2
    if (a <= 0)    // satisfied
    {
        if (b > 0)
            if (c <= 0)
                w = a - b;
    }
    else if (c > 0) // will not execute
        w = a - b;
    else // will not execute
        t = c;
    cout << s << ',' << w << ',' << t << endl;
}
void q3_4()
{
    int a, b, c, d, x;
    a = c = 0, b = 1, d = 20;
    if (a)
        d = d - 10;
    else if (!b)
        if (!c)
            x = 15;
        else
            x = 25;
    cout << d << endl;
}
void q4()
{
    double x, y;
    cin >> x;
    if (x > 2 && x <= 10)
        y = x * (x + 2);
    else if (x > -1 && x <= 2)
        y = 2 * x;
    else if (x <= -1)
        y = x - 1;
    else
    {
        cout << "Err input" << endl;
        return;
    }
    cout << "y=" << y << endl;
}
void q5()
{
    int x;
    cin >> x;
    if (x % 3 == 0)
        cout << '3' << ' ';
    if (x % 5 == 0)
        cout << '5' << ' ';
    if (x % 7 == 0)
        cout << '7';
    if ((x % 3 != 0) && (x % 5 != 0) && (x % 7 != 0))
        cout << "Not devisible by 3, 5 or 7\n";
}
void q6()
{
    int x;
    cin >> x;
    if (x >= 90 && x <= 100)
        cout << "A\n";
    else if (x >= 80 && x <= 89)
        cout << "B\n";
    else if (x >= 70 && x <= 79)
        cout << "C\n";
    else if (x >= 60 && x <= 69)
        cout << "D\n";
    else if (x >= 0 && x < 60)
        cout << "E\n";
    else
    {
        cout << "Err input.\n";
        return;
    }
}
int main()
{
    q6();
}