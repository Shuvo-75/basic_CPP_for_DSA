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
// function 
Student * fun() // where Student data type 
{
    Student* Shuvo =new Student(2307, 12, 4.99); 
    return Shuvo;
}
int main()
{
    Student *ans = fun();

    cout << ans->id << " " << ans->cls << " " << ans->CGPA << endl;
    delete ans;
    cout << ans->id << " " << ans->cls << " " << ans->CGPA << endl;
    return 0;
}