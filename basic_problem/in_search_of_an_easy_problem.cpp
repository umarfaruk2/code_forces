#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < arr.size(); i++)
        cin >> arr[i];

    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 1) {
            cout << "HARD\n";
            ans = 0;
            break;
        }
        ans = 2;
    }

    if(ans == 2)
        cout << "EASY\n"; 
    return 0;
}