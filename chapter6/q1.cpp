// (1) file3.cpp
// extern int x=2
// 带extern的变量说明是变量声明,不是变量定义。
// 已在file1.cpp定义 `int x = 1` 重复定义了
extern int x;
int g();

int main()
{
    x = g();
}

// (2)
// 1.重复定义x
// 2.无`main`函数入口
// 3.y类型不一致 (g++编译通过)
// 4.z声明了但无定义，没有文件为其分配内存空间,被调用时会出错 (g++编译通过)