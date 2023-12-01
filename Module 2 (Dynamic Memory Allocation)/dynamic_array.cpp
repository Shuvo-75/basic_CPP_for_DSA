#include<bits/stdc++.h>
using namespace std;
/* int * fun()
{
    int *a = new int;
    cout << "fun: " << a << endl;
    *a = 500;
    return a;
} */
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    
    
    return 0;
}