#include <bits/stdc++.h>
using namespace std; 

int arr[27];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n < 26) {
        cout << "NO\n";
    } else {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] < 97) {
                s[i] = s[i] + 32;
            }
        }

        for(int i = 0; i < s.size(); i++) {
            arr[(s[i] - 'a') + 1]++;
        }

        bool is_right = true;
        for(int i = 1; i <= 26; i++) {
            if(arr[i] == 0) {
                is_right = false;
                break;
            }
        }

        if(is_right) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}