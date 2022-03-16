#include <iostream>
#include "credit.h"
#include "account.h"
using namespace std;

float Credit::minbalance = 5000;

Credit::Credit(unsigned acntNo, float balan) : Savings(acntNo, balan), passwd(123456) {}

void Credit::Withdrawal(float amount)
{
    int tmp;
    cout << "Input password:";
    cin >> tmp;
    if (tmp != passwd)
    {
        cout << "Error password!" << endl;
        return;
    }
    if (balance + minbalance < amount)
        cout << "Insufficient funds: balance " << balance << ",withdrawal " << amount << endl;
    else
        balance -= amount;
}

void Credit::Display() const
{
    cout << "Credit ";
    Account::Display();
}