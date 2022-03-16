#include <iostream>
#include "account.h"
#include "savings.h"
#include "checking.h"
using namespace std;
void create()
{
    int atype;
    cout << "No\tAccount Type\n"
         << "1\tSavings\n"
         << "2\tChecking\n"
         << "0\tExit..\n";
    while (1)
    {
        cout << "Select the account type:";
        cin >> atype;
        if (atype == 0)
            return;
        cout << "Input the accountNo and saving:" << endl;
        unsigned aN;
        float val;
        cin >> aN >> val;
        if (atype == 1)
            new Savings(aN, val);
        else if (atype == 2)
            new Checking(aN, val);
    }
}
int main()
{
    create();
    for (Account *p = Account::First(); p; p = p->Next())
    {
        p->Display();
    }
    Account::RemoveLink();
}