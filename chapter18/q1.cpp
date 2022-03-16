#include <iostream>
using namespace std;
class Complex
{
private:
    double A;
    double B;

public:
    Complex(double a, double b) : A(a), B(b){};
    friend Complex operator+(Complex &a, Complex &b)
    {
        return Complex(a.A + b.A, a.B + b.B);
    }
    friend Complex operator+(double a, Complex &b)
    {
        return Complex(a + b.A, b.B);
    }
    friend Complex operator+(Complex &a, double b)
    {
        return b + a;
    }
};
int main()
{
    Complex a(2, 5), b(7, 8), c(0, 0);
    c = a + b;
    c = 4.1 + a;
    c = b + 5.6;
}