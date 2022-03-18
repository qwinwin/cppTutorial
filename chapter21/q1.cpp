#include <iostream>
#include <cstring>
#include <exception>
using namespace std;

class String
{
    char *p;
    int len;
    static int max;

public:
    String(const char *, int);
    class Range
    {
    public:
        Range(int j) : index(j) {}
        int index;
    };
    class Size
    {
    };
    class Pastm
    {
    };
    int _len() { return len; }
    char &operator[](int k)
    {
        if (k < 0 || k >= len)
            throw Range(k);
        for (int i = 0; i < k; i++)
        {
            if (p[k] > 'm')
                throw Pastm();
        }
        return p[k];
    }
};
int String::max = 20;
String::String(const char *str, int si)
{
    if (si < 0 || si > max)
        throw Size();
    p = new char[si];
    strncpy(p, str, si);
    len = si;
}

void g(String &str)
{
    int num = str._len();
    for (int n = 0; n < num; n++)
        cout << str[n];
    cout << endl;
}
void f()
{
    try
    {
        String s("abcdefghijklmnop", 20);
        g(s);
    }
    catch (String::Range r)
    {
        cerr << "->out of range: " << r.index << endl;
    }
    catch (String::Size)
    {
        cerr << "size illegal!\n";
    }
    catch (String::Pastm)
    {
        cerr << "\tdetect a char past m!\n";
    }
    catch (bad_alloc &e)
    {
        cerr << "bad allocation using new operator.\n";
        exit(1);
    }
    cout << "The program will be continued here\n";
}

int main()
{
    f();
    cout << "These code is not effected by probably exception in f().\n";
}