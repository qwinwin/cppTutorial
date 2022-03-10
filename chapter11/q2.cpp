#include <iostream>
#include "q2.h"
using namespace std;

int Cat::GetAge()
{
    return itsAge;
}

void Cat::SetAge(int age)
{
    itsAge = age;
}

void Cat::Meow()
{
    cout << "Meow.\n";
}

int main()
{
    Cat frisky;
    frisky.SetAge(5);
    frisky.Meow();
    cout << "frisky is a cat who is"
         << frisky.GetAge()
         << " years old.\n";
    frisky.Meow();
}