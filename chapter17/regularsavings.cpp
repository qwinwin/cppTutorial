#include <iostream>
#include <cmath>
#include "regularsavings.h"
#include "account.h"
using namespace std;

RegularSavings::RegularSavings(unsigned acntNo, float balan, int peri) : Savings(acntNo, balan), period(peri) {}

float RegularSavings::Interest()
{
    if (period == 1)
        return 0.05;
    else if (period == 3)
        return 0.08;
    else if (period == 5)
        return 0.1;
    return 0;
}

void RegularSavings::Withdrawal()
{
    float pastyears, interest;
    char option;
    cout << "Past time:";
    cin >> pastyears;
    if (pastyears < period)
    {
        interest = 0.01;
    }
    else
    {
        interest = Interest();
    }
    balance = balance * pow((1 + interest), pastyears);
    cout << "RegularSavings can only be taken out all at once.\ncontinue? 'y' or 'n':";
    cin >> option;
    if (option == 'n')
        return;
    cout << balance << " withdrawn\n";
    balance = 0;
}

void RegularSavings::Deposit(float a)
{
    cout << "RegularSavings does not support midway deposit\n";
    return;
}

void RegularSavings::Display() const
{
    cout << "RegularSavings ";
    Account::Display();
}
