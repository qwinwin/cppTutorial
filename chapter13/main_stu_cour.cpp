#include <iostream>
#include "student.h"
using namespace std;
int main()
{
    Course math("math");
    Student zs("ZhangSan");
    Student ls("LiSi");
    Course phy("physics");
    zs.add_course(&math, 3.1);
    ls.add_course(&math, 4.5);
    cout << math._name() << " avg score:" << math.get_avg_score() << endl;
    zs.add_course(&phy, 4);
    cout << zs._name() << " avg score:" << zs.get_avg_score() << endl;
}