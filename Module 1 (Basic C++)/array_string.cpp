#include<iostream>
#include<string.h>
#include <string>
using namespace std;
int main()
{
    char s[100];
    int a;
    cin >> a;
    getchar();
    // fgets(s, 100, stdin);
    cin.getline(s, 100);
    cout << a << endl;
    cout << s << endl;

    // int n;
    // cin >> n;
    
    /* int ar[n];
    //array input;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << endl;
    } */
        
    return 0;
}