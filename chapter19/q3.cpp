#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

int main()
{
    int a;
    string str = "1 2 3 4 5 6 7 8 9";
    istringstream s(str);
    while (!s.eof())
    {
        s >> a;
        cout << a;
    }
    cout << endl;
}