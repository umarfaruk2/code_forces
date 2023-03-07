#include <bits/stdc++.h>
using namespace std; 

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    if(n%2 == 0) {
        ll res = n/2;
        cout << res << "\n";
    } else {
        ll res = (n/2)+1;
        cout << -res << "\n";
    }
    return 0;
}