#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 

int main() {
    int t, n;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> n;
        int arr[n+1];
        int arr2[n];

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
  
        int min = arr[1];
        for (int i = 1; i <= n; i++) {
            if (min > arr[i]) 
                min = arr[i];
        }
        for (int i = 1; i <= n; i++) {
            arr2[i] = arr[i] - min;
        }
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += arr2[i];
        }
        cout << sum << endl;
    }
    return 0;
}