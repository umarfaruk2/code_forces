#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    string st = "";
    for(int i = 0; i < n; i += t + 1) {
        if(s[i] == 'B' && s[i + t] == 'G') {
            char temp = s[i];
            st += s[i + t];
            st += temp;
        } else if(s[i] == 'G'){
           st += s[i]; 
        }
    }

    cout << st << "\n";
    return 0;
}