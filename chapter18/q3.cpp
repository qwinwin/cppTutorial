#include <iostream>
#include <cmath>
using namespace std;
class RMB
{
private:
    unsigned int yuan;
    unsigned int jf;

public:
    RMB(unsigned int, unsigned int);
    RMB operator+(RMB &);
    RMB &operator++();
    void display() { cout << (yuan + jf / 100.0) << endl; }
    friend RMB operator*(const RMB &, double);
    friend RMB operator*(double, const RMB &);
};

RMB::RMB(unsigned int d, unsigned int c)
{
    yuan = d + c / 100;
    jf = c % 100;
}
RMB RMB::operator+(RMB &s)
{
    unsigned int c = jf + s.jf;
    unsigned int d = yuan + s.yuan + c / 100.0;
    c %= 100;
    return RMB(d, c);
}
RMB &RMB::operator++()
{
    if (++jf == 100)
    {
        jf = 0;
        yuan++;
    }
    return *this;
}
RMB operator*(const RMB &a, double d)
{
    unsigned int y, j;
    bool sign;
    if (d < 0)
    {
        cout << "Nagative numbers are not support\n";
        return a;
    }
    y = a.yuan * d + (a.jf * d) / 100.0;
    j = a.yuan * d < 1 ? fmod(a.jf * d, 100) + a.yuan * d * 100 : fmod(a.jf * d, 100);
    if (sign)
        y = -y;
    RMB r(y, j);
    return r;
}
RMB operator*(double d, const RMB &a)
{
    return a * d;
}

int main()
{
    RMB d1(1, 60);
    RMB d2(2, 50);
    RMB d3(0, 0);
    d3 = d1 + d2;
    ++d3;
    d3.display();
    d3 = d1 * 5;
    d3.display();
    d3 = 0.5 * d2;
    d3.display();
}