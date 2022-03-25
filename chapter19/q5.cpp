#include <iostream>
#define MAXSIZE 100
using namespace std;
class Person
{
protected:
    char name[MAXSIZE];
    char company[MAXSIZE];
    char phone[MAXSIZE];
    char address[MAXSIZE];
    char homePhone[MAXSIZE];

public:
    Person() {}
    char *Name() { return name; }
    char *Company() { return company; }
    char *Phone() { return phone; }
    char *Address() { return address; }
    char *HomePhone() { return homePhone; }
    void Set()
    {
        cout << "Input name company phone address homephone:" << endl;
        cin >> name >> company >> phone >> address >> homePhone;
    }
    void Display()
    {
        cout << "Name:" << name
             << "\tCompany:" << company
             << "\tPhone:" << phone
             << "\tAddress:" << address
             << "\tHomePhone:" << homePhone << endl;
    }
};
typedef struct Contacts
{
    Person person;
    Contacts *next;
} Contacts;

int main()
{
    Contacts *head = new Contacts;
    head->next = NULL;
    Contacts *tail = head;
    while (true)
    {
        cout << "Adding Contacts\n";
        Contacts *s = new Contacts;
        s->person.Set();
        tail->next = s;
        tail = s;
        cout << "added successfully! continue? 'y' or 'n':";
        char tmp;
        cin >> tmp;
        if (tmp == 'n')
            break;
    }
    Contacts *p = head->next;
    while (p)
    {
        p->person.Display();
        p = p->next;
    }
}