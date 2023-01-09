#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b && a < c || a < b && a > c) {
            cout << a << endl;
        } else if (b > a && b < c || b < a && b > c) {
            cout << b << endl;
        } else {
            cout << c << endl;
        }
    }
    return 0;
}