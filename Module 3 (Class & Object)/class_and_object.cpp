#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        double CGPA;
};
int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.CGPA;
    getchar(); // remove last character
    cin.getline(b.name, 100);
    cin >> b.roll >> b.CGPA;

    cout << a.name << " " << a.roll << " " << a.CGPA << " " << endl;
    cout << b.name << " " << b.roll << " " << b.CGPA << " " << endl;
    return 0;
}