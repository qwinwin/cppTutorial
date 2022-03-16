#ifndef SPECIALCHECKING
#define SPECIALCHECKING
#include "checking.h"
class SpecialChecking : public Checking
{
protected:
    REMIT remittance;

public:
    SpecialChecking(unsigned acntNo, float balan);
    void SetRemit(REMIT re) { remittance = re; }
    void Display() const;
};
#endif