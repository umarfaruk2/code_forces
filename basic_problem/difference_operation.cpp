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
            cin >> arr[i];
        }
        int flag = 0;
        for (int i = 2; i <= n; i++) {
            if (arr[i]%arr[1] != 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}