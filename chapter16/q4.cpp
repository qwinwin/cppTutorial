#include <iostream>
using namespace std;
class Child;
class Father
{
protected: //变动：fix_tv()改为public
    void fix_tv() { cout << "fix tv\n"; }

public:
    friend void fun2(Father f, Child c);
    void drive() { cout << "drive\n"; }
};

class Mother
{
private:
    void sjob(int h) { cout << "do small jobs for " << h << " hours\n"; }
    friend void fun1(Mother m, int h);

public:
    void
    sing()
    {
        cout << "sing\n";
    }
};

class Child : public Father, public Mother
{
public:
    // using Father::fix_tv;
    void pingpong() { cout << "play pingpong\n"; }
    friend void fun2(Father f, Child c);
};

void fun1(Mother m, int h)
{
    m.sjob(h);
}
void fun2(Father f, Child c)
{
    f.fix_tv();
    c.fix_tv();
}

int main()
{
    Father f;
    Mother m;
    Child c;

    f.drive();
    m.sing();
    fun1(m, 2);
    c.pingpong();
    c.drive();
    c.sing();
    fun2(f, c);
}