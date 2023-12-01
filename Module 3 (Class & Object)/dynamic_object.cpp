#include<bits/stdc++.h>
using namespace std;
// class
class Student
{
    public:
        int id;
        int cls;
        double CGPA;
        // constructor
        Student (int id, int cls, double CGPA)
        {
            this->id = id;
            this->cls = cls;
            this->CGPA = CGPA;
        }
};
int main()
{
    // Student Shuvo(2307, 12, 4.99);
    Student * Shuvo = new Student(2307, 12, 4.99);
    cout << Shuvo->id << " " << Shuvo->cls << " " << Shuvo->CGPA << endl;
    return 0;
}