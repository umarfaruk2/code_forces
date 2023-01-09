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
        int index = 1;
        for (int i = n; i >= 1; i--) {
            arr[index] = i;
            index++;
        }
        if (n%2 != 0) {
            for (int i = n/2; i >= 1; i--) {
                int tem = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tem;
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}