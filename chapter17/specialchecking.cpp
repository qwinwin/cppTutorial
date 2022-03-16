#include <iostream>
#include "specialchecking.h"
#include "account.h"
using namespace std;

SpecialChecking::SpecialChecking(unsigned acntNo, float balan = 0.0) : Checking(acntNo, balan), remittance(other) {}

void SpecialChecking::Display() const
{
    cout << "SpecialChecking ";
    Account::Display();
}