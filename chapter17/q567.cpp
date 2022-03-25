#include <iostream>
#include <iomanip>
#include "account.h"
#include "regularsavings.h"
#include "specialchecking.h"
#include "credit.h"
using namespace std;

void create()
{
    int atype;
    cout << "Create an Account\n"
         << "No\tAccount Type\n"
         << "1\tSavings\n"
         << "2\tChecking\n"
         << "3\tCredit\n"
         << "4\tRegularSavings\n"
         << "5\tSpecialChecking\n"
         << "0\tExit..\n";
    while (1)
    {
        cout << "Select the account type:";
        cin >> atype;
        if (atype == 0)
            return;
        cout << "Input the accountNo and saving:";
        unsigned aN;
        float val;
        cin >> aN >> val;
        if (atype == 1)
            new Savings(aN, val);
        else if (atype == 2)
            new Checking(aN, val);
        else if (atype == 3)
            new Credit(aN, val);
        else if (atype == 4)
        {
            int prei;
            cout << "regular duration:";
            cin >> prei;
            new RegularSavings(aN, val, prei);
        }
        else if (atype == 5)
            new SpecialChecking(aN, val);
    }
}
void withdrawal(unsigned aN, float amount)
{
    Account *p = Account::First();
    while (p)
    {
        if (p->AccountNo() == aN)
        {
            p->Withdrawal(amount);
            p->Display();
            return;
        }
        p = p->Next();
    }
    if (!p)
        cout << "Account doesn't exit!\n";
}

void deposit(unsigned aN, float amount)
{
    Account *p = Account::First();
    while (p)
    {
        if (p->AccountNo() == aN)
        {
            p->Deposit(amount);
            p->Display();
            return;
        }
        p = p->Next();
    }
    if (!p)
        cout << "Account doesn't exit!\n";
}

int main()
{
    unsigned aN;
    int option;
    float amount;
    create();
    cout << "--------ACCOUNT LIST----------" << endl;
    for (Account *p = Account::First(); p; p = p->Next())
    {
        p->Display();
    }
    cout << "------------------------------" << endl;
    while (true)
    {
        cout << "Input the account number:";
        cin >> aN;
        cout << "No\toption\n"
             << "1\tDeposit\n"
             << "2\tWithdrawal\n"
             << "0\tquit!\n"
             << "Select the option No:";
        cin >> option;
        if (option == 0)
            break;
        cout << "Input the amount:";
        cin >> amount;
        if (option == 1)
            deposit(aN, amount);
        else if (option == 2)
            withdrawal(aN, amount);
    }
    Account::RemoveLink();
}