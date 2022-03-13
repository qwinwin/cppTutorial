#include <iostream>
using namespace std;
class Animal;

void SetValue(Animal &, int);
void SetValue(Animal &, int, int);

class Animal
{
protected:
    int itsWeight;
    int itsAge;

public:
    friend void SetValue(Animal &, int);
    friend void SetValue(Animal &, int, int);
};

void SetValue(Animal &ta, int tw)
{
    ta.itsWeight = tw;
}
void SetValue(Animal &ta, int tw, int tn)
{
    ta.itsWeight = tw;
    ta.itsAge = tn;
}

int main()
{
    Animal peppy;
    SetValue(peppy, 5);
    SetValue(peppy, 7, 9);
}