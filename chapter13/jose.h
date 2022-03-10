#ifndef JOSE
#define JOSE
class Jose
{
private:
    int numOfBoys;
    int beginPos;
    int interval;
    int numOfVictor;

public:
    Jose(int boys = 10, int begin = 1, int m = 3, int v = 1)
    {
        numOfBoys = boys;
        beginPos = begin;
        interval = m;
        numOfVictor = v;
    }
    ~Jose() {}
    void Initial();
    void GetWinner();
};
#endif