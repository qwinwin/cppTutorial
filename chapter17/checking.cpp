#include <iostream>
#include "checking.h"
#include "account.h"
using namespace std;

Checking::Checking(unsigned acntNo, float balan = 0.0) : Account(acntNo, balan), remittance(other) {}

void Checking::Withdrawal(float amount)
{
    float tmp = amount;
    if (remittance == remitByPost)
        tmp = amount + 30;
    if (remittance == remitByCable)
        tmp = amount + 60;
    if (balance < tmp)
        cout << "Insufficient funds: balance " << balance << ",withdrawal " << tmp << endl;
    else
        balance -= tmp;
}

void Checking::Display() const
{
    cout << "Checking ";
    Account::Display();
}