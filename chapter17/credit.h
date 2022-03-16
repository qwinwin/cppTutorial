#ifndef CREDIT
#define CREDIT
#include "savings.h"
class Credit : public Savings
{
protected:
    static float minbalance;
    int passwd;

public:
    Credit(unsigned acntNo, float balan);
    virtual void Withdrawal(float amount);
    virtual void Display() const;
    void SetPwd(int p) { passwd = p; }
};
#endif