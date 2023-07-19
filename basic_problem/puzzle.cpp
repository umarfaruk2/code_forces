#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> arr(m + 1);

    for(int i = 1; i <= m; i++) {
        cin >> arr[i];
    }    

    sort(arr.begin(), arr.end());

    int find_puzzle = INT_MAX;
    for(int i = 1; i <= m; i++) {
        if(i + (n - 1) < m + 1) {
            int dif = arr[i + (n - 1)] - arr[i];
            if(find_puzzle > dif)
                find_puzzle = dif;
        }
    }

    cout << find_puzzle << "\n";
    return 0;
}