#ifndef CHECKING
#define CHECKING
#include "account.h"
enum REMIT
{
    remitByPost,
    remitByCable,
    other
};
class Checking : public Account
{
protected:
    REMIT remittance;

public:
    Checking(unsigned acntNo, float balan);
    void Withdrawal(float amount);
    void SetRemit(REMIT re) { remittance = re; }
    void Display() const;
};
#endif