#include <iostream>
using namespace std;
class Animal
{
protected:
    int itsWeight;
    int itsAge;

public:
    void SetValue(int);
    void SetValue(int, int);
    int _weight() { return itsWeight; }
    int _age() { return itsAge; }
};

void Animal::SetValue(int tw)
{
    itsWeight = tw;
}
void Animal::SetValue(int tw, int tn)
{
    itsWeight = tw;
    itsAge = tn;
}

int main()
{
    Animal peppy;
    peppy.SetValue(4);
    cout << peppy._weight() << endl;
    peppy.SetValue(7, 9);
    cout << peppy._weight() << " " << peppy._age() << endl;
}