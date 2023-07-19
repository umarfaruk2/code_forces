#include <bits/stdc++.h>
using namespace std; 

int arr_1[101];
int arr_2[101];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a, b, c;
    cin >> a >> b >> c;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] < 97) {
            a[i] += 32;
            arr_1[(a[i] - 'a') + 1]++;
        }
    }

    for(int i = 0; i < b.size(); i++) {
        if(b[i] < 97) {
            b[i] += 32;
            arr_1[(b[i] - 'a') + 1]++;
        }
    }

    for(int i = 0; i < c.size(); i++) {
        if(c[i] < 97) {
            c[i] += 32;
            arr_2[(c[i] - 'a') + 1]++;
        }
    }

    bool is_ok = true;

    for(int i = 1; i <= 26; i++) {
        if(arr_1[i] != arr_2[i]) {
            is_ok = false;
            break;
        }
    }
    
    if(is_ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}