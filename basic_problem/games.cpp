#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n;

    int arr_1[n];
    int arr_2[n];

    for(int i = 0; i < n; i++) {
        cin >> arr_1[i] >> arr_2[i];
    }

    int find_team = 0;

    for(int i = 0; i < n; i++) {
        for(int k = 0; k < n; k++) {
            if(arr_1[i] == arr_2[k]) {
                find_team++;
            }
        }
    }

    cout << find_team << "\n";
    return 0;
}