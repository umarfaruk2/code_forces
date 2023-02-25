#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;


    int room = 0;
    for(auto val: arr)
        if(val.first <= val.second-2) {
            room++;
        }

    cout << room << "\n"; 
    return 0;
}