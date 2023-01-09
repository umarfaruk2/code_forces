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
        for (int i = 1; i <= n; i++) {
            int k;
            cin >> k;
            char s[10];
            cin >> s;
            int len =  strlen(s);
            while(len--) {
                if (s[len] == 'D') {
                    if (arr[i] == 9) {
                        arr[i] = 0;
                    } else {
                        arr[i]++;
                    }
                } else {
                    if(arr[i] == 0) {
                        arr[i] = 9;
                    } else {
                        arr[i]--;
                    }
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}