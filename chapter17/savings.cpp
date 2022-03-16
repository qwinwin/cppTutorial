#include <iostream>
#include "savings.h"
#include "account.h"
using namespace std;

float Savings::minbalance = 500;

Savings::Savings(unsigned acntNo, float balan) : Account(acntNo, balan) {}

void Savings::Withdrawal(float amount)
{
    if (balance + minbalance < amount)
        cout << "Insufficient funds: balance " << balance << ",withdrawal " << amount << endl;
    else
        balance -= amount;
}

void Savings::Display() const
{
    cout << "Savings ";
    Account::Display();
}