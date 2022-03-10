#define MAXSIZE 30
class Name
{
public:
    Name(const char name[]);
    void Display();

protected:
    char name[MAXSIZE];
};

class Employee
{
public:
    Employee(const char name[], const char addr[], const char city[], const char state[], const char zip[]);
    ~Employee(){};
    void ChangeName(const char name[]);
    void Display();

protected:
    Name fullname;
    char addr[MAXSIZE];
    char city[MAXSIZE];
    char state[MAXSIZE];
    char zip[MAXSIZE];
};