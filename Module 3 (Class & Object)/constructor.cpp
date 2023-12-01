#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
        int roll;
        int cls;
        double GPA;
        Student (int r, int c, double g)
        {
            roll = r;
            cls = c;
            GPA = g; 
        }
};
int main()
{
    Student Shuvo(2307, 12, 4.15);
    return 0;
}