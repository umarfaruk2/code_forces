#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        int arr[n+1];
        int arr2[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        int even = 0, odd = 0;
        for (int i = 1; i <= n; i++) {
            if (arr[i]%2 == 0) {
                even++;
            }else {
                odd++;
            }
        }
        
        cout << min(even, odd) << endl;
    }
    return 0;
}