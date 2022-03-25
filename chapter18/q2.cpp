#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
private:
    int second;
    int minute;
    int hour;

public:
    Time(int h = 0, int m = 0, int s = 0)
        : hour(h), minute(m), second(s) {}
    Time operator+(Time &a);
    Time operator-(Time &a);
    void set();
    void display();
};

Time Time::operator+(Time &a)
{
    int s, m, h;
    s = (a.second + second) % 60;
    m = (a.minute + minute + (a.second + second) / 60) % 60;
    h = (a.hour + hour + (a.minute + minute + (a.second + second) / 60) / 60) % 24;
    return Time(h, m, s);
}
Time Time::operator-(Time &a)
{
    int s, m, h;
    s = second - a.second;
    m = minute - a.minute;
    h = hour - a.hour;
    if (s < 0)
    {
        s += 60;
        m -= 1;
    }
    if (m < 0)
    {
        m += 60;
        h -= 1;
    }
    if (h < 0)
    {
        h += 24;
    }
    return Time(h, m, s);
}

void Time::set()
{
    int s, m, h;
    cout << "Input hour minute and second:\n";
    cin >> h >> m >> s;
    if (hour > 24 || hour < 0 || minute > 60 || minute < 0 || second > 60 || second < 0)
    {
        cout << "Invaild input\n";
        return;
    }
    second = s;
    minute = m;
    hour = h;
}
void Time::display()
{
    cout << setw(2) << setfill('0') << hour << ':'
         << setw(2) << setfill('0') << minute << ':'
         << setw(2) << setfill('0') << second << endl;
}

int main()
{
    Time a(14, 25, 30), b(22, 18, 42);
    a.display();
    b.display();
    Time c = a - b;
    c.display();
    c.set();
    c.display();
}