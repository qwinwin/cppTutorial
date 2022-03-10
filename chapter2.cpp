#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void q1()
{
    int a = 42486;
    cout << oct << a << endl
         << hex << a << endl;
    unsigned int b = 42486;
    cout << oct << b << endl
         << hex << b << endl;
}
void q2()
{
    double pi = 3.1415926;
    double r1, r2;
    cin >> r1 >> r2;
    cout << setw(10) << pi << endl
         << setw(10) << r1 << endl
         << setw(10) << pi * pow(r1, 2) << endl
         << setw(10) << pi << endl
         << setw(10) << r2 << endl
         << setw(10) << pi * pow(r2, 2) << endl;
}
void q3()
{
    const double e = 2.718281828;
    cout << setprecision(10) << e << endl
         << fixed << setprecision(10) << e << endl
         << fixed << setprecision(8) << e << endl
         << scientific << e << endl;
}
void q4()
{
    const int stu_num = 500;
    cout << "\"How many students here?\"" << endl
         << "\"" << stu_num << "\"" << endl;
}
void q5()
{
    cout << "size of char" << setw(5) << sizeof(char) << "byte" << endl
         << "size of int " << setw(5) << sizeof(int) << "byte" << endl;
}
void q6()
{
    float a, b, c, s, area;
    cout << "please input 3 sides of one triangle:" << endl;
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "a=" << a << ",b=" << b << ",c=" << c << endl
         << "area of triangle is " << area << endl;
}
int add(int x, int y)
{
    cout << "In add(),received " << x << " and " << y << endl;
    cout << "and return " << x + y << endl;
    return x + y;
}
void q7()
{
    cout << "In main():\n";
    int a, b, c;
    cout << "Enter two numbers:\n";
    cin >> a >> b;
    cout << "\nCalling add():\n";
    c = add(a, b);
    cout << "\nBack in main():\n";
    cout << "c was set to " << c << endl;
    cout << "\nExiting...\n";
}
double area_of_cylinder(double radius, double height)
{
    double pi = 3.1415926;
    return pi * pow(radius, 2) * height;
}
void q8()
{
    double radius, height;
    cout << "Input radius and height of the cylinder:\n";
    cin >> radius >> height;
    cout << area_of_cylinder(radius, height) << endl;
}
int main()
{
    q8();
}