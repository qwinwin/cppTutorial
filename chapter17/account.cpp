#include <iostream>
#include "account.h"
using namespace std;

Account *Account::pFirst = 0;
Account *Account::pTail = 0;

Account::Account(unsigned acntNo, float balan = 0.0) : acntNumber(acntNo), balance(balan)
{
    if (pFirst == 0)
        pFirst = this;
    else
        pTail->pNext = this;
    pTail = this;
    pNext = 0;
}

void Account::Display() const
{
    cout << "Account number:" << acntNumber << " = " << balance << endl;
}

void Account::RemoveLink()
{
    for (Account *q, *p = Account::First(); p; p = q)
    {
        q = p->pNext;
        delete p;
    }
}