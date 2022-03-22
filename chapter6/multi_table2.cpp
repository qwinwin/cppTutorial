#include <iostream>
#include <iomanip>
using namespace std;
void multi_2()
{
    int m, n;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            m = i * j;
            if (!i && !j)
                cout << setw(4) << "*";
            else if (!i)
                cout << setw(4) << j;
            else if (j > i)
                cout << setw(4) << " ";
            else if (!i || !j)
            {
                n = (i > j) ? i : j;
                cout << setw(4) << n;
            }
            else
                cout << setw(4) << m;
        }
        cout << endl;
    }
}