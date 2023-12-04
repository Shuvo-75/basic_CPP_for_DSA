#include<bits/stdc++.h>
using namespace std;
class Persion
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Persion(string name, int age, int marks1, int marks2)
        {
            this->name = name;
            this->age = age;
            this->marks1 = marks1;
            this->marks2 = marks2;
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