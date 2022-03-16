#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for (char c = 'A'; c <= 'Z'; c++)
    {
        cout << c << " hex:" << setiosflags(ios::uppercase) << hex << c - 0 << endl;
    }
}