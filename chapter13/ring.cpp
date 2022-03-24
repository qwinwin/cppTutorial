#include <iostream>
#include <iomanip>
#include "ring.h"
using namespace std;
Ring::Ring(int n, int beg) // number of boys ,begin position
{
    pBegin = new Boy[n];
    pCurrent = pBegin;
    for (int i = 1; i <= n; i++)
    {
        pBegin[i - 1].next = &pBegin[i % n]; //构建环
        pBegin[i - 1].code = i;
        pCurrent = pCurrent->next;
    }
    remain_num = n;
    // pCurrent 指向环中将要报数的前一个孩子
    pCurrent = &pBegin[(n + beg - 2) % n]; //书中未取余，`beg>2`时会导致数组溢出
}
void Ring::Count(int m)
{
    for (int i = 1; i <= m; i++)
    {
        pivot = pCurrent;
        pCurrent = pCurrent->next;
    }
}
void Ring::ClearBoy()
{
    cout << pCurrent->code << " out\n";
    pivot->next = pCurrent->next;
    remain_num--;
}
int Ring::RemainNum()
{
    return remain_num;
}
void Ring::Display()
{
    Boy *p = pivot;
    int i = 0;
    while (i++ < remain_num)
    {
        cout << "victor:" << p->code << endl;
        p = p->next;
    }
}