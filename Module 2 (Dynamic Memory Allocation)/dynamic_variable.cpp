#include<bits/stdc++.h>
using namespace std;
int * fun()
{
    int *a = new int;
    cout << "fun: " << a << endl;
    *a = 500;
    return a;
}
int main()
{
    int *p = fun();
    cout << "main: " << p << endl;
    // int x = 10;
    int *a = new int;
    *a = 10;
    cout << *a << endl;
    delete a; // variable delete 

    /* float *f = new float;
    *f = 5.348;
    cout << *f << endl; */
    return 0;
}