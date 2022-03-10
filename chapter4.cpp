#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void cal_pi()
{
    double pi = 0, x = 1, k = 1;
    int sign = 1;
    while (abs(x) > 1e-8)
    {
        pi += x;
        k += 2;
        sign *= -1;
        x = sign / k;
    }
    pi *= 4;
    cout << setprecision(8) << pi << endl;
}
void cal_prime()
{
    long x, i;
    cin >> x;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            break;
    }
    if (i == x)
        cout << x << " is prime\n";
    else
        cout << x << " is not prime\n";
}
void q1()
{
    double x, s = 0, k = 1;
    long n = 0, j = 1;
    cin >> x;
    while (abs(k) > 1e-8)
    {
        s += k;
        n++;
        j *= n;
        k = pow(-1, n + 1) * pow(x, n) / j;
    }
    cout << setprecision(8) << s << endl;
}
void q2()
{
    int s = 0, x = 1, k = 1;
    while (x <= 12)
    {
        s += k;
        x++;
        k *= x;
    }
    cout << s << endl;
}
void q3()
{
    int i, j, k, s;
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            for (k = 0; k <= 9; k++)
            {
                s = 100 * i + 10 * j + k;
                if (s == pow(i, 3) + pow(j, 3) + pow(k, 3))
                    cout << s << endl;
            }
        }
    }
}
void q4()
{
    int i, j, s;
    for (i = 2; i <= 1000; i++)
    {
        s = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
                s += j;
        }
        if (s == i)
            cout << i << endl;
    }
}
void q5()
{
    double s = 0, i = 100;
    int n = 1;
    while (n <= 10)
    {
        if (n == 1)
            s += i;
        else
            s += (2 * i);
        i /= 2;
        n++;
    }
    cout << s << endl
         << i << endl;
}
void q6()
{
    int s = 1;
    for (int i = 0; i < 9; i++)
    {
        s = 2 * s + 1;
    }
    cout << s << endl;
}
void q7()
{
    double a, x0, x1;
    cin >> a;
    x0 = a;
    x1 = 0.5 * (x0 + a / x0);
    while (abs(x1 - x0) > 1e-7)
    {
        x0 = x1;
        x1 = 0.5 * (x0 + a / x0);
    }
    cout << x1 << endl;
}
void q8()
{
    int i;
    int row = 15;
    for (int i = 0; i < row; i++)
    {
        for (int j = 2 * (row - 1); j > 2 * i; j--)
        {
            cout << ' ';
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << "# ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = row; i > 7; i--)
    {
        for (int j = row; j > i; j--)
        {
            cout << ' ';
        }
        for (int k = i; k > 0; k--)
        {
            cout << "# ";
        }
        cout << endl;
    }
}
void q9()
{
    int m, n;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            m = i * j;
            if (!i && !j)
                cout << setw(4) << "*";
            else if (!i || !j)
            {
                n = (i > j) ? i : j;
                cout << setw(4) << n;
            }
            else
                cout << setw(4) << m;
        }
        cout << endl;
    }
}
void q10()
{
    int n, a = 1, b = 1, c = 1, s = 0;
    cin >> n;
    if (n < 4)
        cout << 1 << endl;

    else
    {
        for (int i = 4; i <= n; i++)
        {
            s = a + c;
            a = b;
            b = c;
            c = s;
        }
        cout << s << endl;
    }
}
int main()
{
    q9();
}