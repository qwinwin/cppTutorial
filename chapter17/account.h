#ifndef ACCOUNT
#define ACCOUNT
class Account
{
protected:
    static Account *pFirst;
    static Account *pTail;
    Account *pNext;
    unsigned acntNumber;
    float balance;

public:
    Account(unsigned acntNo, float balan);
    static Account *First() { return pFirst; }
    Account *Next() { return pNext; }
    static void RemoveLink();
    unsigned AccountNo() { return acntNumber; }
    float AcntBalan() { return balance; }
    virtual void Deposit(float amount) { balance += amount; }
    virtual void Display() const;
    virtual void Withdrawal(float amount) = 0;
};
#endif