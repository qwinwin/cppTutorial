#include <iostream>
#include <exception>
using namespace std;

class A
{
private:
    int n;

public:
    A()
    {
        n = new int;
        init();
    }
};

int main()
{
}

// 编译不通过不知道咋进行异常处理 异常编译器已抛出
// q2.cpp: In constructor ‘A::A()’:
// q2.cpp:13:13: error: invalid conversion from ‘int*’ to ‘int’ [-fpermissive]
//    13 |         n = new int;
//       |             ^~~~~~~
//       |             |
//       |             int*
// q2.cpp:14:9: error: ‘init’ was not declared in this scope; did you mean ‘int’?
//    14 |         init();
//       |         ^~~~
//       |         int