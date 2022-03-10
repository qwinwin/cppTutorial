#include <iostream>
#include <cstdlib>
#include "jose.h"
#include "ring.h"
using namespace std;
void Jose::Initial()
{
    int num, begin, m, v;
    cout << "input numOfBoys,beginPos,interval and victors:\n";
    cin >> num >> begin >> m >> v;
    //...校验输入合法性
    numOfBoys = num;
    beginPos = begin;
    interval = m;
    numOfVictor = v;
}
void Jose::GetWinner()
{
    Ring x(numOfBoys, beginPos);
    while (x.RemainNum() > numOfVictor)
    {
        x.Count(interval);
        x.ClearBoy();
    }
    x.Display();
}