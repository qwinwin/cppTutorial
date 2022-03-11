#include <iostream>
using namespace std;
class Samp
{
protected:
    int i;
    int j;

public:
    void Setij(int a, int b) { i = a, j = b; }
    ~Samp()
    {
        cout << "Destory.." << i << endl;
    };
    int GetMulti() { return i * j; }
};

int main()
{
    Samp *p;
    p = new Samp[10];
    if (!p)
    {
        cout << "Allocation error\n";
        return -1;
    }
    for (int j = 0; j < 10; j++)
    {
        p[j].Setij(j, j);
    }
    for (int k = 0; k < 10; k++)
    {
        cout << "Multi[" << k << "] is:"
             << p[k].GetMulti() << endl;
    }
    delete[] p;
}