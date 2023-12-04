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
        void hello()
        {
            cout << "Hello" << endl;
        }
};
int main()
{
    Persion shuvo("Rakibul Hasan", 25);
    cout << shuvo.name << " " << shuvo.age << endl;
    return 0;
}