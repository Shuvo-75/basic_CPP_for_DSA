#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    /* s += t; // easy way to write code 
    s = s + t;
    s.append(t);
    cout << s << endl;
    cout << t << endl; */
    
    // a = "HelloA"; // works
    // s = s + "A"; // works
    // a[5] = 'A'; // didn't work

    // a.push_back('S'); // inset in last 
    // a.pop_back(); // delete in last 

    /* a = "Gello";
    a.assign("Gello");
    cout << a << endl; */

    string a = "HelloWorld";
    // a.erase(4, 1);
    /*a.erase(4, 1) 
        where a.erase(start_index, how many character you want to delete)
    */

    // a.replace(4,3,"so");
    // a.insert(5, "Shuvo");
    /*
        where a.replate(start_ind, how_many_char_u_want_to_delete,  you_want_to_added_file);
    */
    // a.replace(5, 0, "Shuvos");

    
    cout << a << endl;
    return 0;
}