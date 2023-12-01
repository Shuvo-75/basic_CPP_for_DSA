#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
        int roll;
        int cls;
        double GPA;
        Student (int roll, int cls, double GPA)
        {
            (*this).roll = roll;
            (*this).cls = cls;
            (*this).GPA = GPA;

            /* 
            // it's another way (shorcut)
            this->roll = roll;
            this->cls = cls;
            this->GPA = GPA; 
            */
        }
};
int main()
{
    Student Shuvo(2307, 12, 4.15);
    cout << Shuvo.roll << " " << Shuvo.cls << " " << Shuvo.GPA << endl;
    return 0;
}