#include <iostream>
#include <iomanip>
#include <cmath>
#include <unistd.h>
#include <cstring>
#define MAXSIZE 100
using namespace std;

typedef struct IntLNode
{
    int data;
    IntLNode *next;
} IntLNode;
typedef struct
{
    double mid;
    double final;
} Stu;
typedef struct LNode
{
    char data[MAXSIZE];
    LNode *next;
} LNode;
void q1()
{
    Stu stu1;
    cin >> stu1.mid >> stu1.final;
    cout << (stu1.mid + stu1.final) / 2 << endl;
}
void create_list_rear(LNode *&C, const char *data[MAXSIZE], int num)
{
    C = new LNode;
    C->next = NULL;
    LNode *r = C;
    for (int i = 0; i < num; i++)
    {
        LNode *s = new LNode;
        strcpy(s->data, data[i]);
        r->next = s;
        r = r->next;
    }
    r->next = NULL;
}
void create_list_rear_int(IntLNode *&C, int data[], int num)
{
    C = new IntLNode;
    C->next = NULL;
    IntLNode *r = C;
    for (int i = 0; i < num; i++)
    {
        IntLNode *s = new IntLNode;
        s->data = data[i];
        r->next = s;
        r = r->next;
    }
    r->next = NULL;
}
void print_chain(LNode *L)
{
    if (L->next == NULL)
        printf("empty");
    while (L->next)
    {
        L = L->next;
        cout << L->data << ' ';
    }
    printf("\n");
}
void ins_chain(LNode *L)
{
    LNode *p = L;
    bool flag = false;
    while (p->next)
    {
        if (!strcmp(p->data, "jone"))
        {
            LNode *s = new LNode;
            strcpy(s->data, "marit");
            s->next = p->next;
            p->next = s;
            flag = true;
        }
        p = p->next;
    }
    if (!flag)
    {
        LNode *s = new LNode;
        strcpy(s->data, "marit");
        s->next = p->next;
        p->next = s;
    }
}
void q2()
{
    // const char *data[MAXSIZE] = {"hello", "world", "sike", "helodf"};
    const char *data[MAXSIZE] = {"hello", "world", "jone", "helodf"};
    LNode *C;
    create_list_rear(C, data, 4);
    print_chain(C);
    ins_chain(C);
    print_chain(C);
}
void q3(LNode *L) //头插法
{
    LNode *p = L->next;
    LNode *s;
    L->next = NULL;
    while (p)
    {
        s = p;
        p = p->next;
        s->next = L->next;
        L->next = s;
    }
}
// q4
//(1)ShowList见print_chain, AddToEnd 即尾插 create_list_rear
//(2)尾插 输出：3 5 7 6 4 8
//(3)
void DeleteList(LNode *L)
{
    if (L)
    {
        DeleteList(L->next);
        delete L;
    }
}
//归并
void merge_chain(IntLNode *a, IntLNode *b, IntLNode *&c)
{
    IntLNode *p = a->next;
    IntLNode *q = b->next;
    c = new IntLNode;
    c->next = NULL;
    IntLNode *r = c;
    while (p && q)
    {
        if (p->data < q->data)
        {
            r->next = p;
            r = r->next;
            p = p->next;
        }
        else
        {
            r->next = q;
            r = r->next;
            q = q->next;
        }
    }
    r->next = NULL;
    if (p)
        r->next = p;
    if (q)
        r->next = q;
}
void q5()
{
    int a[5] = {1, 2, 3, 14, 15};
    int b[5] = {4, 5, 11, 12, 13};
    IntLNode *T1, *T2, *C;
    create_list_rear_int(T1, a, 5);
    create_list_rear_int(T2, b, 5);
    merge_chain(T1, T2, C);
    do
    {
        C = C->next;
        cout << C->data << ' ';
    } while (C->next);
}

typedef struct Student
{
    long num;
    char name[MAXSIZE];
    char gender[MAXSIZE];
    int age;
    Student *next;
} Student;
void q6()
{
    Student *head = new Student;
    head->num = 0;
    while (1)
    {
        Student *s = new Student;
        cout << "num:";
        cin >> s->num;
        if (s->num > 0)
        {
            cout << "name gender and age:";
            cin >> s->name >> s->gender >> s->age;
            Student *p = head;
            Student *pre = p;
            while (p && p->num < s->num)
            {
                pre = p;
                p = p->next;
            }
            s->next = p;
            pre->next = s;
        }
        else
            break;
    }
    Student *p = head;
    do
    {
        p = p->next;
        cout << p->num << ' ' << p->name << ' '
             << p->gender << ' ' << p->age << endl;
    } while (p->next);
}
int main()
{

    q6();
}