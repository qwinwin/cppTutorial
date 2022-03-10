#define MAXSIZE 30
class Student;
class Course
{
private:
    char name[MAXSIZE];
    int num_of_stu; // max:30
    Student *student[MAXSIZE];
    double credit;
    double score[MAXSIZE];

public:
    Course(const char *name);
    ~Course(){};
    char *_name() { return name; }
    double get_credit();
    void set_credit(double cre);
    void add_stu(Student *stu, double sc);
    double get_avg_score();
    double get_score(const char *name);
    double get_score(Student *stu);
    double sc(int n) { return score[n]; }
};
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
    int _numofc() { return num_of_courses; }
    void set_name(const char *name);
    double get_score(const char *course);
    double get_avg_score();
    void add_course(Course *c, double sc = 0);
};
