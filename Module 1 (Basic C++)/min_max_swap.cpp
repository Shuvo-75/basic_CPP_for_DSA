#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    swap (a,b);
    cout << a << " "<< b;
    return 0;
}



// manually use 
/* 
void my_swap(int *a, int *b)
{
    int tem = *a;
    *a = *b;
    *b = tem;
}
int main()
{
    int a, b;
    cin >> a >> b;
    
    my_swap(&a,&b);
    cout << a << " " << b << endl;
    /* int c = min(a,b);
    int d = max(a,b); */
    /* int mm = min({a,b,c,d});
    int mx = max({a,b,c,d});
    cout << mm << " " << mx << endl; 
    return 0;
}    
*/
