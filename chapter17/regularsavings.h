#ifndef REGULARSAVINGS
#define REGULARSAVINGS
#include "savings.h"
class RegularSavings : public Savings
{
protected:
    int period;

public:
    RegularSavings(unsigned acntNo, float balan, int peri);
    virtual void Withdrawal();
    virtual void Withdrawal(float a) { Withdrawal(); }
    virtual void Display() const;
    virtual void Deposit(float a);
    float Interest();
};
#endif