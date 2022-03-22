#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int fib(int x)
{
    if (x > 2)
    {
        return fib(x - 1) + fib(x - 2);
    }
    else
    {
        return 1;
    }
}
int gcd1(int a, int b) //最大公约数
{
    if (a % b == 0)
        return b;
    return gcd1(b, a % b);
}
// int sum = 0;
int njc(int n) // n阶乘
{
    for (int i = n - 1; i > 0; i--)
    {
        n *= i;
    }
    return n;
}
int njc2(int n)
{
    if (n == 1)
        return 1;
    else
        return n * njc2(n - 1);
}
// q1
bool isprime(long m)
{
    long i;
    double sqrtm = sqrt(m);
    for (i = 2; i <= sqrtm; i++)
    {
        if (m % i == 0)
            break;
    }
    if (sqrtm < i)
        return true;
    else
        return false;
}
// q2
double f(double x) { return exp(x) / (1 + x * x); }
double integral(double a, double b)
{
    int n = 1;
    double h, Tn, T2n, In, I2n;
    const double eps = 1e-8;
    h = b - a;
    T2n = I2n = h * (f(a) + f(b)) / 2;
    In = 0;
    while (abs(I2n - In) >= eps)
    {
        Tn = T2n;
        In = I2n;
        double sigma = 0.0;
        for (int k = 0; k < n; k++)
        {
            double x = a + (k + 0.5) * h;
            sigma += f(x);
        }
        T2n = (Tn + h * sigma) / 2.0;
        I2n = (4 * T2n - Tn) / 3.0;
        n *= 2;
        h /= 2;
    }
    return I2n;
}
// q3 见chapter4.cpp q9
// q4
int n = 1;
void func()
{
    static int x = 4;
    int y = 10;
    x += 2;
    n += 10;
    y += n;
    cout << "func: " << x << ' ' << y << ' ' << n << endl;
}
void q4()
{
    static int x = 5;
    int y = n;
    cout << "main(q4): " << x << ' ' << y << ' ' << n << endl;
    func();
    cout << "main(q4): " << x << ' ' << y << ' ' << n << endl;
    func();
}
// q5
int fib2(int n)
{
    int a = 1, b = 1, s = 1;
    for (int i = 3; i <= n; i++)
    {
        s = a + b;
        a = b;
        b = s;
    }
    return s;
}
// q6
double poly(int n, double x)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    return ((2 * n - 1) * x * poly(n - 1, x) - (n - 1) * poly(n - 2, x)) / n;
}
void q7()
{
    double x0, x1;
    x0 = 3.14159 / 4;
    x1 = x0 - (cos(x0) - x0) / (sin(x0) - 1);
    while (abs(x1 - x0) > 1e-6)
    {
        x0 = x1;
        x1 = x0 - (cos(x0) - x0) / (-sin(x0) - 1);
    }
    cout << setprecision(8) << x1 << endl;
}
// q8
void display(double) { cout << "A double\n"; };
void display(int) { cout << "A int\n"; };
void display(char) { cout << "A char\n"; };
void q8()
{
    display(1.0);
    display((float)1.0);
    display(1);
    display('1');
    display((short)1);
}
// q9
int q9(int n)
{
    if (n < 4)
        return 1;
    else
        return q9(n - 1) + q9(n - 3);
}
int main()
{
    int n;
    cin >> n;
    cout << q9(n) << endl;
}