#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    char c;
    string str = "1 2 3 4 5 6 7 8 9 ";
    istringstream s(str);
    while (s.get(c))
    {
        if (isdigit(c))
            cout << c;
    }
    cout << endl;
}