// #include <bits/stdc++.h>
// using namespace std; 

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int n;
//     cin >> n;

//     while(n--) {
//         int a, b;
//         cin >> a >> b;
//         char t1[a], t2[b];
//         for(int i = 0; i < a; i++) 
//             cin >> t1[i];
//         for(int i = 0; i < b; i++)
//             cin >> t2[i];

         
//     }
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string tower1, tower2;
        cin >> tower1 >> tower2;

        if (tower1[0] != tower2[0] || tower1[n-1] != tower2[m-1]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
