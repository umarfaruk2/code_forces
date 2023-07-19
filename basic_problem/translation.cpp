#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s, t;
    cin >> s >> t;

    if(s.size() != t.size()) {
        cout << "NO\n";
    } else {
        int index = t.size() - 1;
        for(int i = 0; i < s.size(); i++) {
            if(t[index] != s[i]) {
                cout << "NO\n";
                return 0;
            }
            index--;
        }
        cout << "YES\n";
    }
    return 0;
}