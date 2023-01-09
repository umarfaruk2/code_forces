#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int arr[n+1];

        for (int i = 1; i <= n; i++) {
            if (n == 1) {
                arr[i] = i;
            } else {
                arr[i] = i+1;
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}