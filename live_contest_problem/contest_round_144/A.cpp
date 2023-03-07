#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s1 = "FBFFBFFBFB";
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int found = s1.find(s);

        if(found != string::npos) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } 
    return 0;
}