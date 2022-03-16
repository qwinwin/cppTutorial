#ifndef SAVINGS
#define SAVINGS
#include "account.h"
class Savings : public Account
{
protected:
    static float minbalance;

public:
    Savings(unsigned acntNo, float balan);
    virtual void Withdrawal(float amount);
    virtual void Display() const;
};
#endif