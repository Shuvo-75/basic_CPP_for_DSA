#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    cin >> x;
    // ternary operator (if else er alternative)
    (x%2==0)? cout<< "Even" << endl : cout << "Odd" << endl ;

    // if else statement 
    if (x%2==0)
    {
        cout << "The number is even" << endl;
    } else
    {
        cout << "The number is odd" << endl;
    }
    

    // if else like c programming 
    /* if (x==10)
    {
        cout << "It is ten out of ten\n";
    } else
    {
        cout << "This is not ten";
    } */
    
}