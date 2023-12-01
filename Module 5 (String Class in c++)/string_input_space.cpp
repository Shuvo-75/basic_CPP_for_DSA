#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore(); // onk somoy kichu compiler kaj kore na 
    // getchar();
    string s;
    // cin >> s; // cin space soho input nithe pare na;
    getline(cin, s);
    /*
        getline (cin , s);
        where ==> getline (cin , string_name)
    */
    string a;
    getline(cin, a);
    cout << x << endl;
    cout << s << endl;
    cout << a << endl;
    cout << "size of s string ==> " << s.size() << endl;
    cout << "size of a string ==> " << a.size() << endl;
    return 0;
}