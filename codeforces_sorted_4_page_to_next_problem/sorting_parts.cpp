#include <bits/stdc++.h>
using namespace std; 

bool check_sort(vector<int> arr, int n) {
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vector<int> arr(x);
        for(int i = 0; i < x; i++) {
            cin >> arr[i];
        }

        if(check_sort(arr, x)) {
            cout << "NO\n";
            continue;
        }
        // vector<int> arr2(arr.size());
        // copy(arr.begin(), arr.end(), arr2.begin());

        // sort(arr2.begin(), arr2.end());

        for(int i = 0; i < x; i++) {
            sort(arr.begin(), arr.begin()+arr[i]);
            arr[arr[i]] = arr[i];
            
            for(auto val : arr) 
                cout << val << " ";           
        }
    } 
    return 0;
}