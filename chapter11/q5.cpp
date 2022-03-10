#include <iostream>
#include "q5.h"
using namespace std;

void MyStack::put(int item)
{
    if (!L)
        L = new LNode;
    LNode *s = new LNode;
    s->data = item;
    s->next = L->next;
    L->next = s;
}

int MyStack::get()
{
    if (!L->next)
    {
        cout << "empty stack" << endl;
        return 0;
    }
    int top;
    LNode *s = L->next;
    top = s->data;
    L->next = s->next;
    delete s;
    return top;
}

void MyStack::print()
{
    LNode *p = L;
    cout << "Stack:";
    do
    {
        p = p->next;
        cout << p->data << " ";
    } while (p->next);
    cout << endl;
}

int main()
{
    MyStack sta;
    sta.put(12);
    sta.put(14);
    sta.put(16);
    sta.print();
    cout << sta.get() << endl;
    sta.print();
    cout << sta.get() << endl;
    sta.print();
}