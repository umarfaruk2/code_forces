#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> arr(n);
    int index = 1;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 1; i < n; i++) {
        if(arr[i-1][0] == '1') {
            if(arr[i][0] != '1') 
                index++;
        }
        if(arr[i-1][0] == '0') {
            if(arr[i][0] != '0')
                index++;
        }
    }
    cout << index << "\n";
    return 0;
}