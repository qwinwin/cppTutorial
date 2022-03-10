#ifndef RING
#define RING
typedef struct Boy
{
    int code;
    Boy *next;
} Boy;
class Ring
{
private:
    Boy *pBegin;
    Boy *pivot; //当前结点的前一个结点(pre)
    Boy *pCurrent;
    int remain_num;

public:
    Ring(int n, int beg);
    ~Ring(){};
    void Count(int m);
    void ClearBoy();
    int RemainNum();
    void Display();
};
#endif