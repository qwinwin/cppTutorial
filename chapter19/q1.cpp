#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int rows = 0;
    char c;
    ifstream f("tracker_list");
    while (f.get(c))
    {
        if (c == '\n')
        {
            rows++;
        }
    }
    cout << rows << endl;
}