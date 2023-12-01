#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch(x)
    {
        case 1: 
            cout << "One" << endl;
            break;
        case 2: 
            cout << "Two" << endl;
            break;
        case 3: 
            cout << "Three" << endl;
            break;
        case 4: 
            cout << "Four" << endl;
            break;
        case 5: 
            cout << "Five" << endl;
            break;
        default: 
            cout << "Nothing Matches" << endl;
    }
    return 0;
}