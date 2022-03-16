#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class RMB
{
private:
    unsigned int yuan;
    unsigned int jf;

public:
    RMB(double v = 0.0)
    {
        yuan = v;
        jf = (v - yuan) * 100.0 + 0.5;
    }
    operator double() { return yuan + jf / 100.0; }
    void display(ostream &out)
    {
        out << setw(10) << "￥" << yuan << '.' << setfill('0')
            << setw(2) << jf << setfill(' ');
    }
};
ostream &operator<<(ostream &os, RMB &r)
{
    r.display(os);
    return os;
}
int main()
{
    RMB rmb(1.5);
    cout << "Init rmb=" << rmb << endl;
    rmb = 2.0 * rmb;
    cout << "then rmb=" << rmb << endl;
}