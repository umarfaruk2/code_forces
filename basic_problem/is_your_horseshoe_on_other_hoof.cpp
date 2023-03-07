#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<int, int> mp;

    for(int i = 1; i <= 4; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    int sum = 0;
    for(auto val : mp) {
        if(val.second > 1) {
            sum += val.second-1; 
        }
    }

    cout << sum << "\n";
    return 0;
}