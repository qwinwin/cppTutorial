#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstring>
#define MAXSIZE 100
using namespace std;
int *findmax(int *array, int size, int *index)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            *index = i;
        }
    }
    return index;
}
void q1()
{
    int a[10] = {33, 91, 54, 67, 82, 37, 85, 63, 19, 68};
    int *maxaddr;
    int idx;
    maxaddr = findmax(a, sizeof(a) / sizeof(*a), &idx);
    cout << idx << ' ' << maxaddr << ' ' << a[idx] << endl;
}
// q2
void jose(int num = 10, int interval = 3)
{
    if (num < 1 || interval < 1 || interval > num)
    {
        cout << "invaild input\n";
        return;
    }
    int a[num];
    for (int i = 0; i < num; i++)
    {
        a[i] = i + 1;
    }
    for (int i = 0; i < num; i++)
    {
        cout << a[i] << ',';
    }
    cout << endl;
    int i = -1;
    for (int k = 1; 1; k++)
    {
        for (int j = 0; j < interval;)
        {
            i = (i + 1) % num;
            if (a[i])
                j++;
        }
        if (k == num)
            break;
        cout << a[i] << ',';
        a[i] = 0;
    }
    cout << endl
         << a[i] << " win\n";
}
int q3_1(const void *a, const void *b)
{
    return *(int *)a / 10 + *(int *)a % 10 > *(int *)b / 10 + *(int *)b % 10;
}
int q3_2(const void *a, const void *b)
{
    return *(double *)a - *(double *)b;
}
int q3_3(const void *a, const void *b)
{
    if (strlen(*(char **)a) == strlen(*(char **)b))
        return strcmp(*(char **)a, *(char **)b);
    else
        return strlen(*(char **)a) > strlen(*(char **)b);
}
void q3()
{
    int a[10] = {12, 32, 42, 51, 8, 16, 51, 21, 19, 9};
    double b[10] = {32.1, 456.87, 332.67, 442.0, 98.12, 451.79, 340.12, 54.55, 99.87, 72.5};
    char *c[] = {(char *)"enter", (char *)"number", (char *)"size", (char *)"begin", (char *)"of", (char *)"cat", (char *)"case", (char *)"program", (char *)"certain", (char *)"a"};
    qsort(a, 10, sizeof(a[0]), q3_1);
    for (int i = 0; i < 10; i++)
        cout << a[i] << ' ';
    cout << endl;
    qsort(b, 10, sizeof(b[0]), q3_2);
    for (int i = 0; i < 10; i++)
        cout << b[i] << ' ';
    cout << endl;
    qsort(c, 10, sizeof(c[0]), q3_3);
    for (int i = 0; i < 10; i++)
        cout << c[i] << ' ';
    cout << endl;
}
string encryption(string s)
{
    string e = "4962873";
    string es;
    for (int i = 0; i < s.length(); i++)
    {
        // cout << s[i] << ' ' << (int)s[i] << ' ' << e[i % 7] << endl;
        es.append(1, char(((int)s[i] + e[i % 7] - '0') % 123));
    }
    return es;
}
string decryption(string s)
{
    string e = "4962873";
    string de = "";
    for (int i = 0; i < s.length(); i++)
    {
        // cout << s[i] << ' ' << (int)s[i] << ' ' << e[i % 7] << ' ' << (int)s[i] - (e[i % 7] - '0') << ' ' << char((int)s[i] - (e[i % 7] - '0')) << endl;
        de.append(1, char((int)s[i] - (e[i % 7] - '0')));
    }
    return de;
}
//书中例子有误 'result'中的't'后为空格 例中(t)116+6后全都错了 取消103行注释编译运行查看正确过程
void q4()
{
    string ec = encryption("the result of 3 and 2 is not 8");
    cout << ec << endl;
    string de = decryption(ec);
    cout << de << endl;
}
int strcmp2(const char *str1, const char *str2)
{
    while (*str1 == *str2)
    {
        if (*str1 == '\0')
            return 0;
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
void q5()
{
    char c[] = "hello";
    char d[] = "hello";
    cout << strcmp2(c, d) << endl;
}
char *strcpy2(char *dest, const char *source)
{
    char *p = dest;
    while ((*p++ = *source++) != '\0')
        ;
    return dest;
}
void q6()
{
    char c1[MAXSIZE];
    char c2[] = "hasdfsdafas fafello";
    strcpy2(c1, c2);
    cout << c1 << endl;
}
// q7
// int main(int argc, char *argv[])
// {
//     int i = 0;
//     int result = strcmp2(argv[1], argv[2]);
//     if (result)
//         cout << "not equal" << endl;
//     else
//         cout << "equal" << endl;
//     return result;
// }
void transpose(int a[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j > i)
            {
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }
}
void q8()
{
    const int n = 5;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 65536;
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    transpose(a);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
}
void q9()
{
    int count = 0;
    int mem = sizeof(int[100]);
    while (new int[100])
    {
        count++;
    }
    // Debian11 运行会触发oom-killer 内核会在该进程把内存耗尽前杀掉 故下方cout无法执行
    cout << count * mem << endl;
}
int main()
{
    q1();
}