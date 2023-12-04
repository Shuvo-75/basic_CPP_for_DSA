#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s[0] << endl; // easy way for first
    cout << s.at(0) << endl; 
    cout << s[s.size() - 1] << endl;
    cout << s.back() << endl; // easy way for last 
    cout << s.front() << endl;
    return 0;
} 