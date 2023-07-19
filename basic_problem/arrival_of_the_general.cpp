#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n + 1]; 
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int max_value = 0;
    int max_value_index = 101;

    int min_value = INT_MAX;
    int min_value_index = 101;

    for(int i = 1; i <= n; i++) {
        if(max_value < arr[i]) {
            max_value = arr[i];
            max_value_index = i;
        }
        
        if(min_value >= arr[i]) {
            min_value = arr[i];
            min_value_index = i;
        }
    }

    if(max_value_index < min_value_index) {
        int step = (max_value_index - 1) + (n - min_value_index);
        cout << step << "\n";
    } else {
        int step = ((max_value_index - 1) - 1) + (n - min_value_index);
        cout << step << "\n";
    }
    return 0;
}

/*
7
10 10 53 32 74 76 34


*/