#include <iostream>
#include <cstring>
#include "q2.h"
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

Student::Student(const char *_name)
{
    strcpy(name, _name);
    num_of_courses = 0;
}
void Student::set_name(const char *name)
{
    strcpy(this->name, name);
}
double Student::get_score(const char *c)
{
    for (int i = 0; i < num_of_courses; i++)
    {
        if (strcmp(c, course[i]->_name()) == 0)
        {
            return course[i]->get_score(_name());
        }
    }
    return -1;
}
double Student::get_avg_score()
{
    double sum = 0;
    for (int i = 0; i < num_of_courses; i++)
    {
        sum += course[i]->get_score(this);
    }
    return sum / num_of_courses;
}

void Student::add_course(Course *c, double sc)
{
    course[num_of_courses++] = c;
    c->add_stu(this, sc);
}

int main()
{
    Course math("math");
    Student zs("ZhangSan");
    Student ls("LiSi");
    Course phy("physics");
    zs.add_course(&math, 3.1);
    ls.add_course(&math, 4.5);
    cout << math.get_avg_score() << endl;
    zs.add_course(&phy, 4);
    cout << zs.get_avg_score() << endl;
}