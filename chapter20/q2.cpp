#include <iostream>
using namespace std;
const int SIZE = 100;

template <class T>
class Stack
{
private:
    T stack[SIZE];
    int tos;

public:
    Stack() : tos(-1) {}
    ~Stack(){};
    int _tos() { return tos; }
    void Push(T);
    T Pop();
};

template <class T>
void Stack<T>::Push(T n)
{
    if (tos == SIZE)
    {
        cout << "Full stack!\n";
        return;
    }
    stack[++tos] = n;
}
template <class T>
T Stack<T>::Pop()
{
    if (tos == -1)
    {
        cout << "Empty stack!\n";
        exit(1);
    }
    return stack[tos--];
}

void intStack()
{
    Stack<int> s1;
    for (int i = 0; i < 10; i++)
    {
        s1.Push(i);
    }
    while (s1._tos() != -1)
    {
        cout << s1.Pop() << endl;
    }
}
void charStack()
{
    Stack<char> s1;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        s1.Push(i);
    }
    while (s1._tos() != -1)
    {
        cout << s1.Pop() << endl;
    }
}
void floatStack()
{
    Stack<float> s1;
    for (int i = 0; i < 10; i++)
    {
        s1.Push(i + 0.3);
    }
    while (s1._tos() != -1)
    {
        cout << s1.Pop() << endl;
    }
}

int main()
{
    intStack();
    charStack();
    floatStack();
}