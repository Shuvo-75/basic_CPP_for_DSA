#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int m = 0; m < x; m++) {
        int n, s;
        cin >> n >> s;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int flag = 0;

        if (n >= 3) {
            for (int i = 0; i < n - 2; i++) {
                for (int j = i + 1; j < n - 1; j++) {
                    for (int k = j + 1; k < n; k++) {
                        if (a[i] + a[j] + a[k] == s) {
                            flag = 1;
                            break;
                        }
                    }
                    
                    if (flag) {
                        break;  // No need to check further
                    }
                }   
                
                if (flag) {
                    break;  // No need to check further
                }
            }
        }

        if (flag == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
