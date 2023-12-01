#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int id;
        char name[1001];
        char section;
        int mark;
        
};
int main()
{
    int n;
    cin >> n;
    Student a[n];

    int highest_mark[n]; // declare highest mark -1
    for (int i = 0; i < n; i++)
    {
        highest_mark[i] = 0;
    }
    
    // whole pair 
    for (int i = 0; i < n; i++)
    {
        // first pair
        for (int j = 0; j < 3; j++)
        {
            cin >> a[j].id >> a[j].name >> a[j].section >> a[j].mark;
        }
        
        for (int j = 0; j < 3; j++)
        {
            if(a[j].mark > highest_mark[i])
            {
                highest_mark[i] = a[j].mark; 
            }
        }
        for (int j = 0; j < 3; j++)
        {
            if(a[j].mark == highest_mark[i])
            {
                cout << a[j].id << " " << a[j].name << " " << a[j].section << " " << a[j].mark << endl;
                break;
            }
        } 

    }

    return 0;
}