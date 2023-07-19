#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    map<string, int> mp;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if(mp.find(s) == mp.end()) {
            mp[s] = 1;
            cout << "OK" << "\n";
        } else {
            cout << s << mp[s] << "\n";
            mp[s]++;
        }
    }

   return 0;
}