#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int str_len = s.length();

        if(str_len > 10) {
            cout << s[0] << str_len - 2 << s[str_len - 1] << "\n";
        } else {
            cout << s << "\n";
        }
    }
    return 0;
}