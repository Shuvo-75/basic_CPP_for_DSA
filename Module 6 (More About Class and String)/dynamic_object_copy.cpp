#include<bits/stdc++.h>
using namespace std;
class Persion
{
    public:
        string name;
        int age;
        Persion(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
};
int main()
{
    Persion* rakib = new Persion("Rakib Ahsan", 25);
    Persion* sakib = new Persion("Shakib Ahmed", 24);
    *rakib=*sakib;
    /* rakib->name = sakib->name; // sakib er name copy kore rakib er name e bosano hoyeche 
    rakib->age = sakib->age; */
    cout << rakib->name << " " << rakib->age << endl;
    return 0;
}