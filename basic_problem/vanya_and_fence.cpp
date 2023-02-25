#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, h;
    cin >> n >> h;

    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] <= h) 
            ans += 1;
        else 
            ans += 2;
    } 
    cout << ans << "\n";
    return 0;
}