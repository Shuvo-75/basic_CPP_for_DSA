#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    char s[n];
    cin >> s;
    sort(s, s+n);
    cout << s << endl;
    return 0;
}