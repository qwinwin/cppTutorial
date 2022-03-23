#include <iostream>
#include <iomanip>
#include <cmath>
#include <unistd.h>
using namespace std;
void q1()
{
    int a[10] = {34, 91, 83, 56, 29, 83, 56, 12, 88, 78};
    int min = a[0], n = 0;
    for (int i = 1; i < sizeof(a) / sizeof(int); i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            n = i;
        }
    }
    cout << "minimum is a[" << n << "]:" << min << endl;
}
double q2sort(double a[], int n, double ins)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
    int j = n - 1;
    while (ins < a[j])
    {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = ins;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
    return a[n];
}
void q2()
{
    double x;
    cin >> x;
    double a[7] = {1, 2, 3, 4, 6, 7, 8};
    cout << q2sort(a, 7, x) << endl;
}
void q3() // jose
{
    const int n = 17;
    int a[n];
    int left = n, k = 0, p = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    while (left > 1)
    {
        if (a[p % n]) //小孩还在圈中，非0
        {
            k++;            //报数+1
            if (k % 3 == 0) // 3的倍数
            {
                a[p % n] = 0; //小孩退场 编号设为0
                cout << p % n + 1 << " out\n";
                left--;
            }
        }
        p++; //指向下个小孩
    }
    for (int i = 0; i < n; i++)
        if (a[i])
            cout << a[i] << endl;
}
void bubble_sort(int a[], int n) // q4
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            return;
    }
}
void q5()
{
    int n, sum = 0;
    cout << "Enter n:";
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "]:";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                sum += a[i][j];
            if (i + j == n - 1)
                sum += a[i][j];
        }
    }
    cout << sum << endl;
}
void q6_1(int a[5][5])
{
    int max = 0;
    int num, cour;
    for (int i = 0; i < 5; i++)
        for (int j = 1; j < 5; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
                num = i;
                cour = j;
            }
        }
    cout << "max:" << max << " stu_num:"
         << a[num][0] << " course_num:" << cour << endl;
}
void q6_2(int a[5][5])
{
    for (int i = 0; i < 5; i++)
        for (int j = 1; j < 5; j++)
        {
            if (a[i][j] < 60)
            {
                cout << "Number:" << a[i][0] << endl;
                for (int j = 1; j < 5; j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
                break;
            }
        }
}
void q6_3(int a[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        double avg = 0;
        for (int j = 1; j < 5; j++)
        {
            avg += a[i][j];
        }
        avg /= 4;
        cout << "Number:" << a[i][0] << " avg:" << avg << endl;
    }
}
void q6()
{
    int a[5][5] = {
        {1, 61, 73, 87, 88},
        {2, 74, 53, 65, 56},
        {3, 78, 93, 79, 95},
        {4, 31, 52, 77, 45},
        {5, 75, 69, 94, 65},
    };
    q6_1(a);
    q6_2(a);
    q6_3(a);
}
void q7()
{
    int a[3][3] = {{5, 7, 8},
                   {2, -2, 4},
                   {1, 1, 1}};
    int b[3][3] = {{4, -2, 3},
                   {3, 9, 4},
                   {8, -1, 2}};
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << "  ";
        }
        cout << endl;
    }
}
int main()
{
    q7();
}