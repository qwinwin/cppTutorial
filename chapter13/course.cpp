#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

Course::Course(const char *name) : credit(4), num_of_stu(0)
{
    strcpy(this->name, name);
}
void Course::set_credit(double cre)
{
    credit = cre;
}
double Course::get_credit()
{
    return credit;
}
void Course::add_stu(Student *stu, double sc)
{
    if (num_of_stu == 30)
    {
        cout << "Reach the max quota\n";
        return;
    }
    student[num_of_stu] = stu;
    score[num_of_stu++] = sc;
}
double Course::get_avg_score()
{
    double sum = 0;
    for (int i = 0; i < num_of_stu; i++)
    {
        sum += score[i];
    }
    return sum / num_of_stu;
}
double Course::get_score(const char *name)
{
    for (int i = 0; i < num_of_stu; i++)
    {
        if (strcmp(student[i]->_name(), name) == 0)
        {
            return score[i];
        }
        else
        {
            cout << "student not exsit\n";
            return -1;
        }
    }
    return -1;
}
double Course::get_score(Student *stu)
{
    for (int i = 0; i < num_of_stu; i++)
    {
        if (student[i] == stu)
            return score[i];
    }
    return -1;
}