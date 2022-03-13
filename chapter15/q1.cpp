#include <iostream>
using namespace std;
class Q1
{
protected:
    static int number;
    char name[10];

public:
    Q1(const char *);
    ~Q1();
    static int num() { return number; }
};

Q1::Q1(const char *name = "no name")
{
    number++;
    cout << "Construct " << name
         << "\tnumber:" << number << endl;
}

Q1::~Q1()
{
    number--;
    cout << "Destory\t\tnumber:" << number << endl;
}
int Q1::number = 0;

int main()
{
    Q1 a("mike");
    cout << Q1::num() << endl;
    Q1 b("jane");
    cout << Q1::num() << endl;
    Q1 c("sara");
    cout << Q1::num() << endl;
}