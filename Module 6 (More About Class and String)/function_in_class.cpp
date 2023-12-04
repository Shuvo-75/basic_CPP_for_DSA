#include<bits/stdc++.h>
using namespace std;
class Persion
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Persion(string nm, int ag, int m1, int m2)
        {
            name = nm;
            age = ag;
            marks1 = m1;
            marks2 = m2;
        }
        void hello()
        {
            cout << name << " " << age << " " <<marks1 << " " << marks2 << endl;
        }
        int total_marks()
        {
            return marks1+marks2;
        }
};
int main()
{
    Persion rakib("Rakibul Hasan", 25, 95, 154);
    // cout << rakib.name << " " << rakib.age << endl;
    cout << rakib.total_marks() << endl;
    return 0;
}