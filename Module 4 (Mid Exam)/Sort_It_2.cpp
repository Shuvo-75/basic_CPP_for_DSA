#include<bits/stdc++.h>
using namespace std;
int * sort_it(int n)
{
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p+n, greater<int>());
    return p;
    
}
int main()
{
    int n;
    cin >> n;
    int *p = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    
    return 0;
}