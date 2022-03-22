#include <iostream>
using namespace std;
extern int x;
void f(int);
int main()
{
    int i = 5;
    f(i);
    cout << x;
}