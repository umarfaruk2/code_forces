#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a >= c && a <= d) {
            cout << a << endl;
        } else if(c >= a and c <= b) {
            cout << c << endl;
        } else {
            cout << (a+c) << endl;
        }
    }
    return 0;
}