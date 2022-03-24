#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Point
{
public:
    void Set(double ix, double iy)
    {
        x = ix;
        y = iy;
    }
    double xOffset()
    {
        return x;
    }
    double yOffset()
    {
        return y;
    }
    double angle()
    {
        return (180 / 3.14159) * atan2(y, x);
    }
    double radius()
    {
        return sqrt(x * x + y * y);
    }

protected:
    double x;
    double y;
};//1.类定义少分号

int main()
{
    Point p;
    double x, y;
    cin >> x >> y;
    p.Set(x, y);
    //2.protected 数据成员不能从外部直接访问或修改
    cout << p.angle() << " "
         << p.radius() << " "
         << p.xOffset() << " "
         << p.yOffset() << endl;
}