#include<bits/stdc++.h>
using namespace std;
namespace Shuvo
{
    int age = 24;
    void hello()
    {
        cout << "Shuvo namespaces" << endl;
    }
}
namespace Rakib
{
    int age2 = 25;
    void hello()
    {
        cout << "Rakib namespaces" << endl;
    }
}
using namespace Shuvo;
int main()
{
    cout << age << endl;
    cout << Rakib::age2 << endl;
    hello();
    Rakib::hello();
    return 0;
}