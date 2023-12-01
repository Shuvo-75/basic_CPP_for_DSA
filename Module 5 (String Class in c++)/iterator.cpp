#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // string:: iterator it;
    cin >> s;
    // cout << *s.begin() << endl;
    // cout << *s.end() << endl;

    /* for(string:: iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    } */
    
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    
    return 0;
}