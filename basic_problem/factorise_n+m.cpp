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
        if (n == 2) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
    return 0;
}