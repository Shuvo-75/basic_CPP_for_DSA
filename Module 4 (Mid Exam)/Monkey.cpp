#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100001];
    
    while (cin.getline(a, 100001))
    {
        int len = strlen(a);
        sort(a, a+(strlen(a)));
        for (int i = 0; i < len+1; i++)
        {
            if (a[i]== ' ' )
            {
                continue;
            } else
            {
                if(a[i] != '\0')
                {
                    cout << a[i];
                }
            } 
        }
        cout << endl;
    }
    
    
    return 0;
}