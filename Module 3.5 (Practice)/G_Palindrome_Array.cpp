#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = n-1;
    int flag = 0;
    while (i<j)
    {
        if(a[i]!=a[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    
    if(flag != 0)
    {
        cout << "NO";
    } else
    {
        cout << "YES";
    }

    
    
    
    
    
    
    return 0;
}