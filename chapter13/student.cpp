#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

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
