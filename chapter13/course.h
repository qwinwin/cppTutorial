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