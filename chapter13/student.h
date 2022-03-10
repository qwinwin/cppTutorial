#include "course.h"
class Student
{
private:
    char name[MAXSIZE];
    int num_of_courses;
    Course *course[5];

public:
    Student(const char *_name);
    ~Student(){};
    char *_name() { return name; }
    void set_name(const char *name);
    double get_score(const char *course);
    double get_avg_score();
    void add_course(Course *c, double sc = 0);
};