#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int a;
    cin >> a;

    int step = 0;
    for(int i = 0; i < n; i++) {
        for(int k = 1 + i; k < n; k++) {
            if(arr[i] + arr[k] == a) {
                step++;
            }
        }
    }

    cout << step << "\n";
    return 0;
}