#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int flag = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            flag = 1;
            break;
        }
    }
    if(flag)  {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}