#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 

int main() {
    int t, w, h;
    long n;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> w >> h >> n;
         
        int pieces = 1;
        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }
        while (w%2 == 0) {
            pieces *= 2;
            w /= 2;
        }
        while (h%2 == 0) {
            pieces *= 2;
            h /= 2;
        }

        if (pieces >= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}