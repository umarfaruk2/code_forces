#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 

int main() {
    int t;
    cin >> t;
    
    for (int i = 1; i <= t; i++) {
        int a, b;
        cin >> a >> b;

        if (a == 0) {
            cout << 1 << endl;
        } else {
            int c = a*1;
            int d = b*2;
            cout << c+d+1 << endl;
        }
    }
    return 0;
}