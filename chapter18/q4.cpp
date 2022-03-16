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
    RMB &operator+=(const RMB &);
    RMB &operator+=(double);
    RMB &operator-=(const RMB &);
    RMB &operator-=(double);
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
    return RMB(y, j);
}
RMB operator*(double d, const RMB &a)
{
    return a * d;
}
RMB &RMB::operator+=(const RMB &a)
{
    int tmp = a.jf + jf;
    jf = tmp % 100;
    yuan = a.yuan + yuan + tmp / 100.0;
    return *this;
}
RMB &RMB::operator+=(double d)
{
    jf = ((int)(d * 100) % 100 + jf) % 100;
    yuan = yuan + (int)d + ((int)(d * 100) % 100 + jf) / 100;
    return *this;
}
RMB &RMB::operator-=(const RMB &a)
{
    int tmp = jf - a.jf;
    if (tmp < 0)
    {
        tmp += 100;
        yuan--;
    }
    jf = tmp;
    if (yuan < a.yuan)
    {
        cout << "Error:the minuend is less than the subtrahend\n";
        return *this;
    }
    yuan = yuan - a.yuan;
    return *this;
}
RMB &RMB::operator-=(double d)
{
    if (d < 0)
        return *this += abs(d);
    int tmp = jf - (int)(d * 100) % 100;
    if (tmp < 0)
    {
        tmp += 100;
        yuan--;
    }
    jf = tmp;
    if (yuan < (int)d)
    {
        cout << "Error:the minuend is less than the subtrahend\n";
        return *this;
    }
    yuan = yuan - (int)d;
    return *this;
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
    d3 += d2;
    d3.display();
    d3 += 5.2222;
    d3.display();
    d3 -= d1;
    d3.display();
    cout << "----star\n";
    d3 -= -2.11;
    d3.display();
}