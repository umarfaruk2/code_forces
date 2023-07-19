#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n;

    set<int> arr;
    int p;
    cin >> p;

    for(int i = 0; i < p; i++) {
        int x; 
        cin >> x;
        arr.insert(x);
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++) {
        int x; 
        cin >> x;
        arr.insert(x);
    }
   
    if(arr.size() == n) {
        cout << "I become the guy.\n";
    } else {
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}